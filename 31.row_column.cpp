#include <iostream>


//23.01.19 by tarik.
using namespace std;


int main(){

    int column,row;

    cout << "How many columns ?" << endl;
    cin >> column;
    cout << endl << "How Many rows ? " << endl;
    cin >> row;

cout << endl;
    for(int i =0; i<row ; i++){

      if(i == 0){
          for(int j =0;j<column;j++)
            {
                cout << '*';
            }
      }
      else if(i == row-1){
        for(int j=0; j<column; j++  )
          {
              cout << '*';
          }
      }
      else {
        //cout << "log";
        for(int j =0; j<column;j++)
        {
          if(j==0){
            cout << '*';
          }

          else if(j== column - 1){
            cout << '*';
          }
          else{
            cout << ' ';
          }
        }
      }
      cout << endl;
    }


}
