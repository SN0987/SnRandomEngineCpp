# SnRandomEngineCpp
Can be used for console projects.
This is for c++ only wont work with anything maybe c


EXAMPLES!

int x = rd::random(100,200) //range one low to range two high

std::cout << x << std:: endl;


Making a guessing game in console project
using namespace std;
int main() {
  while(true) {
    int num1,num2;
    cout << "Enter Number 1 {low}" << endl;
    cin >> num1;
    cout << "Enter Number 2 {highest}" << endl;
    cin >> num2;
    guess = rd::random(num1,num2);
    int answer;
    cout << "Whats the answer between your numbers" << endl;
    if(answer == guess) {
      cout << "You win" << endl;
    } else { 
      cout << "You lose" << endl;
    }
    
  }
}
