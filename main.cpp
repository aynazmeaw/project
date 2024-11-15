#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class Arr{
	private:
		int arr[100];
		int size = 0;
	public:
		void Insert(int index, int value){
			for(int i= size; i>= index; i--){
				arr[i+1] = arr[i];
			}
			arr[index] = value;
			size++;
			
		}
		int Delete_By_Value(int value){
			for(int i=0; i < size; i++){
				if (arr[i] == value){
					for(int j= i; j< size - 1; j++){
						arr[j]= arr[j + 1];
					}
					size--;
					return i;
				}
			}
			return -1;
		}
		void Delete_By_Index(int input){
			for (int i = input; i < size - 1; i++){
				arr[i] = arr[i + 1];
			}	
			size--;
		}
		void Display(){
			for(int i=0; i< size; i++){
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
		void Append(int value){
			arr[size] = value;
			size++;
		}
		void Reverse(int arr[]){
			
		}
		int Search_By_Value(int value){
			for(int i = 0; i < size; i++){
				if(arr[i] == value){
					return i;
				}
			}		
			return -1;
		}
};

int main(int argc, char** argv) {
	
	Arr arr;
	arr.Append(2);
	arr.Append(4);
	arr.Append(33);
	arr.Display();
	arr.Delete_By_Index(1);
	arr.Display();
	arr.Append(32);
	arr.Display();
	
	return 0;
}

