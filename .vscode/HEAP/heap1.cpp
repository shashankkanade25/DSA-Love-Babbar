#include<iostream>
#include<queue>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;

    heap(){
        arr[0]=-1;
        size=0;   
    }

    void insert(int val){
        size=size+1;          //  When a new value is inserted, the heap size increases by 1.
        int index = size;       //last node
        arr[index]=val;         //val insert
        //take it to right position
        while(index > 1){
            int parent = index/2;   //parent nikalo
                                    //fir check karo small h ya big
            if(arr[parent] < arr[index]){
                swap(arr[parent],arr[index]);
                index = parent; //update index
            }else{
                return;     //u r at right pos
        }
    }
    }
    void print(){
        for(int i=1; i<=size; i++ ){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }

    void deleteFromHeap(){
        if(size==0){
            cout<<"Nothing is delete"<<endl;
            return;
        }
        //step 1 : put last element into first index
        arr[1]=arr[size];    //swap
        //step 2 : remove last element
        size--;

        //step 3 :take to correct pos
        int i = 1;
        while(i <= size){
            int leftindex = i*2;
            int rightindex= i*2+1;

            if(leftindex <= size && arr[i] < arr[leftindex]){
                swap(arr[i],arr[leftindex]);
                i = leftindex;  //i update 
            }else if (rightindex <= size && arr[i] < arr[rightindex]){
                    swap(arr[i],arr[rightindex]);
                    i=rightindex;
            }
            else{
                return;     //all right
            }
        }


    }

    void heapify(int arr[],int n, int i){
        int largest = i;
        int left = 2*i;
        int right = 2*i+1;

        if(left <= n && arr[largest] < arr[left]){
            largest = left ;
        }
        if(right <= n && arr[largest] < arr[right]){
            largest = right ;
        }

        if(largest != i){       //largest updated
            swap(arr[largest],arr[i]);
            heapify(arr,n,largest);
        }
    }
    
void heapSort(int arr[],int n){
    //create max heap
    // for (int i = n/2 ; i>0 ; i--){
    //     heapify(arr,n,i);
    //  }

    //  //swap 1 and n & heapify
    //  for(int t = n; t>1 ; t--){
    //     swap(arr[1],arr[t]);   
    //     heapify(arr,t-1,1);
    //  }

    int size = n;
    while(size>1){
        
        swap(arr[size],arr[1]);
        size--;
        //step 2 to correct pos
        heapify(arr,size,1);
    }
    }
    
};

int main(){
    heap h;
    h.insert(50);
    h.insert(70);
    h.insert(40);
    h.insert(10);

    h.print();
    h.deleteFromHeap(); //70 will delete
    h.print();

    int array[6]={-1, 54, 56,58, 52,50};
    int n = 5;

    //heap creation
    for (int i = n/2 ; i>0 ; i--){
       h.heapify(array,n,i);
    }
    cout<<"Printing the array now"<<endl;
    for(int i=1 ; i<= n ; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;

    //heapSort  
    h.heapSort(array,n);

    //print heapsort
    cout<<"Heap after sorting:"<<endl;
    for(int i=1 ; i<= n ; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;

    priority_queue<int>pq;
    
    pq.push(10);
    pq.push(50);
    pq.push(30);
    pq.push(40);

    cout<<"Element at top : "<<pq.top()<<endl;
    pq.pop();
    cout<<"size: "<<pq.size()<<endl;

    //min heap

    priority_queue<int , vector<int>,greater<int>>minheap;
    minheap.push(10);
    minheap.push(50);
    minheap.push(30);
    minheap.push(40);

    cout<<"Element at top : "<<minheap.top()<<endl;
    minheap.pop();
    cout<<"size: "<<minheap.size()<<endl;

return 0;
}