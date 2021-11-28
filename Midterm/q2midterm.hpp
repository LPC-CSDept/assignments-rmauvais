using namespace std;
//create class and variables
class Student{
  public:
  int ID;
  string name;
  int Score1;
  int Score2;
  int Score3;
  int total_scores;

  void display(student a[],int n){
    //sort total scores in descending order
    for(int i=-;i<n;i++){
      int swaps =0; 
      //detects any swaps
      for(int j=0;j<n-i-1;j++){
        swap(a[j],a[j+1]);
        swaps=1;
        //swap
      }
    }
    if(!swaps)
    //no swaps, sort aray
      break;
  }
  //print data
  for(int i=0;i<n;i++){
    cout<<"Student ID: "<<a[i].id<<" Student Name: "<<a[i].name<<" Students Total Score: "<<a[i].score1+a[i].score2+a[i].score3<<endl;
  }
}

//search ID using binary
int binarysearch(studnet a[], int n, int ID){
  //start pointer
  int start=0;
  //end pointer
  int end = n-1;
  //run loop
  while(start<=end){
    int mid = (start+end)/2;
    // if total score is equal
    if(a[mid].ID == ID){
      return mid;
    }
    //else if total score > middle element
    else if(a)[mid].ID==ID){
      start = mid+1;
    }
    //end if total score of middle is less
    else{
      end=mid -1;
    }
  }
  return -1;
}