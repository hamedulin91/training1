#include <thread>
#include <vector>

 
int main()
{
  std::vector<std::thread> threads;
  
  for(int i=0;i<20;i++)
    {
      threads.push_back(std::thread([](){while(true){}}));
    }
  while(true){}
}