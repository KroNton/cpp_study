#include <iostream>



void getMinAndMax(int numbers[],int size,int*min,int*max){


   for (size_t i = 0; i < size; i++)
   {
      if (numbers[i]<*min)
      {
         *min=numbers[i];
      }
      if (numbers[i]>*max)
      {
         *max=numbers[i];
      }
      
   }

}

int main()
{

   int numbers[5]={12,-5,-12,20,18};
   int min=numbers[0];
   int max=numbers[0];

   getMinAndMax(numbers,5,&min,&max);

   std::cout<<"min number: "<<min<<std::endl;
   std::cout<<"max number: "<<max<<std::endl;

   return 0;
}

