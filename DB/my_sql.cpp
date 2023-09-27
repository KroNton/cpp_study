#include <iostream>
#include <sqlite3.h>
#include <ctime>

int main() {
    sqlite3* db;
    int rc;

    // Open a database file (or create if it doesn't exist)
    rc = sqlite3_open("mydatabase.db", &db);

    if (rc) {
        std::cerr << "Error opening database: " << sqlite3_errmsg(db) << std::endl;
        return rc;
    }

    // SQL statement to create a table with three columns
    const char* createTableSQL = "CREATE TABLE IF NOT EXISTS mytable ("
                                 "time TIMESTAMP, "
                                 "odom_angle REAL, "
                                 "amcl_angle REAL"
                                 ");";

    // Execute the SQL statement to create the table
    rc = sqlite3_exec(db, createTableSQL, 0, 0, 0);

    if (rc != SQLITE_OK) {
        std::cerr << "SQL error: " << sqlite3_errmsg(db) << std::endl;
        sqlite3_close(db);
        return rc;
    }

    // Get the current time as a string in the format 'YYYY-MM-DD HH:MM:SS'
    time_t currentTime = time(nullptr);
    struct tm* localTime = localtime(&currentTime);
    char timeValue[20];
    strftime(timeValue, sizeof(timeValue), "%Y-%m-%d %H:%M:%S", localTime);

    // Define variables for other values
    double odomAngle = 45.0;
    double amclAngle = 42.5;

    // Prepare the SQL insert statement with placeholders
    const char* insertSQL = "INSERT INTO mytable (time, odom_angle, amcl_angle) VALUES (?, ?, ?);";
    sqlite3_stmt* stmt;

    // Prepare the statement
    rc = sqlite3_prepare_v2(db, insertSQL, -1, &stmt, 0);

    if (rc != SQLITE_OK) {
        std::cerr << "SQL prepare error: " << sqlite3_errmsg(db) << std::endl;
        sqlite3_close(db);
        return rc;
    }

    // Bind values to the prepared statement
    sqlite3_bind_text(stmt, 1, timeValue, -1, SQLITE_STATIC); // Bind timestamp
    sqlite3_bind_double(stmt, 2, odomAngle); // Bind odom_angle
    sqlite3_bind_double(stmt, 3, amclAngle); // Bind amcl_angle

    // Execute the prepared statement
    rc = sqlite3_step(stmt);

    if (rc != SQLITE_DONE) {
        std::cerr << "SQL execution error: " << sqlite3_errmsg(db) << std::endl;
    } else {
        std::cout << "Values inserted successfully!" << std::endl;
    }

    // Finalize and close the statement
    sqlite3_finalize(stmt);

    // Close the database
    sqlite3_close(db);

    return 0;
}
