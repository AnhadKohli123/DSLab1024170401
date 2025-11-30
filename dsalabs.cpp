#include <iostream>
using namespace std;
//1.)
// int main() {
//     int arr[100], n = 0, choice, pos, val, key, i, flag;

//     while (true) {
//         cout << "\n---- MENU ----\n";
//         cout << "1. CREATE\n2. DISPLAY\n3. INSERT\n4. DELETE\n5. LINEAR SEARCH\n6. EXIT\n";
//         cout << "Enter choice: ";
//         cin >> choice;

//         switch (choice) {
//         case 1:
//             cout << "Enter no. of elements: ";
//             cin >> n;
//             cout << "Enter the elements one by one:\n";
//             for (i = 0; i < n; i++) cin >> arr[i];
//             break;

//         case 2:
//             if (n == 0) cout << "Array is empty.\n";
//             else {
//                 cout << "Array elements: ";
//                 for (i = 0; i < n; i++) cout << arr[i] << " ";
//                 cout << "\n";
//             }
//             break;

//         case 3:
//             if (n == 100) cout << "Array is full.\n";
//             else {
//                 cout << "Enter position (1-" << n + 1 << "): ";
//                 cin >> pos;
//                 cout << "Enter value: ";
//                 cin >> val;
//                 for (i = n; i >= pos; i--) arr[i] = arr[i - 1];
//                 arr[pos - 1] = val;
//                 n++;
//             }
//             break;

//         case 4:
//             if (n == 0) cout << "Array is empty.\n";
//             else {
//                 cout << "Enter position (1-" << n << "): ";
//                 cin >> pos;
//                 for (i = pos - 1; i < n - 1; i++) arr[i] = arr[i + 1];
//                 n--;
//             }
//             break;

//         case 5:
//             if (n == 0) cout << "Array is empty.\n";
//             else {
//                 cout << "Enter value to search: ";
//                 cin >> key;
//                 flag = 0;
//                 for (i = 0; i < n; i++) {
//                     if (arr[i] == key) {
//                         cout << "Found at position " << i + 1 << "\n";
//                         flag = 1;
//                         break;
//                     }
//                 }
//                 if (flag == 0) cout << "Not found.\n";
//             }
//             break;

//         case 6:
//             cout << "Exited\n";
//             return 0;

//         default:
//             cout << "Invalid choice.\n";
//         }
//     }
// }
//2.)
// int main() {
//     int arr[100], n, i, j, k;

//     cout << "Enter number of elements: ";
//     cin >> n;

//     cout << "Enter " << n << " elements:\n";
//     for (i = 0; i < n; i++) {
//         cin >> arr[i];
//     }


//     for (i = 0; i < n; i++) {
//         for (j = i + 1; j < n; j++) {
//             if (arr[i] == arr[j]) {
           
//                 for (k = j; k < n - 1; k++) {
//                     arr[k] = arr[k + 1];
//                 }
//                 n--;  
//                 j--;   
//             }
//         }
//     }

//     cout << "new unique array is:\n";
//     for (i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << "\n";

//     return 0;
// }
//3.) output is 10000
//4.)
//a)
// int main() {
//     int arr[100], n, i;

//     cout << "Enter size of array: ";
//     cin >> n;

//     cout << "Enter " << n << " elements:\n";
//     for(i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int start = 0;
//     int end = n - 1;
//     while(start < end) {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }

//     cout << "Reversed array:\n";
//     for(i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }
//b)

// int main() {
//     int a[10][10], b[10][10], c[10][10];
//     int i, j, k, m, n, p, q;

//     cin >> m >> n;
//     cin >> p >> q;

//     if(n != p) {
//         cout << "Not possible";
//         return 0;
//     }

//     for(i=0;i<m;i++)
//         for(j=0;j<n;j++)
//             cin >> a[i][j];

//     for(i=0;i<p;i++)
//         for(j=0;j<q;j++)
//             cin >> b[i][j];

//     for(i=0;i<m;i++)
//         for(j=0;j<q;j++) {
//             c[i][j]=0;
//             for(k=0;k<n;k++)
//                 c[i][j]+=a[i][k]*b[k][j];
//         }

//     for(i=0;i<m;i++) {
//         for(j=0;j<q;j++)
//             cout << c[i][j] << " ";
//         cout << endl;
//     }
// }
//c)
// int main() {
//     int a[10][10], t[10][10];
//     int m,n,i,j;

//     cin >> m >> n;

//     for(i=0;i<m;i++)
//         for(j=0;j<n;j++)
//             cin >> a[i][j];

//     for(i=0;i<m;i++)
//         for(j=0;j<n;j++)
//             t[j][i]=a[i][j];

//     for(i=0;i<n;i++) {
//         for(j=0;j<m;j++)
//             cout << t[i][j] << " ";
//         cout << endl;
//     }
// }

//5.)
// int main() {
//     int a[10][10], m, n, i, j, s;

//     cout << "Enter rows and cols: ";
//     cin >> m >> n;

//     cout << "Enter elements:\n";
//     for(i=0;i<m;i++)
//         for(j=0;j<n;j++)
//             cin >> a[i][j];

//     for(i=0;i<m;i++) {
//         s=0;
//         for(j=0;j<n;j++) s+=a[i][j];
//         cout << "Row " << i+1 << " sum = " << s << endl;
//     }

//     for(j=0;j<n;j++) {
//         s=0;
//         for(i=0;i<m;i++) s+=a[i][j];
//         cout << "Col " << j+1 << " sum = " << s << endl;
//     }
// }
//                                   ASSIGNMENT 2
//1.)
//  int main() {
//     int n, key;
//     cout << "Enter size of array: ";
//     cin >> n;

//     int arr[100];
//     cout << "Enter " << n << " sorted elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     cout << "Enter element to search: ";
//     cin >> key;

//     int start = 0, end = n - 1, mid, result = -1;

//     while (start <= end) {
//         mid = (start + end) / 2;

//         if (arr[mid] == key) {
//             result = mid;
//             break;
//         }
//         else if (arr[mid] < key) {
//             start = mid + 1;
//         }
//         else {
//             end = mid - 1;
//         }
//     }

//     if (result != -1)
//         cout << "Element found at index " << result << endl;
//     else
//         cout << "Element not found" << endl;

//     return 0;
// }
// 2.)
// int main() {
//     int arr[] = {64, 34, 25, 12, 22, 11, 90};
//     int n = 7;

//     cout << "Original array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 // swap
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
// 3.)
// int main() {
//     int n;
//     cout<<"enter n: ";
//     cin>>n;

//     int arr[100];
//     cout<<"enter "<<n-1<<" elements (sorted): ";
//     for(int i=0;i<n-1;i++){
//         cin>>arr[i];
//     }

//     // linear method
//     int miss1=n;
//     for(int i=0;i<n-1;i++){
//         if(arr[i]!=i+1){
//             miss1=i+1;
//             break;
//         }
//     }
//     cout<<"missing number (linear)="<<miss1<<endl;

//     // binary search method
//     int start=0,end=n-2,miss2=n;
//     while(start<=end){
//         int mid=(start+end)/2;
//         if(arr[mid]==mid+1){
//             start=mid+1;
//         }
//         else{
//             miss2=mid+1;
//             end=mid-1;
//         }
//     }
//     cout<<"missing number (binary)="<<miss2<<endl;

//     return 0;
// }
// 4.)
// #include <iostream>
// #include <string.h>
// using namespace std;

// int main() {
//    (a) Concatenate
//     char s1[100], s2[100];
//     cout<<"(a) enter first string: ";
//     cin>>s1;
//     cout<<"enter second string: ";
//     cin>>s2;

//     int i=0,j=0;
//     while(s1[i]!='\0') i++;
//     while(s2[j]!='\0'){
//         s1[i]=s2[j];
//         i++; j++;
//     }
//     s1[i]='\0';
//     cout<<"after concatenation: "<<s1<<endl;

// (b) Reverse
//     int main() {
//     char str[100];
//     cout << "Enter a string: ";
//     cin >> str;

//     int n = strlen(str);

//     for (int i = 0; i < n/2; i++) {
//         char temp = str[i];
//         str[i] = str[n-i-1];
//         str[n-i-1] = temp;
//     }

//     cout << "Reversed string: " << str << endl;
//     return 0;
// }
//   (c) Delete vowels
//     char str2[100];
//     cout<<"\n enter string to delete vowels: ";
//     cin>>str2;
//     int p=0,q=0;
//     while(str2[p]!='\0'){
//         char ch=str2[p];
//         if(ch!='a'&&ch!='e'&&ch!='i'&&ch!='o'&&ch!='u'&&
//            ch!='A'&&ch!='E'&&ch!='I'&&ch!='O'&&ch!='U'){
//             str2[q]=str2[p];
//             q++;
//         }
//         p++;
//     }
//     str2[q]='\0';
//     cout<<"after deleting vowels: "<<str2<<endl;

// (d) Sort strings
//     int num;
//     cout<<"\n(d) enter number of strings: ";
//     cin>>num;
//     char arr[10][100], temp[100];
//     cout<<"enter strings: ";
//     for(int k=0;k<num;k++){
//         cin>>arr[k];
//     }
//     for(int k=0;k<num-1;k++){
//         for(int m=k+1;m<num;m++){
//             if(strcmp(arr[k],arr[m])>0){
//                 strcpy(temp,arr[k]);
//                 strcpy(arr[k],arr[m]);
//                 strcpy(arr[m],temp);
//             }
//         }
//     }
//     cout<<"after sorting:\n";
//     for(int k=0;k<num;k++){
//         cout<<arr[k]<<endl;
//     }

//    (e) Uppercase to lowercase
//     char ch;
//     cout<<"\n(e) enter character (uppercase): ";
//     cin>>ch;
//     if(ch>='A' && ch<='Z'){
//         ch=ch+32;
//     }
//     cout<<"lowercase: "<<ch<<endl;

//     return 0;
// }
// 5) 
// int main() {
//     // (a) Diagonal Matrix
//     int n;
//     cout<<"(a) enter size of diagonal matrix: ";
//     cin>>n;
//     int diag[100];
//     cout<<"enter "<<n<<" diagonal elements: ";
//     for(int i=0;i<n;i++) cin>>diag[i];
//     cout<<"diagonal matrix:\n";
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==j) cout<<diag[i]<<" ";
//             else cout<<"0 ";
//         }
//         cout<<endl;
//     }

//     // (b) Tri-diagonal Matrix
//     cout<<"\n(b) enter size of tri-diagonal matrix: ";
//     cin>>n;
//     int tri[300];
//     cout<<"enter "<<3*n-2<<" elements (lower, diagonal, upper): ";
//     for(int i=0;i<3*n-2;i++) cin>>tri[i];
//     cout<<"tri-diagonal matrix:\n";
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==j) cout<<tri[i]<<" ";
//             else if(i==j+1) cout<<tri[n+i-1]<<" ";
//             else if(i+1==j) cout<<tri[2*n+i-1]<<" ";
//             else cout<<"0 ";
//         }
//         cout<<endl;
//     }

//     // (c) Lower Triangular Matrix
//     cout<<"\n(c) enter size of lower triangular matrix: ";
//     cin>>n;
//     int low[500];
//     cout<<"enter "<<n*(n+1)/2<<" elements row wise: ";
//     for(int i=0;i<n*(n+1)/2;i++) cin>>low[i];
//     cout<<"lower triangular matrix:\n";
//     int k=0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i>=j) cout<<low[k++]<<" ";
//             else cout<<"0 ";
//         }
//         cout<<endl;
//     }

//     // (d) Upper Triangular Matrix
//     cout<<"\n(d) enter size of upper triangular matrix: ";
//     cin>>n;
//     int up[500];
//     cout<<"enter "<<n*(n+1)/2<<" elements row wise: ";
//     for(int i=0;i<n*(n+1)/2;i++) cin>>up[i];
//     cout<<"upper triangular matrix:\n";
//     k=0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i<=j) cout<<up[k++]<<" ";
//             else cout<<"0 ";
//         }
//         cout<<endl;
//     }

//     // (e) Symmetric Matrix
//     cout<<"\n enter size of symmetric matrix: ";
//     cin>>n;
//     int sym[500];
//     cout<<"enter "<<n*(n+1)/2<<" elements (lower part): ";
//     for(int i=0;i<n*(n+1)/2;i++) cin>>sym[i];
//     cout<<"symmetric matrix:\n";
//     k=0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i>=j) cout<<sym[k++]<<" ";          // lower part
//             else cout<<sym[j*(j+1)/2+i]<<" ";      // mirror
//         }
//         cout<<endl;
//     }

//     return 0;
// }
//6.)
// int main() {
//     int a[100][3], b[100][3], c[200][3], t[100][3];
//     int i, j, k;

//     // First matrix
//     cout << "Enter rows, cols and non-zero terms of first matrix: ";
//     cin >> a[0][0] >> a[0][1] >> a[0][2];
//     cout << "Enter row col value:\n";
//     for (i = 1; i <= a[0][2]; i++) cin >> a[i][0] >> a[i][1] >> a[i][2];

//     // Second matrix
//     cout << "Enter rows, cols and non-zero terms of second matrix: ";
//     cin >> b[0][0] >> b[0][1] >> b[0][2];
//     cout << "Enter row col value:\n";
//     for (i = 1; i <= b[0][2]; i++) cin >> b[i][0] >> b[i][1] >> b[i][2];

// a)
//     t[0][0] = a[0][1];
//     t[0][1] = a[0][0];
//     t[0][2] = a[0][2];
//     k = 1;
//     for (i = 0; i < a[0][1]; i++) {
//         for (j = 1; j <= a[0][2]; j++) {
//             if (a[j][1] == i) {
//                 t[k][0] = a[j][1];
//                 t[k][1] = a[j][0];
//                 t[k][2] = a[j][2];
//                 k++;
//             }
//         }
//     }
//     cout << "\nTranspose of First Matrix:\n";
//     for (i = 0; i <= t[0][2]; i++) cout << t[i][0] << " " << t[i][1] << " " << t[i][2] << "\n";
//b)
//     if (a[0][0] != b[0][0] || a[0][1] != b[0][1]) {
//         cout << "\nAddition not possible\n";
//     } else {
//         c[0][0] = a[0][0]; c[0][1] = a[0][1];
//         i = j = k = 1;
//         while (i <= a[0][2] && j <= b[0][2]) {
//             if (a[i][0] < b[j][0] || (a[i][0] == b[j][0] && a[i][1] < b[j][1]))
//                 c[k][0] = a[i][0], c[k][1] = a[i][1], c[k++][2] = a[i++][2];
//             else if (b[j][0] < a[i][0] || (a[i][0] == b[j][0] && b[j][1] < a[i][1]))
//                 c[k][0] = b[j][0], c[k][1] = b[j][1], c[k++][2] = b[j++][2];
//             else {
//                 int sum = a[i][2] + b[j][2];
//                 if (sum != 0) c[k][0] = a[i][0], c[k][1] = a[i][1], c[k++][2] = sum;
//                 i++; j++;
//             }
//         }
//         while (i <= a[0][2]) c[k][0] = a[i][0], c[k][1] = a[i][1], c[k++][2] = a[i++][2];
//         while (j <= b[0][2]) c[k][0] = b[j][0], c[k][1] = b[j][1], c[k++][2] = b[j++][2];
//         c[0][2] = k - 1;

//         cout << "\nAddition Result:\n";
//         for (i = 0; i <= c[0][2]; i++) cout << c[i][0] << " " << c[i][1] << " " << c[i][2] << "\n";
//     }

//c)
//     if (a[0][1] != b[0][0]) {
//         cout << "\nMultiplication not possible\n";
//     } else {
//         c[0][0] = a[0][0]; c[0][1] = b[0][1]; k = 1;
//         for (i = 1; i <= a[0][2]; i++) {
//             for (j = 1; j <= b[0][2]; j++) {
//                 if (a[i][1] == b[j][0]) {
//                     int row = a[i][0], col = b[j][1], val = a[i][2] * b[j][2];
//                     int found = 0;
//                     for (int x = 1; x < k; x++) {
//                         if (c[x][0] == row && c[x][1] == col) {
//                             c[x][2] += val;
//                             found = 1; break;
//                         }
//                     }
//                     if (!found) {
//                         c[k][0] = row; c[k][1] = col; c[k][2] = val; k++;
//                     }
//                 }
//             }
//         }
//         c[0][2] = k - 1;
//         cout << "\nMultiplication Result:\n";
//         for (i = 0; i <= c[0][2]; i++) cout << c[i][0] << " " << c[i][1] << " " << c[i][2] << "\n";
//     }
// }

//7.)
// int main() {
//     int n;
//     cout<<"enter size of array: ";
//     cin>>n;

//     int a[100];
//     cout<<"enter elements: ";
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     int cnt=0;
//     cout<<"Inversions are: \n";
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(a[i]>a[j]){
//                 cout<<"("<<a[i]<<","<<a[j]<<") ";
//                 cnt++;
//             }
//         }
//     }

//     cout<<"\nTotal number of inversions = "<<cnt;
//     return 0;
// 8.)
// int main() {
//     int n;
//     cout<<"enter size of array: ";
//     cin>>n;

//     int a[100];
//     cout<<"enter elements: ";
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     int distinct=0;

//     for(int i=0;i<n;i++){
//         bool repeat=false;
//         for(int j=0;j<i;j++){
//             if(a[i]==a[j]){
//                 repeat=true;
//                 break;
//             }
//         }
//         if(!repeat){
//             distinct++;
//         }
//     }

//     cout<<"total distinct elements = "<<distinct;
//     return 0;
// }
//                          ASSIGNMENT 3 (STACKS)

//Q1.
// #define MAX 5   // maximum size of stack

// class Stack {
//     int arr[MAX];
//     int top;

// public:
//     Stack() { top = -1; }

//     // Check if stack is empty
//     bool isEmpty() {
//         return (top == -1);
//     }

//     // Check if stack is full
//     bool isFull() {
//         return (top == MAX - 1);
//     }

//     // Push element into stack
//     void push(int x) {
//         if (isFull()) {
//             cout << "Stack Overflow! " << x << endl;
//         } else {
//             arr[++top] = x;
//             cout << x << " pushed into stack.\n";
//         }
//     }

//     // Pop element from stack
//     void pop() {
//         if (isEmpty()) {
//             cout << "Nothing to pop.\n";
//         } else {
//             cout << arr[top--] << " popped from stack.\n";
//         }
//     }

//     // Peek top element
//     void peek() {
//         if (isEmpty()) {
//             cout << "Stack is empty.\n";
//         } else {
//             cout << "Top element is: " << arr[top] << endl;
//         }
//     }

//     // Display all elements
//     void display() {
//         if (isEmpty()) {
//             cout << "Stack is empty.\n";
//         } else {
//             cout << "Stack elements (top to bottom acc. to LIFO): ";
//             for (int i = top; i >= 0; i--) {
//                 cout << arr[i] << " ";
//             }
//             cout << endl;
//         }
//     }
// };

// int main() {
//     Stack s;
//     int choice, value;

//     do {
//         cout << "\n--- Stack Menu ---\n";
//         cout << "1. Push\n2. Pop\n3. Peek\n4. Display\n5. isEmpty\n6. isFull\n7. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 cout << "Enter value to push: ";
//                 cin >> value;
//                 s.push(value);
//                 break;

//             case 2:
//                 s.pop();
//                 break;

//             case 3:
//                 s.peek();
//                 break;

//             case 4:
//                 s.display();
//                 break;

//             case 5:
//                 if (s.isEmpty())
//                     cout << "Stack is empty.\n";
//                 else
//                     cout << "Stack is not empty.\n";
//                 break;

//             case 6:
//                 if (s.isFull())
//                     cout << "Stack is full.\n";
//                 else
//                     cout << "Stack is not full.\n";
//                 break;

//             case 7:
//                 cout << "Exiting program.\n";
//                 break;

//             default:
//                 cout << "Invalid choice! Try again.\n";
//         }
//     } while (choice != 7);

//     return 0;
// }

//  Q2.)

// #include <string>


// int main() {
//     char stack[100];   // stack array
//     int top = -1;      // top of stack
//     string str;

//     cout << "Enter a string: ";
//     cin >> str;   // (use getline if you want spaces)

//     // Push each character into stack
//     for (int i = 0; i < str.length(); i++) {
//         stack[++top] = str[i];
//     }

//     // Pop characters back to reverse
//     cout << "Reversed string: ";
//     while (top != -1) {
//         cout << stack[top--];
//     }
//     cout << endl;

//     return 0;
// }

//Q3.)
// int main() {
//     char stack[100];   // stack array
//     int top = -1;      // top of stack
//     string expr;

//     cout << "Enter an expression: ";
//     getline(cin, expr);   // take full line including spaces

//     bool balanced = true;

//     for (int i = 0; i < expr.length(); i++) {
//         char ch = expr[i];

//         // Push opening brackets
//         if (ch == '(' || ch == '{' || ch == '[') {
//             stack[++top] = ch;
//         }
//         // Pop for closing brackets
//         else if (ch == ')' || ch == '}' || ch == ']') {
//             if (top == -1) {  // no matching opening
//                 balanced = false;
//                 break;
//             }
//             char topChar = stack[top--]; // pop
//             if ((ch == ')' && topChar != '(') ||
//                 (ch == '}' && topChar != '{') ||
//                 (ch == ']' && topChar != '[')) {
//                 balanced = false;
//                 break;
//             }
//         }
//     }

//     // If stack not empty, still unbalanced
//     if (top != -1) balanced = false;

//     if (balanced)
//         cout << "Expression is Balanced" << endl;
//     else
//         cout << "Expression is NOT Balanced" << endl;

//     return 0;
// }
//Q4.)
// int main() {
//     char infix[100], postfix[100], stack[100];
//     int top = -1;   // stack pointer
//     int i = 0, k = 0; // i → infix index, k → postfix index

//     cout << "Enter infix expression: ";
//     cin >> infix;

//     while (infix[i] != '\0') {
//         char ch = infix[i];

//         // 1. Operand → directly add to postfix
//         if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
//             postfix[k++] = ch;
//         }
//         // 2. If '(' → push to stack
//         else if (ch == '(') {
//             stack[++top] = ch;
//         }
//         // 3. If ')' → pop until '('
//         else if (ch == ')') {
//             while (top != -1 && stack[top] != '(') {
//                 postfix[k++] = stack[top--];
//             }
//             top--; // remove '(' from stack
//         }
//         // 4. If operator
//         else {
//             int prec;
//             if (ch == '+' || ch == '-') prec = 1;
//             else if (ch == '*' || ch == '/') prec = 2;
//             else if (ch == '^') prec = 3;
//             else prec = 0;

//             // Pop higher or equal precedence operators
//             while (top != -1) {
//                 int prec2;
//                 if (stack[top] == '+' || stack[top] == '-') prec2 = 1;
//                 else if (stack[top] == '*' || stack[top] == '/') prec2 = 2;
//                 else if (stack[top] == '^') prec2 = 3;
//                 else prec2 = 0;

//                 if (prec <= prec2 && ch != '^') { // '^' is right-associative
//                     postfix[k++] = stack[top--];
//                 } else break;
//             }
//             stack[++top] = ch; // push current operator
//         }
//         i++;
//     }

//     // 5. Pop remaining operators
//     while (top != -1) {
//         postfix[k++] = stack[top--];
//     }

//     postfix[k] = '\0';

//     cout << "Postfix expression: " << postfix << endl;

//     return 0;
// }
//Q5.)

// #include <cmath>


// int main() {
//     char postfix[100];
//     int stack[100];
//     int top = -1;

//     cout << "Enter postfix expression (single-digit operands): ";
//     cin >> postfix;

//     int i = 0;
//     while (postfix[i] != '\0') {
//         char ch = postfix[i];

//         // If operand (digit), push to stack
//         if (ch >= '0' && ch <= '9') {
//             stack[++top] = ch - '0'; // convert char to int
//         }
//         // If operator, pop two and evaluate
//         else {
//             int val2 = stack[top--];
//             int val1 = stack[top--];
//             int result;

//             if (ch == '+') result = val1 + val2;
//             else if (ch == '-') result = val1 - val2;
//             else if (ch == '*') result = val1 * val2;
//             else if (ch == '/') result = val1 / val2;
//             else if (ch == '^') result = pow(val1, val2);

//             stack[++top] = result;
//         }
//         i++;
//     }

//     cout << "Result = " << stack[top] << endl;

//     return 0;
// }
// ...................additional questions..........................
// Utility stack (array based)

// struct Stack {
//     int arr[100], top;
//     Stack() { top = -1; }
//     void push(int x) { arr[++top] = x; }
//     int pop() { return arr[top--]; }
//     int peek() { return arr[top]; }
//     bool empty() { return top == -1; }
// };

// ///////////////////////
// // Problem 1: Nearest Smaller Element
// ///////////////////////
// void nearestSmaller(int A[], int n) {
//     Stack st;
//     for (int i = 0; i < n; i++) {
//         while (!st.empty() && st.peek() >= A[i]) st.pop();
//         if (st.empty()) cout << -1 << " ";
//         else cout << st.peek() << " ";
//         st.push(A[i]);
//     }
//     cout << endl;
// }

// ///////////////////////
// // Problem 2: Stack with getMin() in O(1)
// ///////////////////////
// struct MinStack {
//     int arr[100], top, minEle;
//     MinStack() { top = -1; }
    
//     void push(int x) {
//         if (top == -1) {
//             arr[++top] = x;
//             minEle = x;
//         } else if (x >= minEle) {
//             arr[++top] = x;
//         } else {
//             // store fake value
//             arr[++top] = 2*x - minEle;
//             minEle = x;
//         }
//     }

//     int pop() {
//         int t = arr[top--];
//         if (t < minEle) {
//             int orig = minEle;
//             minEle = 2*minEle - t;
//             return orig;
//         }
//         return t;
//     }

//     int getMin() { return minEle; }
// };

// ///////////////////////
// // Problem 3: Next Greater Element
// ///////////////////////
// void nextGreater(int A[], int n) {
//     int ans[100];
//     Stack st;
//     for (int i = n-1; i >= 0; i--) {
//         while (!st.empty() && st.peek() <= A[i]) st.pop();
//         ans[i] = st.empty() ? -1 : st.peek();
//         st.push(A[i]);
//     }
//     for (int i = 0; i < n; i++) cout << ans[i] << " ";
//     cout << endl;
// }

// ///////////////////////
// // Problem 4: Daily Temperatures
// ///////////////////////
// void dailyTemps(int T[], int n) {
//     int ans[100] = {0};
//     Stack st;  // store indices
//     for (int i = n-1; i >= 0; i--) {
//         while (!st.empty() && T[st.peek()] <= T[i]) st.pop();
//         if (!st.empty()) ans[i] = st.peek() - i;
//         else ans[i] = 0;
//         st.push(i);
//     }
//     for (int i = 0; i < n; i++) cout << ans[i] << " ";
//     cout << endl;
// }

// ///////////////////////
// // Problem 5: Stack permutation check
// ///////////////////////
// bool canTransform(int A[], int n) {
//     Stack st;
//     int B[100], idx = 0;
//     int expected = 1;

//     for (int i = 0; i < n; i++) {
//         st.push(A[i]);
//         while (!st.empty() && st.peek() == expected) {
//             B[idx++] = st.pop();
//             expected++;
//         }
//     }
//     return (expected == n+1);
// }

// ///////////////////////
// // Main driver
// ///////////////////////
// int main() {
//     cout << "Problem 1: Nearest Smaller\n";
//     int A1[5] = {4, 5, 2, 10, 8};
//     nearestSmaller(A1, 5);

//     cout << "\nProblem 2: Stack with getMin\n";
//     MinStack ms;
//     ms.push(3); ms.push(5);
//     cout << ms.getMin() << endl;
//     ms.push(2); ms.push(1);
//     cout << ms.getMin() << endl;
//     ms.pop();
//     cout << ms.getMin() << endl;

//     cout << "\nProblem 3: Next Greater Element\n";
//     int A2[4] = {4, 5, 2, 25};
//     nextGreater(A2, 4);

//     cout << "\nProblem 4: Daily Temperatures\n";
//     int T[8] = {73,74,75,71,69,72,76,73};
//     dailyTemps(T, 8);

//     cout << "\nProblem 5: Stack permutation check\n";
//     int A3[5] = {1,2,3,4,5};
//     if (canTransform(A3, 5)) cout << "Yes\n"; else cout << "No\n";

//     int A4[5] = {5,4,1,2,3};
//     if (canTransform(A4, 5)) cout << "Yes\n"; else cout << "No\n";

//     return 0;
// }
//                                ASSIGNMENT 4 (Queues)
// 1.)

// #define SIZE 5   // maximum size of queue

// class Queue {
//     int arr[SIZE];
//     int front, rear;

// public:
//     Queue() {
//         front = -1;
//         rear = -1;
//     }

//     bool isEmpty() {
//         return (front == -1);
//     }

//     bool isFull() {
//         return (rear == SIZE - 1);
//     }

//     void enqueue(int value) {
//         if (isFull()) {
//             cout << "Queue is FULL! Cannot enqueue.\n";
//             return;
//         }
//         if (front == -1) front = 0; // first insertion
//         arr[++rear] = value;
//         cout << value << " enqueued to queue.\n";
//     }

//     void dequeue() {
//         if (isEmpty()) {
//             cout << "Queue is EMPTY! Cannot dequeue.\n";
//             return;
//         }
//         cout << arr[front] << " dequeued from queue.\n";
//         if (front == rear) { 
//             // reset after last deletion
//             front = rear = -1;
//         } else {
//             front++;
//         }
//     }

//     void peek() {
//         if (isEmpty()) {
//             cout << "Queue is EMPTY! No front element.\n";
//         } else {
//             cout << "Front element: " << arr[front] << endl;
//         }
//     }

//     void display() {
//         if (isEmpty()) {
//             cout << "Queue is EMPTY!\n";
//             return;
//         }
//         cout << "Queue elements: ";
//         for (int i = front; i <= rear; i++) {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };

// int main() {
//     Queue q;
//     int choice, value;

//     do {
//         cout << "\n--- Queue Menu ---\n";
//         cout << "1. Enqueue\n";
//         cout << "2. Dequeue\n";
//         cout << "3. Peek\n";
//         cout << "4. Display\n";
//         cout << "5. Check if Empty\n";
//         cout << "6. Check if Full\n";
//         cout << "0. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//         case 1:
//             cout << "Enter value to enqueue: ";
//             cin >> value;
//             q.enqueue(value);
//             break;
//         case 2:
//             q.dequeue();
//             break;
//         case 3:
//             q.peek();
//             break;
//         case 4:
//             q.display();
//             break;
//         case 5:
//             cout << (q.isEmpty() ? "Queue is EMPTY\n" : "Queue is NOT empty\n");
//             break;
//         case 6:
//             cout << (q.isFull() ? "Queue is FULL\n" : "Queue is NOT full\n");
//             break;
//         case 0:
//             cout << "Exiting...\n";
//             break;
//         default:
//             cout << "Invalid choice!\n";
//         }
//     } while (choice != 0);

//     return 0;
// }

// 2.)

// #define SIZE 5   // maximum size of circular queue

// class CircularQueue {
//     int arr[SIZE];
//     int front, rear;

// public:
//     CircularQueue() {
//         front = -1;
//         rear = -1;
//     }

//     bool isEmpty() {
//         return (front == -1);
//     }

//     bool isFull() {
//         return ((front == 0 && rear == SIZE - 1) || (front == rear + 1));
//     }

//     void enqueue(int value) {
//         if (isFull()) {
//             cout << "Queue is FULL! Cannot enqueue.\n";
//             return;
//         }
//         if (front == -1) {  // first element
//             front = rear = 0;
//         } else if (rear == SIZE - 1 && front != 0) {
//             rear = 0; // wrap around
//         } else {
//             rear++;
//         }
//         arr[rear] = value;
//         cout << value << " enqueued to queue.\n";
//     }

//     void dequeue() {
//         if (isEmpty()) {
//             cout << "Queue is EMPTY! Cannot dequeue.\n";
//             return;
//         }
//         cout << arr[front] << " dequeued from queue.\n";

//         if (front == rear) {
//             // Queue becomes empty
//             front = rear = -1;
//         } else if (front == SIZE - 1) {
//             front = 0; // wrap around
//         } else {
//             front++;
//         }
//     }

//     void peek() {
//         if (isEmpty()) {
//             cout << "Queue is EMPTY! No front element.\n";
//         } else {
//             cout << "Front element: " << arr[front] << endl;
//         }
//     }

//     void display() {
//         if (isEmpty()) {
//             cout << "Queue is EMPTY!\n";
//             return;
//         }
//         cout << "Queue elements: ";
//         if (rear >= front) {
//             for (int i = front; i <= rear; i++)
//                 cout << arr[i] << " ";
//         } else {
//             for (int i = front; i < SIZE; i++)
//                 cout << arr[i] << " ";
//             for (int i = 0; i <= rear; i++)
//                 cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };

// int main() {
//     CircularQueue q;
//     int choice, value;

//     do {
//         cout << "\n--- Circular Queue Menu ---\n";
//         cout << "1. Enqueue\n";
//         cout << "2. Dequeue\n";
//         cout << "3. Peek\n";
//         cout << "4. Display\n";
//         cout << "5. Check if Empty\n";
//         cout << "6. Check if Full\n";
//         cout << "0. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//         case 1:
//             cout << "Enter value to enqueue: ";
//             cin >> value;
//             q.enqueue(value);
//             break;
//         case 2:
//             q.dequeue();
//             break;
//         case 3:
//             q.peek();
//             break;
//         case 4:
//             q.display();
//             break;
//         case 5:
//             cout << (q.isEmpty() ? "Queue is EMPTY\n" : "Queue is NOT empty\n");
//             break;
//         case 6:
//             cout << (q.isFull() ? "Queue is FULL\n" : "Queue is NOT full\n");
//             break;
//         case 0:
//             cout << "Exiting...\n";
//             break;
//         default:
//             cout << "Invalid choice!\n";
//         }
//     } while (choice != 0);

//     return 0;
// }

// 3.)

// #define SIZE 100

// class Queue {
//     int arr[SIZE];
//     int front, rear;

// public:
//     Queue() {
//         front = 0;
//         rear = -1;
//     }

//     bool isEmpty() {
//         return (front > rear);
//     }

//     bool isFull() {
//         return (rear == SIZE - 1);
//     }

//     void enqueue(int val) {
//         if (isFull()) {
//             cout << "Queue is FULL!\n";
//             return;
//         }
//         arr[++rear] = val;
//     }

//     int dequeue() {
//         if (isEmpty()) {
//             cout << "Queue is EMPTY!\n";
//             return -1;
//         }
//         return arr[front++];
//     }

//     int peek() {
//         if (isEmpty()) return -1;
//         return arr[front];
//     }

//     int size() {
//         return (rear - front + 1);
//     }

//     void display() {
//         for (int i = front; i <= rear; i++)
//             cout << arr[i] << " ";
//         cout << endl;
//     }
// };

// // Function to interleave queue
// void interleave(Queue &q) {
//     int n = q.size();
//     if (n % 2 != 0) {
//         cout << "Queue must have even number of elements!\n";
//         return;
//     }

//     int half = n / 2;
//     Queue firstHalf, secondHalf;

//     // Step 1: Split into two halves
//     for (int i = 0; i < half; i++)
//         firstHalf.enqueue(q.dequeue());

//     while (!q.isEmpty())
//         secondHalf.enqueue(q.dequeue());

//     // Step 2: Interleave first and second halves
//     while (!firstHalf.isEmpty() && !secondHalf.isEmpty()) {
//         q.enqueue(firstHalf.dequeue());
//         q.enqueue(secondHalf.dequeue());
//     }
// }

// int main() {
//     Queue q;
//     int n, val;

//     cout << "Enter number of elements (even): ";
//     cin >> n;

//     cout << "Enter " << n << " elements:\n";
//     for (int i = 0; i < n; i++) {
//         cin >> val;
//         q.enqueue(val);
//     }

//     cout << "Original Queue: ";
//     q.display();

//     interleave(q);

//     cout << "Interleaved Queue: ";
//     q.display();

//     return 0;
// }

// 4.)

// #include <string>

// #define SIZE 1000   // max queue size

// class Queue {
//     char arr[SIZE];
//     int front, rear;

// public:
//     Queue() {
//         front = 0;
//         rear = -1;
//     }

//     bool isEmpty() {
//         return (front > rear);
//     }

//     bool isFull() {
//         return (rear == SIZE - 1);
//     }

//     void enqueue(char x) {
//         if (!isFull()) {
//             arr[++rear] = x;
//         }
//     }

//     void dequeue() {
//         if (!isEmpty()) {
//             front++;
//         }
//     }

//     char frontElement() {
//         if (!isEmpty())
//             return arr[front];
//         return '\0';
//     }

//     void reset() {
//         front = 0;
//         rear = -1;
//     }
// };

// void firstNonRepeating(string str) {
//     Queue q;
//     int freq[26] = {0};

//     for (char ch : str) {
//         if (ch == ' ') continue;  // ignore spaces

//         freq[ch - 'a']++;
//         q.enqueue(ch);

//         // Remove all repeating characters from queue front
//         while (!q.isEmpty() && freq[q.frontElement() - 'a'] > 1) {
//             q.dequeue();
//         }

//         if (q.isEmpty())
//             cout << -1 << " ";
//         else
//             cout << q.frontElement() << " ";
//     }
//     cout << endl;
// }

// int main() {
//     string input;
//     cout << "Enter string: ";
//     getline(cin, input);

//     cout << "Output: ";
//     firstNonRepeating(input);

//     return 0;
// }

// 5.)

// #define MAX 100

// // Simple queue implementation
// class Queue {
//     int arr[MAX];
//     int front, rear, size;
// public:
//     Queue() {
//         front = 0; rear = -1; size = 0;
//     }
//     bool isEmpty() { return size == 0; }
//     bool isFull() { return size == MAX; }
//     void enqueue(int x) {
//         if (isFull()) { cout << "Queue Overflow\n"; return; }
//         rear = (rear + 1) % MAX;
//         arr[rear] = x;
//         size++;
//     }
//     int dequeue() {
//         if (isEmpty()) { cout << "Queue Underflow\n"; return -1; }
//         int x = arr[front];
//         front = (front + 1) % MAX;
//         size--;
//         return x;
//     }
//     int getFront() {
//         if (isEmpty()) return -1;
//         return arr[front];
//     }
//     int getSize() { return size; }
// };

// // -------------------------
// // (a) Stack using Two Queues
// // -------------------------
// class StackTwoQ {
//     Queue q1, q2;
// public:
//     void push(int x) {
//         q2.enqueue(x);
//         while (!q1.isEmpty())
//             q2.enqueue(q1.dequeue());
//         // swap q1 and q2
//         Queue temp = q1;
//         q1 = q2;
//         q2 = temp;
//     }
//     int pop() {
//         if (q1.isEmpty()) { cout << "Stack Underflow\n"; return -1; }
//         return q1.dequeue();
//     }
//     bool isEmpty() { return q1.isEmpty(); }
// };

// // -------------------------
// // (b) Stack using One Queue
// // -------------------------
// class StackOneQ {
//     Queue q;
// public:
//     void push(int x) {
//         q.enqueue(x);
//         int s = q.getSize();
//         // rotate previous elements
//         for (int i = 0; i < s - 1; i++)
//             q.enqueue(q.dequeue());
//     }
//     int pop() {
//         if (q.isEmpty()) { cout << "Stack Underflow\n"; return -1; }
//         return q.dequeue();
//     }
//     bool isEmpty() { return q.isEmpty(); }
// };

// // -------------------------
// // Driver
// // -------------------------
// int main() {
//     cout << "Stack using Two Queues:\n";
//     StackTwoQ s1;
//     s1.push(10); s1.push(20); s1.push(30);
//     cout << s1.pop() << "\n"; // 30
//     cout << s1.pop() << "\n"; // 20

//     cout << "\nStack using One Queue:\n";
//     StackOneQ s2;
//     s2.push(5); s2.push(15); s2.push(25);
//     cout << s2.pop() << "\n"; // 25
//     cout << s2.pop() << "\n"; // 15
// }
// ..............................................................additional qs.........................................................
// 1)
// struct Queue {
//     char arr[100][20];   // queue of strings (binary numbers)
//     int front, rear;
//     Queue() { front = 0; rear = -1; }

//     void enqueue(const char s[]) {
//         rear++;
//         strcpy(arr[rear], s);
//     }

//     void dequeue(char s[]) {
//         strcpy(s, arr[front]);
//         front++;
//     }

//     bool empty() {
//         return front > rear;
//     }
// };

// void generateBinary(int n) {
//     Queue q;
//     q.enqueue("1");

//     for (int i = 1; i <= n; i++) {
//         char s[20];
//         q.dequeue(s);

//         cout << s << " ";

//         char s0[20], s1[20];
//         strcpy(s0, s);
//         strcpy(s1, s);

//         strcat(s0, "0");
//         strcat(s1, "1");

//         q.enqueue(s0);
//         q.enqueue(s1);
//     }
//     cout << endl;
// }

// int main() {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;
//     generateBinary(n);
//     return 0;
// // }
// 2)
// struct Queue {
//     int arr[100];
//     int front, rear;
//     Queue() { front = 0; rear = -1; }
//     void enqueue(int x) { arr[++rear] = x; }
//     int dequeue() { return arr[front++]; }
//     int size() { return rear - front + 1; }
//     bool empty() { return size() == 0; }
//     int get(int i) { return arr[front + i]; }
// };

// int minIndex(Queue &q, int sortIndex) {
//     int min_index = -1, min_val = 99999;
//     int n = q.size();
//     for (int i = 0; i < n; i++) {
//         int curr = q.dequeue();
//         if (curr <= min_val && i <= sortIndex) {
//             min_index = i;
//             min_val = curr;
//         }
//         q.enqueue(curr);
//     }
//     return min_index;
// }

// void insertMinToRear(Queue &q, int min_index) {
//     int min_val;
//     int n = q.size();
//     for (int i = 0; i < n; i++) {
//         int curr = q.dequeue();
//         if (i != min_index) q.enqueue(curr);
//         else min_val = curr;
//     }
//     q.enqueue(min_val);
// }

// void sortQueue(Queue &q) {
//     int n = q.size();
//     for (int i = 1; i <= n; i++) {
//         int min_index = minIndex(q, n - i);
//         insertMinToRear(q, min_index);
//     }
// }
// 3)
// bool checkSorted(int q[], int n) {
//     int st[100], top = -1;
//     int expected = 1;

//     int front = 0;
//     while (front < n) {
//         int curr = q[front++];
//         if (curr == expected) {
//             expected++;
//         } else {
//             if (top != -1 && st[top] < curr) return false;
//             st[++top] = curr;
//         }
//         while (top != -1 && st[top] == expected) {
//             top--;
//             expected++;
//         }
//     }
//     return expected == n + 1;
// }
// 4.)
// int countStudents(int students[], int sandwiches[], int n) {
//     int q[100], front = 0, rear = -1;
//     for (int i = 0; i < n; i++) q[++rear] = students[i];

//     int top = 0, count = 0;
//     while (front <= rear && count < (rear - front + 1)) {
//         if (q[front] == sandwiches[top]) {
//             front++;
//             top++;
//             count = 0;
//         } else {
//             q[++rear] = q[front];
//             front++;
//             count++;
//         }
//     }
//     return (rear - front + 1);
// }

// // Main driver

// int main() {
//     cout << "Problem 1: Binary numbers" << endl;
//     printBinary(5);

//     cout << "\nProblem 2: Sort queue" << endl;
//     Queue q;
//     q.enqueue(11); q.enqueue(5); q.enqueue(4); q.enqueue(21);
//     sortQueue(q);
//     while (!q.empty()) cout << q.dequeue() << " ";
//     cout << endl;

//     cout << "\nProblem 3: Queue sortable using stack?" << endl;
//     int arr[5] = {5, 1, 2, 3, 4};
//     if (checkSorted(arr, 5)) cout << "Yes\n"; else cout << "No\n";

//     cout << "\nProblem 4: Students and sandwiches" << endl;
//     int students[4] = {1,1,0,0};
//     int sandwiches[4] = {0,1,0,1};
//     cout << countStudents(students, sandwiches, 4) << endl;

//     return 0;
// }
//                                                                    Assignment 5 :  singly Linkedlist
// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// class LinkedList {
// private:
//     Node* head;

// public:
//     LinkedList() { head = nullptr; }

//     // (a) Insertion at beginning
//     void insertAtBeginning(int val) {
//         Node* newNode = new Node{val, head};
//         head = newNode;
//     }

//     // (b) Insertion at end
//     void insertAtEnd(int val) {
//         Node* newNode = new Node{val, nullptr};
//         if (!head) {
//             head = newNode;
//             return;
//         }
//         Node* temp = head;
//         while (temp->next)
//             temp = temp->next;
//         temp->next = newNode;
//     }

//     // (c) Insert before or after a specific node
//     void insertBeforeAfter(int key, int val, bool after) {
//         if (!head) {
//             cout << "List is empty.\n";
//             return;
//         }
//         if (!after && head->data == key) { // insert before head
//             insertAtBeginning(val);
//             return;
//         }

//         Node* prev = nullptr;
//         Node* curr = head;

//         while (curr && curr->data != key) {
//             prev = curr;
//             curr = curr->next;
//         }

//         if (!curr) {
//             cout << "Node with value " << key << " not found.\n";
//             return;
//         }

//         Node* newNode = new Node{val, nullptr};
//         if (after) {
//             newNode->next = curr->next;
//             curr->next = newNode;
//         } else {
//             newNode->next = curr;
//             prev->next = newNode;
//         }
//     }

//     // (d) Delete from beginning
//     void deleteFromBeginning() {
//         if (!head) {
//             cout << "List is empty.\n";
//             return;
//         }
//         Node* temp = head;
//         head = head->next;
//         delete temp;
//     }

//     // (e) Delete from end
//     void deleteFromEnd() {
//         if (!head) {
//             cout << "List is empty.\n";
//             return;
//         }
//         if (!head->next) {
//             delete head;
//             head = nullptr;
//             return;
//         }
//         Node* temp = head;
//         while (temp->next->next)
//             temp = temp->next;
//         delete temp->next;
//         temp->next = nullptr;
//     }

//     // (f) Delete a specific node
//     void deleteSpecific(int key) {
//         if (!head) {
//             cout << "List is empty.\n";
//             return;
//         }
//         if (head->data == key) {
//             deleteFromBeginning();
//             return;
//         }
//         Node* temp = head;
//         while (temp->next && temp->next->data != key)
//             temp = temp->next;

//         if (!temp->next) {
//             cout << "Node not found.\n";
//             return;
//         }
//         Node* toDelete = temp->next;
//         temp->next = toDelete->next;
//         delete toDelete;
//     }

//     // (g) Search for a node
//     void search(int key) {
//         Node* temp = head;
//         int pos = 1;
//         while (temp) {
//             if (temp->data == key) {
//                 cout << "Node " << key << " found at position " << pos << ".\n";
//                 return;
//             }
//             temp = temp->next;
//             pos++;
//         }
//         cout << "Node not found.\n";
//     }

//     // (h) Display
//     void display() {
//         if (!head) {
//             cout << "List is empty.\n";
//             return;
//         }
//         Node* temp = head;
//         cout << "Linked List: ";
//         while (temp) {
//             cout << temp->data;
//             if (temp->next) cout << " -> ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };

// int main() {
//     LinkedList list;
//     int choice, val, key;
//     bool after;

//     do {
//         cout << "\n--- MENU ---\n";
//         cout << "1. Insert at Beginning\n2. Insert at End\n3. Insert Before/After a Node\n";
//         cout << "4. Delete from Beginning\n5. Delete from End\n6. Delete Specific Node\n";
//         cout << "7. Search Node\n8. Display List\n0. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//         case 1:
//             cout << "Enter value: ";
//             cin >> val;
//             list.insertAtBeginning(val);
//             break;
//         case 2:
//             cout << "Enter value: ";
//             cin >> val;
//             list.insertAtEnd(val);
//             break;
//         case 3:
//             cout << "Enter existing node value: ";
//             cin >> key;
//             cout << "Enter new value: ";
//             cin >> val;
//             cout << "Insert (0=before, 1=after): ";
//             cin >> after;
//             list.insertBeforeAfter(key, val, after);
//             break;
//         case 4:
//             list.deleteFromBeginning();
//             break;
//         case 5:
//             list.deleteFromEnd();
//             break;
//         case 6:
//             cout << "Enter value to delete: ";
//             cin >> key;
//             list.deleteSpecific(key);
//             break;
//         case 7:
//             cout << "Enter value to search: ";
//             cin >> key;
//             list.search(key);
//             break;
//         case 8:
//             list.display();
//             break;
//         case 0:
//             cout << "Exiting...\n";
//             break;
//         default:
//             cout << "Invalid choice!\n";
//         }
//     } while (choice != 0);

//     return 0;
// }
// // 2.}
// include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
//     Node(int val) : data(val), next(nullptr) {}
// };

// class LinkedList {
//     Node* head;
// public:
//     LinkedList() { head = nullptr; }

//     void insertAtEnd(int val) {
//         Node* newNode = new Node(val);
//         if (!head) { head = newNode; return; }
//         Node* temp = head;
//         while (temp->next) temp = temp->next;
//         temp->next = newNode;
//     }

//     void display() {
//         Node* temp = head;
//         while (temp) {
//             cout << temp->data;
//             if (temp->next) cout << "->";
//             temp = temp->next;
//         }
//         cout << endl;
//     }

//     void countAndDeleteOccurrences(int key) {
//         int count = 0;
//         Node* temp = head;
//         Node* prev = nullptr;

//         while (temp) {
//             if (temp->data == key) {
//                 count++;
//                 if (temp == head) {
//                     head = head->next;
//                     delete temp;
//                     temp = head;
//                 } else {
//                     prev->next = temp->next;
//                     delete temp;
//                     temp = prev->next;
//                 }
//             } else {
//                 prev = temp;
//                 temp = temp->next;
//             }
//         }

//         cout << "Count: " << count << endl;
//         cout << "Updated Linked List: ";
//         display();
//     }
// };

// int main() {
//     LinkedList list;
//     list.insertAtEnd(1);
//     list.insertAtEnd(2);
//     list.insertAtEnd(1);
//     list.insertAtEnd(2);
//     list.insertAtEnd(1);
//     list.insertAtEnd(3);
//     list.insertAtEnd(1);

//     cout << "Original Linked List: ";
//     list.display();

//     int key = 1;
//     cout << "Key to delete: " << key << endl;
//     list.countAndDeleteOccurrences(key);
// }
// 3.}


// struct Node {
//     int data;
//     Node* next;
//     Node(int val) : data(val), next(nullptr) {}
// };

// class LinkedList {
//     Node* head;
// public:
//     LinkedList() { head = nullptr; }

//     void insertAtEnd(int val) {
//         Node* newNode = new Node(val);
//         if (!head) { head = newNode; return; }
//         Node* temp = head;
//         while (temp->next) temp = temp->next;
//         temp->next = newNode;
//     }

//     void display() {
//         Node* temp = head;
//         while (temp) {
//             cout << temp->data;
//             if (temp->next) cout << "->";
//             temp = temp->next;
//         }
//         cout << endl;
//     }

//     void findMiddle() {
//         if (!head) {
//             cout << "List is empty." << endl;
//             return;
//         }
//         Node* slow = head;
//         Node* fast = head;
//         while (fast && fast->next) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         cout << "Middle Node: " << slow->data << endl;
//     }
// };

// int main() {
//     LinkedList list;
//     list.insertAtEnd(1);
//     list.insertAtEnd(2);
//     list.insertAtEnd(3);
//     list.insertAtEnd(4);
//     list.insertAtEnd(5);

//     cout << "Linked List: ";
//     list.display();

//     list.findMiddle();
// }

//4.}
// struct Node {
//     int data;
//     Node* next;
//     Node(int val) : data(val), next(nullptr) {}
// };

// class LinkedList {
//     Node* head;
// public:
//     LinkedList() { head = nullptr; }

//     void insertAtEnd(int val) {
//         Node* newNode = new Node(val);
//         if (!head) { head = newNode; return; }
//         Node* temp = head;
//         while (temp->next) temp = temp->next;
//         temp->next = newNode;
//     }

//     void display() {
//         Node* temp = head;
//         while (temp) {
//             cout << temp->data;
//             if (temp->next) cout << "->";
//             temp = temp->next;
//         }
//         cout << "->NULL" << endl;
//     }

//     void reverse() {
//         Node* prev = nullptr;
//         Node* curr = head;
//         Node* next = nullptr;
//         while (curr) {
//             next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//         }
//         head = prev;
//         cout << "Reversed Linked List: ";
//         display();
//     }
// };

// int main() {
//     LinkedList list;
//     list.insertAtEnd(1);
//     list.insertAtEnd(2);
//     list.insertAtEnd(3);
//     list.insertAtEnd(4);

//     cout << "Original Linked List: ";
//     list.display();

//     list.reverse();
// }
//                                                                 ADDITIONAL QS
// 1.}
// struct Node {
//     int data;
//     Node* next;
//     Node(int val) : data(val), next(nullptr) {}
// };

// int getLength(Node* head) {
//     int len = 0;
//     while (head) { len++; head = head->next; }
//     return len;
// }

// Node* findIntersection(Node* head1, Node* head2) {
//     int len1 = getLength(head1);
//     int len2 = getLength(head2);
//     int diff = abs(len1 - len2);

//     if (len1 > len2)
//         while (diff--) head1 = head1->next;
//     else
//         while (diff--) head2 = head2->next;

//     while (head1 && head2) {
//         if (head1 == head2)
//             return head1;
//         head1 = head1->next;
//         head2 = head2->next;
//     }
//     return nullptr;
// }

// 2.}
// struct Node2 {
//     int data;
//     Node2* next;
//     Node2(int val) : data(val), next(nullptr) {}
// };

// Node2* reverseKGroup(Node2* head, int k) {
//     Node2* curr = head;
//     Node2* prev = nullptr;
//     Node2* next = nullptr;
//     int count = 0;

//     Node2* temp = head;
//     while (temp && count < k) { temp = temp->next; count++; }
//     if (count < k) return head;

//     count = 0;
//     while (curr && count < k) {
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//         count++;
//     }

//     if (next)
//         head->next = reverseKGroup(next, k);

//     return prev;
// }

// 3.}
// struct Node3 {
//     int data;
//     Node3* next;
//     Node3(int val) : data(val), next(nullptr) {}
// };

// void removeLoop(Node3* head) {
//     if (!head) return;
//     Node3* slow = head;
//     Node3* fast = head;

//     while (fast && fast->next) {
//         slow = slow->next;
//         fast = fast->next->next;
//         if (slow == fast) break;
//     }

//     if (slow != fast) return;

//     slow = head;
//     while (slow->next != fast->next) {
//         slow = slow->next;
//         fast = fast->next;
//     }

//     fast->next = nullptr; // remove loop
// }

// 4.}
// struct Node4 {
//     int data;
//     Node4* next;
//     Node4(int val) : data(val), next(nullptr) {}
// };

// void rotateLeft(Node4*& head, int k) {
//     if (!head || k == 0) return;

//     Node4* temp = head;
//     int len = 1;
//     while (temp->next) {
//         temp = temp->next;
//         len++;
//     }

//     k %= len;
//     if (k == 0) return;

//     temp->next = head; // make circular
//     Node4* newTail = head;
//     for (int i = 1; i < k; i++)
//         newTail = newTail->next;

//     head = newTail->next;
//     newTail->next = nullptr;
// }

// 5.}
// struct PolyNode {
//     int coeff;
//     int pow;
//     PolyNode* next;
//     PolyNode(int c, int p) : coeff(c), pow(p), next(nullptr) {}
// };

// PolyNode* addPolynomials(PolyNode* p1, PolyNode* p2) {
//     PolyNode* dummy = new PolyNode(0, 0);
//     PolyNode* temp = dummy;

//     while (p1 && p2) {
//         if (p1->pow > p2->pow) {
//             temp->next = new PolyNode(p1->coeff, p1->pow);
//             p1 = p1->next;
//         }
//         else if (p2->pow > p1->pow) {
//             temp->next = new PolyNode(p2->coeff, p2->pow);
//             p2 = p2->next;
//         }
//         else {
//             temp->next = new PolyNode(p1->coeff + p2->coeff, p1->pow);
//             p1 = p1->next;
//             p2 = p2->next;
//         }
//         temp = temp->next;
//     }

//     while (p1) { temp->next = new PolyNode(p1->coeff, p1->pow); p1 = p1->next; temp = temp->next; }
//     while (p2) { temp->next = new PolyNode(p2->coeff, p2->pow); p2 = p2->next; temp = temp->next; }

//     return dummy->next;
// }
//                                                       ASSIGNMENT 6
// 1.}

// //   circular ll
// struct CNode {
//     int data;
//     CNode* next;
//     CNode(int val) : data(val), next(nullptr) {}
// };

// class CircularList {
//     CNode* head;
// public:
//     CircularList() { head = nullptr; }

//     void insertAtBeginning(int val) {
//         CNode* newNode = new CNode(val);
//         if (!head) {
//             head = newNode;
//             newNode->next = head;
//             return;
//         }
//         CNode* temp = head;
//         while (temp->next != head) temp = temp->next;
//         temp->next = newNode;
//         newNode->next = head;
//         head = newNode;
//     }

//     void insertAtEnd(int val) {
//         CNode* newNode = new CNode(val);
//         if (!head) {
//             head = newNode;
//             newNode->next = head;
//             return;
//         }
//         CNode* temp = head;
//         while (temp->next != head) temp = temp->next;
//         temp->next = newNode;
//         newNode->next = head;
//     }

//     void insertAfter(int key, int val) {
//         if (!head) { cout << "List empty!\n"; return; }
//         CNode* temp = head;
//         do {
//             if (temp->data == key) {
//                 CNode* newNode = new CNode(val);
//                 newNode->next = temp->next;
//                 temp->next = newNode;
//                 return;
//             }
//             temp = temp->next;
//         } while (temp != head);
//         cout << "Key not found!\n";
//     }

//     void deleteNode(int key) {
//         if (!head) return;
//         CNode *curr = head, *prev = nullptr;

//         if (head->data == key && head->next == head) {
//             delete head;
//             head = nullptr;
//             return;
//         }

//         do {
//             if (curr->data == key) {
//                 if (curr == head) {
//                     CNode* last = head;
//                     while (last->next != head)
//                         last = last->next;
//                     head = head->next;
//                     last->next = head;
//                 } else {
//                     prev->next = curr->next;
//                 }
//                 delete curr;
//                 return;
//             }
//             prev = curr;
//             curr = curr->next;
//         } while (curr != head);
//         cout << "Node not found!\n";
//     }

//     void search(int key) {
//         if (!head) { cout << "Empty list!\n"; return; }
//         CNode* temp = head;
//         int pos = 1;
//         do {
//             if (temp->data == key) {
//                 cout << "Node " << key << " found at position " << pos << endl;
//                 return;
//             }
//             temp = temp->next;
//             pos++;
//         } while (temp != head);
//         cout << "Node not found!\n";
//     }

//     void display() {
//         if (!head) { cout << "List empty!\n"; return; }
//         CNode* temp = head;
//         cout << "Circular List: ";
//         do {
//             cout << temp->data << " ";
//             temp = temp->next;
//         } while (temp != head);
//         cout << endl;
//     }
// };

// // DLL
// struct DNode {
//     int data;
//     DNode* prev;
//     DNode* next;
//     DNode(int val) : data(val), prev(nullptr), next(nullptr) {}
// };

// class DoublyList {
//     DNode* head;
// public:
//     DoublyList() { head = nullptr; }

//     void insertAtBeginning(int val) {
//         DNode* newNode = new DNode(val);
//         if (head)
//             head->prev = newNode;
//         newNode->next = head;
//         head = newNode;
//     }

//     void insertAtEnd(int val) {
//         DNode* newNode = new DNode(val);
//         if (!head) { head = newNode; return; }
//         DNode* temp = head;
//         while (temp->next)
//             temp = temp->next;
//         temp->next = newNode;
//         newNode->prev = temp;
//     }

//     void insertAfter(int key, int val) {
//         DNode* temp = head;
//         while (temp && temp->data != key)
//             temp = temp->next;
//         if (!temp) { cout << "Key not found!\n"; return; }
//         DNode* newNode = new DNode(val);
//         newNode->next = temp->next;
//         newNode->prev = temp;
//         if (temp->next)
//             temp->next->prev = newNode;
//         temp->next = newNode;
//     }

//     void deleteNode(int key) {
//         if (!head) { cout << "Empty list!\n"; return; }
//         DNode* temp = head;
//         while (temp && temp->data != key)
//             temp = temp->next;
//         if (!temp) { cout << "Node not found!\n"; return; }
//         if (temp->prev)
//             temp->prev->next = temp->next;
//         else
//             head = temp->next;
//         if (temp->next)
//             temp->next->prev = temp->prev;
//         delete temp;
//     }

//     void search(int key) {
//         DNode* temp = head;
//         int pos = 1;
//         while (temp) {
//             if (temp->data == key) {
//                 cout << "Node " << key << " found at position " << pos << endl;
//                 return;
//             }
//             temp = temp->next;
//             pos++;
//         }
//         cout << "Node not found!\n";
//     }

//     void display() {
//         DNode* temp = head;
//         if (!temp) { cout << "List empty!\n"; return; }
//         cout << "Doubly List: ";
//         while (temp) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };

// int main() {
//     CircularList cList;
//     DoublyList dList;
//     int choice, type, val, key;

//     cout << "===== MENU DRIVEN LINKED LIST PROGRAM =====\n";
//     cout << "Select List Type:\n1. Circular Linked List\n2. Doubly Linked List\n";
//     cin >> type;

//     do {
//         cout << "\n========== MENU ==========\n";
//         cout << "1. Insert at Beginning\n";
//         cout << "2. Insert at End\n";
//         cout << "3. Insert After Specific Node\n";
//         cout << "4. Delete a Node\n";
//         cout << "5. Search a Node\n";
//         cout << "6. Display List\n";
//         cout << "0. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//         case 1:
//             cout << "Enter value: ";
//             cin >> val;
//             if (type == 1) cList.insertAtBeginning(val);
//             else dList.insertAtBeginning(val);
//             break;

//         case 2:
//             cout << "Enter value: ";
//             cin >> val;
//             if (type == 1) cList.insertAtEnd(val);
//             else dList.insertAtEnd(val);
//             break;

//         case 3:
//             cout << "Enter key after which to insert: ";
//             cin >> key;
//             cout << "Enter new value: ";
//             cin >> val;
//             if (type == 1) cList.insertAfter(key, val);
//             else dList.insertAfter(key, val);
//             break;

//         case 4:
//             cout << "Enter value to delete: ";
//             cin >> val;
//             if (type == 1) cList.deleteNode(val);
//             else dList.deleteNode(val);
//             break;

//         case 5:
//             cout << "Enter value to search: ";
//             cin >> val;
//             if (type == 1) cList.search(val);
//             else dList.search(val);
//             break;

//         case 6:
//             if (type == 1) cList.display();
//             else dList.display();
//             break;

//         case 0:
//             cout << "Exiting...\n";
//             break;

//         default:
//             cout << "Invalid choice!\n";
//         }
//     } while (choice != 0);

//     return 0;
// }
// 2.}
// struct Node {
//     int data;
//     Node* next;
//     Node(int val) : data(val), next(nullptr) {}
// };

// void displayCircular(Node* head) {
//     if (!head) return;
//     Node* temp = head;
//     do {
//         cout << temp->data << " ";
//         temp = temp->next;
//     } while (temp != head);
//     cout << head->data << endl; // repeat head
// }

// int main() {
//     Node* head = new Node(20);
//     head->next = new Node(100);
//     head->next->next = new Node(40);
//     head->next->next->next = new Node(80);
//     head->next->next->next->next = new Node(60);
//     head->next->next->next->next->next = head;

//     cout << "Circular Linked List with repeated head value: ";
//     displayCircular(head);
//     return 0;
// }
// 3.}
// struct DNode {
//     int data;
//     DNode* next;
//     DNode* prev;
//     DNode(int val) : data(val), next(nullptr), prev(nullptr) {}
// };

// int sizeOfDoubly(DNode* head) {
//     int count = 0;
//     while (head) {
//         count++;
//         head = head->next;
//     }
//     return count;
// }

// struct CNode {
//     int data;
//     CNode* next;
//     CNode(int val) : data(val), next(nullptr) {}
// };

// int sizeOfCircular(CNode* head) {
//     if (!head) return 0;
//     int count = 0;
//     CNode* temp = head;
//     do {
//         count++;
//         temp = temp->next;
//     } while (temp != head);
//     return count;
// }

// int main() {
//     // Doubly Linked List
//     DNode* d1 = new DNode(10);
//     d1->next = new DNode(20);
//     d1->next->prev = d1;
//     d1->next->next = new DNode(30);

//     cout << "Size of Doubly Linked List: " << sizeOfDoubly(d1) << endl;

//     // Circular Linked List
//     CNode* c1 = new CNode(1);
//     c1->next = new CNode(2);
//     c1->next->next = new CNode(3);
//     c1->next->next->next = c1;

//     cout << "Size of Circular Linked List: " << sizeOfCircular(c1) << endl;
//     return 0;
// }
// 4.}
//    struct Node {
//     char data;
//     Node* prev;
//     Node* next;
//     Node(char val) : data(val), prev(nullptr), next(nullptr) {}
// };

// bool isPalindrome(Node* head) {
//     if (!head) return true;
//     Node* tail = head;
//     while (tail->next)
//         tail = tail->next;

//     while (head != tail && tail->next != head) {
//         if (head->data != tail->data)
//             return false;
//         head = head->next;
//         tail = tail->prev;
//     }
//     return true;
// }

// int main() {
//     Node* head = new Node('r');
//     head->next = new Node('a');
//     head->next->prev = head;
//     head->next->next = new Node('d');
//     head->next->next->prev = head->next;
//     head->next->next->next = new Node('a');
//     head->next->next->next->prev = head->next->next;
//     head->next->next->next->next = new Node('r');
//     head->next->next->next->next->prev = head->next->next->next;

//     cout << (isPalindrome(head) ? "Palindrome" : "Not Palindrome") << endl;
//     return 0;
// }
// 5.}
//           struct Node {
//     int data;
//     Node* next;
//     Node(int val) : data(val), next(nullptr) {}
// };

// bool isCircular(Node* head) {
//     if (!head) return false;

//     Node* slow = head;
//     Node* fast = head->next;

//     while (fast && fast->next) {
//         if (slow == fast)
//             return true;  // loop (circular) detected
//         slow = slow->next;
//         fast = fast->next->next;
//     }

//     return false; // reached end, not circular
// }

// int main() {
//     // Example 1: Circular Linked List
//     Node* head1 = new Node(10);
//     head1->next = new Node(20);
//     head1->next->next = new Node(30);
//     head1->next->next->next = head1; // make circular

//     cout << "List 1: " << (isCircular(head1) ? "Circular" : "Not Circular") << endl;

//     // Example 2: Non-Circular Linked List
//     Node* head2 = new Node(1);
//     head2->next = new Node(2);
//     head2->next->next = new Node(3);

//     cout << "List 2: " << (isCircular(head2) ? "Circular" : "Not Circular") << endl;

//     return 0;
// }
                                                    // ADDITIONAL QS
// 1.}

// struct CNode {
//     int data;
//     CNode* next;
//     CNode(int x=0): data(x), next(nullptr) {}
// };

// pair<CNode*, CNode*> splitCircularList(CNode* head) {
//     // returns pair {head1, head2}, either may be nullptr if input empty
//     if (!head) return {nullptr, nullptr};

//     // Use slow & fast pointers to find midpoint
//     CNode* slow = head;
//     CNode* fast = head;

//     // Move fast by 2, slow by 1; stop when fast reaches back to head or one step before
//     while (fast->next != head && fast->next->next != head) {
//         slow = slow->next;
//         fast = fast->next->next;
//     }

//     // For even nodes fast->next->next == head may be false; handle both cases by moving fast if needed
//     if (fast->next->next == head) // even number -> move fast one more to be at last node
//         fast = fast->next;

//     // Now slow is end of first half, fast is last node
//     CNode* head1 = head;
//     CNode* head2 = slow->next;

//     // Make first circular
//     slow->next = head1;
//     // Make second circular
//     fast->next = head2;

//     return {head1, head2};
// }

// // helper to create circular list from vector
// CNode* makeCircular(const vector<int>& arr) {
//     if (arr.empty()) return nullptr;
//     CNode* head = new CNode(arr[0]);
//     CNode* cur = head;
//     for (size_t i=1;i<arr.size();++i) {
//         cur->next = new CNode(arr[i]);
//         cur = cur->next;
//     }
//     cur->next = head;
//     return head;
// }

// void printCircular(CNode* head) {
//     if (!head) { cout << "Empty\n"; return; }
//     CNode* cur = head;
//     do {
//         cout << cur->data << " ";
//         cur = cur->next;
//     } while (cur != head);
//     cout << "\n";
// }

 // 2.}    

// // Doubly linked node
// struct DNode {
//     int data;
//     DNode* prev;
//     DNode* next;
//     DNode(int x=0): data(x), prev(nullptr), next(nullptr) {}
// };

// // remove even nodes from doubly linked list; returns new head
// DNode* removeEvenDoubly(DNode* head) {
//     DNode* cur = head;
//     while (cur) {
//         DNode* nxt = cur->next;
//         if ((cur->data % 2) == 0) {
//             // remove cur
//             if (cur->prev) cur->prev->next = cur->next;
//             else head = cur->next; // removed head
//             if (cur->next) cur->next->prev = cur->prev;
//             delete cur;
//         }
//         cur = nxt;
//     }
//     return head;
// }

// DNode* makeDoubly(const vector<int>& arr) {
//     if (arr.empty()) return nullptr;
//     DNode* head = new DNode(arr[0]);
//     DNode* cur = head;
//     for (size_t i=1;i<arr.size();++i) {
//         cur->next = new DNode(arr[i]);
//         cur->next->prev = cur;
//         cur = cur->next;
//     }
//     return head;
// }

// void printDoubly(DNode* head) {
//     DNode* cur = head;
//     while (cur) {
//         cout << cur->data;
//         if (cur->next) cout << " ";
//         cur = cur->next;
//     }
//     cout << "\n";
// }

// // remove even nodes from circular singly list; returns new head
// CNode* removeEvenCircular(CNode* head) {
//     if (!head) return nullptr;
//     // handle nodes until head becomes odd or list becomes empty
//     // first handle leading even nodes (head may change)
//     while (head && (head->data % 2) == 0) {
//         // if only one node
//         if (head->next == head) {
//             delete head;
//             return nullptr;
//         }
//         // find last to re-link
//         CNode* last = head;
//         while (last->next != head) last = last->next;
//         CNode* toDelete = head;
//         head = head->next;
//         last->next = head;
//         delete toDelete;
//     }
//     if (!head) return nullptr;

//     // now head is odd; remove remaining even nodes
//     CNode* prev = head;
//     CNode* cur = head->next;
//     while (cur != head) {
//         if ((cur->data % 2) == 0) {
//             prev->next = cur->next;
//             delete cur;
//             cur = prev->next;
//         } else {
//             prev = cur;
//             cur = cur->next;
//         }
//     }
//     return head;
// }

// 3.}
// DNode* reverseGroupDoubly(DNode* head, int k) {
//     if (!head || k <= 1) return head;

//     // We'll perform iterative grouping
//     DNode* newHead = nullptr;
//     DNode* groupPrevTail = nullptr; // tail of previous processed group
//     DNode* cur = head;

//     while (cur) {
//         // collect group
//         DNode* groupHead = cur;
//         DNode* groupTail = cur;
//         int cnt = 1;
//         while (cnt < k && groupTail->next) {
//             groupTail = groupTail->next;
//             ++cnt;
//         }

//         DNode* nextGroupHead = groupTail->next;

//         // reverse group from groupHead to groupTail (inclusive)
//         DNode* p = groupHead;
//         DNode* temp = nullptr;
//         // standard reversal swapping next and prev within group
//         DNode* end = groupTail->next; // boundary (stop when p == end)
//         while (p != end) {
//             temp = p->next;
//             p->next = p->prev;
//             p->prev = temp;
//             p = temp;
//         }
//         // after reversal, groupTail becomes new head of group
//         if (!newHead) newHead = groupTail;

//         // connect previous group's tail to new group's head
//         if (groupPrevTail) {
//             groupPrevTail->next = groupTail;
//             groupTail->prev = groupPrevTail;
//         }
//         // connect new group's tail (which is original groupHead) to nextGroupHead
//         groupHead->next = nextGroupHead;
//         if (nextGroupHead) nextGroupHead->prev = groupHead;

//         // update for next iteration
//         groupPrevTail = groupHead;
//         cur = nextGroupHead;
//     }
//     return newHead;
// }

// 4.}
// struct DRNode {
//     int data;
//     DRNode* prev;
//     DRNode* next;
//     DRNode* random;
//     DRNode(int x=0): data(x), prev(nullptr), next(nullptr), random(nullptr) {}
// };

// // helper to build list from vector and optionally set randoms by shift delta
// vector<DRNode*> buildDRList(const vector<int>& vals) {
//     vector<DRNode*> nodes;
//     for (int v: vals) nodes.push_back(new DRNode(v));
//     for (size_t i=0;i<nodes.size();++i) {
//         nodes[i]->next = (i+1<nodes.size()? nodes[i+1] : nullptr);
//         nodes[i]->prev = (i>0 ? nodes[i-1] : nullptr);
//     }
//     return nodes;
// }

// // heuristic fixer
// void fixSingleWrongRandom(DRNode* head) {
//     if (!head) return;
//     // collect nodes in vector
//     vector<DRNode*> nodes;
//     for (DRNode* p=head; p; p=p->next) nodes.push_back(p);
//     int n = nodes.size();
//     if (n==0) return;

//     // compute index map
//     unordered_map<DRNode*, int> idx;
//     for (int i=0;i<n;++i) idx[nodes[i]] = i;

//     // compute deltas for nodes with non-null random; store counts
//     unordered_map<int,int> deltaCount;
//     vector<int> deltas(n, INT_MIN); // INT_MIN -> random null
//     for (int i=0;i<n;++i) {
//         DRNode* r = nodes[i]->random;
//         if (!r) { deltas[i] = INT_MIN; continue; }
//         if (idx.find(r)==idx.end()) { deltas[i] = INT_MIN; continue; } // points outside
//         int d = idx[r] - i; // relative offset
//         deltas[i] = d;
//         deltaCount[d]++;
//     }

//     if (deltaCount.empty()) {
//         // nothing to infer
//         return;
//     }

//     // find majority delta
//     int majorityDelta = 0;
//     int bestCount = -1;
//     for (auto &pr: deltaCount) {
//         if (pr.second > bestCount) {
//             bestCount = pr.second;
//             majorityDelta = pr.first;
//         }
//     }

//     // find outlier index(s) whose delta != majorityDelta
//     int outlierIdx = -1;
//     for (int i=0;i<n;++i) {
//         if (deltas[i] != INT_MIN && deltas[i] != majorityDelta) {
//             outlierIdx = i;
//             break;
//         }
//     }

//     if (outlierIdx == -1) {
//         // maybe some are INT_MIN, attempt to set them if majorityDelta is defined
//         for (int i=0;i<n;++i) {
//             if (deltas[i]==INT_MIN) { outlierIdx = i; break; }
//         }
//     }

//     if (outlierIdx == -1) return; // nothing to fix

//     int targetIdx = outlierIdx + majorityDelta;
//     if (targetIdx < 0 || targetIdx >= n) {
//         // can't set within bounds => set null
//         nodes[outlierIdx]->random = nullptr;
//     } else {
//         nodes[outlierIdx]->random = nodes[targetIdx];
//     }
// }

//5.}
// struct GridNode {
//     int val;
//     GridNode* right;
//     GridNode* left;
//     GridNode* up;
//     GridNode* down;
//     GridNode(int x=0): val(x), right(nullptr), left(nullptr), up(nullptr), down(nullptr) {}
// };

// vector<vector<GridNode*>> matrixToGrid(const vector<vector<int>>& A) {
//     int m = A.size();
//     if (m==0) return {};
//     int n = A[0].size();
//     vector<vector<GridNode*>> G(m, vector<GridNode*>(n,nullptr));
//     for (int i=0;i<m;++i) for (int j=0;j<n;++j) G[i][j] = new GridNode(A[i][j]);
//     // link right and left
//     for (int i=0;i<m;++i) {
//         for (int j=0;j<n;++j) {
//             if (j+1<n) { G[i][j]->right = G[i][j+1]; G[i][j+1]->left = G[i][j]; }
//             if (i+1<m) { G[i][j]->down = G[i+1][j]; G[i+1][j]->up = G[i][j]; }
//         }
//     }
//     return G;
// }

// void printGridRowMajor(const vector<vector<GridNode*>>& G) {
//     int m = G.size();
//     if (m==0) { cout << "Empty grid\n"; return; }
//     int n = G[0].size();
//     for (int i=0;i<m;++i) {
//         for (int j=0;j<n;++j) {
//             cout << G[i][j]->val;
//             if (j+1<n) cout << " ";
//         }
//         cout << "\n";
//     }
// }
//                                                           Assignment- 7 Sorting 
// 1.}
// ---------- a. SELECTION SORT ----------
// void selectionSort(vector<int>& arr) {
//     int n = arr.size();
//     for (int i = 0; i < n - 1; ++i) {
//         int minIdx = i;
//         for (int j = i + 1; j < n; ++j)
//             if (arr[j] < arr[minIdx])
//                 minIdx = j;
//         swap(arr[i], arr[minIdx]);
//     }
// }

// // ---------- b. INSERTION SORT ----------
// void insertionSort(vector<int>& arr) {
//     int n = arr.size();
//     for (int i = 1; i < n; ++i) {
//         int key = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
//     }
// }

// // ---------- c. BUBBLE SORT ----------
// void bubbleSort(vector<int>& arr) {
//     int n = arr.size();
//     bool swapped;
//     for (int i = 0; i < n - 1; ++i) {
//         swapped = false;
//         for (int j = 0; j < n - i - 1; ++j) {
//             if (arr[j] > arr[j + 1]) {
//                 swap(arr[j], arr[j + 1]);
//                 swapped = true;
//             }
//         }
//         if (!swapped) break; // optimization
//     }
// }

// // ---------- d. MERGE SORT ----------
// void merge(vector<int>& arr, int l, int m, int r) {
//     int n1 = m - l + 1;
//     int n2 = r - m;
//     vector<int> L(n1), R(n2);
//     for (int i = 0; i < n1; ++i) L[i] = arr[l + i];
//     for (int j = 0; j < n2; ++j) R[j] = arr[m + 1 + j];

//     int i = 0, j = 0, k = l;
//     while (i < n1 && j < n2)
//         arr[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
//     while (i < n1) arr[k++] = L[i++];
//     while (j < n2) arr[k++] = R[j++];
// }

// void mergeSort(vector<int>& arr, int l, int r) {
//     if (l < r) {
//         int m = (l + r) / 2;
//         mergeSort(arr, l, m);
//         mergeSort(arr, m + 1, r);
//         merge(arr, l, m, r);
//     }
// }

// // ---------- e. QUICK SORT ----------
// int partitionQ(vector<int>& arr, int low, int high) {
//     int pivot = arr[high];
//     int i = low - 1;
//     for (int j = low; j < high; ++j) {
//         if (arr[j] < pivot) {
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[i + 1], arr[high]);
//     return i + 1;
// }

// void quickSort(vector<int>& arr, int low, int high) {
//     if (low < high) {
//         int pi = partitionQ(arr, low, high);
//         quickSort(arr, low, pi - 1);
//         quickSort(arr, pi + 1, high);
//     }
// }

// // ---------- DISPLAY ----------
// void display(const vector<int>& arr) {
//     for (int x : arr) cout << x << " ";
//     cout << "\n";
// }

// // ---------- MAIN (MENU DRIVEN) ----------
// int main() {
//     vector<int> arr;
//     int n, choice;

//     cout << "Enter number of elements: ";
//     cin >> n;
//     arr.resize(n);
//     cout << "Enter elements: ";
//     for (int i = 0; i < n; ++i) cin >> arr[i];

//     cout << "\nMENU:\n";
//     cout << "1. Selection Sort\n";
//     cout << "2. Insertion Sort\n";
//     cout << "3. Bubble Sort\n";
//     cout << "4. Merge Sort\n";
//     cout << "5. Quick Sort\n";
//     cout << "Enter your choice: ";
//     cin >> choice;

//     vector<int> temp = arr; // to preserve original

//     switch (choice) {
//         case 1:
//             selectionSort(temp);
//             cout << "After Selection Sort: ";
//             break;
//         case 2:
//             insertionSort(temp);
//             cout << "After Insertion Sort: ";
//             break;
//         case 3:
//             bubbleSort(temp);
//             cout << "After Bubble Sort: ";
//             break;
//         case 4:
//             mergeSort(temp, 0, n - 1);
//             cout << "After Merge Sort: ";
//             break;
//         case 5:
//             quickSort(temp, 0, n - 1);
//             cout << "After Quick Sort: ";
//             break;
//         default:
//             cout << "Invalid choice!\n";
//             return 0;
//     }

//     display(temp);
//     return 0;
// }
// 2.}
// void improvedSelectionSort(vector<int>& arr) {
//     int n = arr.size();
//     int start = 0, end = n - 1;

//     while (start < end) {
//         int minIndex = start;
//         int maxIndex = start;

//         // Find minimum and maximum in current range
//         for (int i = start; i <= end; ++i) {
//             if (arr[i] < arr[minIndex])
//                 minIndex = i;
//             if (arr[i] > arr[maxIndex])
//                 maxIndex = i;
//         }

//         // Move minimum element to beginning
//         swap(arr[start], arr[minIndex]);

//         // If the max element was originally at 'start',
//         // it has now moved to 'minIndex' after swapping
//         if (maxIndex == start)
//             maxIndex = minIndex;

//         // Move maximum element to end
//         swap(arr[end], arr[maxIndex]);

//         start++;
//         end--;
//     }
// }

// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;

//     vector<int> arr(n);
//     cout << "Enter elements: ";
//     for (int i = 0; i < n; ++i)
//         cin >> arr[i];

//     improvedSelectionSort(arr);

//     cout << "Sorted array: ";
//     for (int x : arr) cout << x << " ";
//     cout << endl;

//     return 0;
// }
// //                                                               Counting Sort
// void countingSort(vector<int>& arr) {
//     if (arr.empty()) return;

//     int maxVal = *max_element(arr.begin(), arr.end());
//     int minVal = *min_element(arr.begin(), arr.end());
//     int range = maxVal - minVal + 1;

//     vector<int> count(range, 0);
//     vector<int> output(arr.size());

//     // Count occurrences
//     for (int num : arr)
//         count[num - minVal]++;

//     // Prefix sums
//     for (int i = 1; i < range; ++i)
//         count[i] += count[i - 1];

//     // Build output array (stable)
//     for (int i = arr.size() - 1; i >= 0; --i) {
//         output[count[arr[i] - minVal] - 1] = arr[i];
//         count[arr[i] - minVal]--;
//     }

//     // Copy back
//     arr = output;
// }

// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;
//     vector<int> arr(n);
//     cout << "Enter elements: ";
//     for (int i = 0; i < n; ++i) cin >> arr[i];

//     countingSort(arr);

//     cout << "Sorted array (Counting Sort): ";
//     for (int x : arr) cout << x << " ";
//     cout << endl;

//     return 0;
// }
// //                                                         Radix Sort


// // Counting Sort by digit place
// void countingSortByDigit(vector<int>& arr, int exp) {
//     int n = arr.size();
//     vector<int> output(n);
//     vector<int> count(10, 0); // digits 0-9

//     // Count digits
//     for (int num : arr)
//         count[(num / exp) % 10]++;

//     // Prefix sum (cumulative count)
//     for (int i = 1; i < 10; ++i)
//         count[i] += count[i - 1];

//     // Build output (stable)
//     for (int i = n - 1; i >= 0; --i) {
//         int digit = (arr[i] / exp) % 10;
//         output[count[digit] - 1] = arr[i];
//         count[digit]--;
//     }

//     // Copy back
//     arr = output;
// }

// void radixSort(vector<int>& arr) {
//     int maxVal = *max_element(arr.begin(), arr.end());
//     // Apply counting sort for each digit
//     for (int exp = 1; maxVal / exp > 0; exp *= 10)
//         countingSortByDigit(arr, exp);
// }

// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;
//     vector<int> arr(n);
//     cout << "Enter elements: ";
//     for (int i = 0; i < n; ++i)
//         cin >> arr[i];

//     radixSort(arr);

//     cout << "Sorted array (Radix Sort): ";
//     for (int x : arr) cout << x << " ";
//     cout << endl;

//     return 0;
// }
// //                                                             ASSIGNMENT 8 TREES 
// //Node structure
// struct Node {
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val) {
//         data = val;
//         left = right = nullptr;
//     }
// };

// // Function prototypes
// void preorder(Node* root);
// void inorder(Node* root);
// void postorder(Node* root);

// // Recursive Traversals
// void preorder(Node* root) {
//     if (root == nullptr)
//         return;
//     cout << root->data << " ";   // Visit root
//     preorder(root->left);        // Traverse left subtree
//     preorder(root->right);       // Traverse right subtree
// }

// void inorder(Node* root) {
//     if (root == nullptr)
//         return;
//     inorder(root->left);         // Traverse left
//     cout << root->data << " ";   // Visit root
//     inorder(root->right);        // Traverse right
// }

// void postorder(Node* root) {
//     if (root == nullptr)
//         return;
//     postorder(root->left);       // Traverse left
//     postorder(root->right);      // Traverse right
//     cout << root->data << " ";   // Visit root
// }
// // 2.}
// //Node structure
// struct Node {
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val) {
//         data = val;
//         left = right = nullptr;
//     }
// };

// // Function to insert a new node into the BST
// Node* insert(Node* root, int key) {
//     if (root == nullptr)
//         return new Node(key);

//     if (key < root->data)
//         root->left = insert(root->left, key);
//     else if (key > root->data)
//         root->right = insert(root->right, key);

//     return root;
// }

// // (a) Search in BST (Recursive)
// Node* searchRecursive(Node* root, int key) {
//     if (root == nullptr || root->data == key)
//         return root;

//     if (key < root->data)
//         return searchRecursive(root->left, key);
//     else
//         return searchRecursive(root->right, key);
// }

// // (a) Search in BST (Non-Recursive)
// Node* searchIterative(Node* root, int key) {
//     while (root != nullptr) {
//         if (key == root->data)
//             return root;
//         else if (key < root->data)
//             root = root->left;
//         else
//             root = root->right;
//     }
//     return nullptr;
// }

// // (b) Find Maximum element in BST
// Node* findMax(Node* root) {
//     if (root == nullptr)
//         return nullptr;

//     while (root->right != nullptr)
//         root = root->right;
//     return root;
// }

// // (c) Find Minimum element in BST
// Node* findMin(Node* root) {
//     if (root == nullptr)
//         return nullptr;

//     while (root->left != nullptr)
//         root = root->left;
//     return root;
// }

// // (d) Inorder Successor
// Node* inorderSuccessor(Node* root, Node* node) {
//     if (node->right != nullptr)
//         return findMin(node->right);

//     Node* successor = nullptr;
//     Node* ancestor = root;
//     while (ancestor != node) {
//         if (node->data < ancestor->data) {
//             successor = ancestor;
//             ancestor = ancestor->left;
//         } else {
//             ancestor = ancestor->right;
//         }
//     }
//     return successor;
// }

// // (e) Inorder Predecessor
// Node* inorderPredecessor(Node* root, Node* node) {
//     if (node->left != nullptr)
//         return findMax(node->left);

//     Node* predecessor = nullptr;
//     Node* ancestor = root;
//     while (ancestor != node) {
//         if (node->data > ancestor->data) {
//             predecessor = ancestor;
//             ancestor = ancestor->right;
//         } else {
//             ancestor = ancestor->left;
//         }
//     }
//     return predecessor;
// }

// // Helper: Inorder Traversal
// void inorder(Node* root) {
//     if (root == nullptr)
//         return;
//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }

// // Main function
// int main() {
//     Node* root = nullptr;

//     // Create BST
//     int elements[] = {50, 30, 70, 20, 40, 60, 80};
//     for (int x : elements)
//         root = insert(root, x);

//     cout << "Inorder Traversal of BST: ";
//     inorder(root);
//     cout << "\n";

//     // (a) Search
//     int key = 40;
//     Node* found = searchRecursive(root, key);
//     cout << (found ? "\nFound (Recursive): " : "\nNot Found (Recursive): ") << key;

//     found = searchIterative(root, key);
//     cout << (found ? "\nFound (Iterative): " : "\nNot Found (Iterative): ") << key << "\n";

//     // (b) Maximum element
//     cout << "\nMaximum Element: " << findMax(root)->data;

//     // (c) Minimum element
//     cout << "\nMinimum Element: " << findMin(root)->data;

//     // (d) Inorder Successor
//     Node* node = searchRecursive(root, 60);
//     Node* succ = inorderSuccessor(root, node);
//     if (succ)
//         cout << "\nInorder Successor of " << node->data << " is " << succ->data;
//     else
//         cout << "\nInorder Successor does not exist.";

//     // (e) Inorder Predecessor
//     Node* pred = inorderPredecessor(root, node);
//     if (pred)
//         cout << "\nInorder Predecessor of " << node->data << " is " << pred->data;
//     else
//         cout << "\nInorder Predecessor does not exist.";

//     cout << "\n";
//     return 0;
// }

// // 3.}
// // Node structure
// struct Node {
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val) {
//         data = val;
//         left = right = nullptr;
//     }
// };

// // (a) Insert an element (no duplicates)
// Node* insert(Node* root, int key) {
//     if (root == nullptr)
//         return new Node(key);

//     if (key < root->data)
//         root->left = insert(root->left, key);
//     else if (key > root->data)
//         root->right = insert(root->right, key);
//     else
//         cout << "Duplicate key " << key << " not allowed!\n";

//     return root;
// }

// // Find minimum value node (used for deletion)
// Node* findMin(Node* node) {
//     while (node && node->left != nullptr)
//         node = node->left;
//     return node;
// }

// // (b) Delete an existing element
// Node* deleteNode(Node* root, int key) {
//     if (root == nullptr)
//         return root;

//     if (key < root->data)
//         root->left = deleteNode(root->left, key);
//     else if (key > root->data)
//         root->right = deleteNode(root->right, key);
//     else {
//         // Node found
//         if (root->left == nullptr) {
//             Node* temp = root->right;
//             delete root;
//             return temp;
//         } else if (root->right == nullptr) {
//             Node* temp = root->left;
//             delete root;
//             return temp;
//         }

//         // Node with two children: get inorder successor (smallest in right subtree)
//         Node* temp = findMin(root->right);
//         root->data = temp->data;
//         root->right = deleteNode(root->right, temp->data);
//     }
//     return root;
// }

// // (c) Maximum depth (height) of BST
// int maxDepth(Node* root) {
//     if (root == nullptr)
//         return 0;
//     return 1 + max(maxDepth(root->left), maxDepth(root->right));
// }

// // (d) Minimum depth of BST
// int minDepth(Node* root) {
//     if (root == nullptr)
//         return 0;
//     if (root->left == nullptr && root->right == nullptr)
//         return 1;

//     if (root->left == nullptr)
//         return 1 + minDepth(root->right);
//     if (root->right == nullptr)
//         return 1 + minDepth(root->left);

//     return 1 + min(minDepth(root->left), minDepth(root->right));
// }

// // Helper: Inorder Traversal
// void inorder(Node* root) {
//     if (root == nullptr)
//         return;
//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }

// // Main Function
// int main() {
//     Node* root = nullptr;
//     int choice, key;

//     while (true) {
//         cout << "\n===== Binary Search Tree Menu =====\n";
//         cout << "1. Insert Element\n";
//         cout << "2. Delete Element\n";
//         cout << "3. Display Inorder Traversal\n";
//         cout << "4. Maximum Depth of BST\n";
//         cout << "5. Minimum Depth of BST\n";
//         cout << "6. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//         case 1:
//             cout << "Enter value to insert: ";
//             cin >> key;
//             root = insert(root, key);
//             break;
//         case 2:
//             cout << "Enter value to delete: ";
//             cin >> key;
//             root = deleteNode(root, key);
//             break;
//         case 3:
//             cout << "Inorder Traversal: ";
//             inorder(root);
//             cout << "\n";
//             break;
//         case 4:
//             cout << "Maximum Depth (Height) of BST: " << maxDepth(root) << "\n";
//             break;
//         case 5:
//             cout << "Minimum Depth of BST: " << minDepth(root) << "\n";
//             break;
//         case 6:
//             cout << "Exiting...\n";
//             return 0;
//         default:
//             cout << "Invalid choice! Try again.\n";
//         }
//     }
// }
// 4.}
// struct Node {
//     int data;
//     Node *left, *right;
//     Node(int val) { data = val; left = right = nullptr; }
// };

// Node* insert(Node* root, int key) {
//     if (!root) return new Node(key);
//     if (key < root->data) root->left = insert(root->left, key);
//     else root->right = insert(root->right, key);
//     return root;
// }

// bool isBST(Node* root, int minVal = INT_MIN, int maxVal = INT_MAX) {
//     if (!root) return true;
//     if (root->data <= minVal || root->data >= maxVal) return false;
//     return isBST(root->left, minVal, root->data) && isBST(root->right, root->data, maxVal);
// }
// 5.}


//                                                                ADDITIONAL QS
// // 1.}
// struct Node {
//     int data;
//     Node *left, *right;
//     Node(int val) { data = val; left = right = nullptr; }
// };

// // Function to find sum of all left leaves
// int sumOfLeftLeaves(Node* root) {
//     if (!root) return 0;
//     int sum = 0;
//     if (root->left) {
//         if (!root->left->left && !root->left->right)
//             sum += root->left->data; // left leaf found
//         else
//             sum += sumOfLeftLeaves(root->left);
//     }
//     sum += sumOfLeftLeaves(root->right);
//     return sum;
// }
// #include <bits/stdc++.h>
// using namespace std;

// // ===================== BASIC TREE STRUCTURES ========================
// struct TreeNode {
//     int val;
//     TreeNode *left, *right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };

// struct DLL {
//     int val;
//     DLL *prev, *next;
//     DLL(int x) : val(x), prev(NULL), next(NULL) {}
// };

// // ====================================================================
// // ========================= Q2: UNIQUE BSTs ============================
// // ====================================================================
// vector<TreeNode*> generate(int start, int end) {
//     if(start > end) return {NULL};

//     vector<TreeNode*> result;
//     for(int i = start; i <= end; i++) {
//         vector<TreeNode*> leftTrees = generate(start, i - 1);
//         vector<TreeNode*> rightTrees = generate(i + 1, end);

//         for(TreeNode* L : leftTrees)
//             for(TreeNode* R : rightTrees) {
//                 TreeNode* root = new TreeNode(i);
//                 root->left = L;
//                 root->right = R;
//                 result.push_back(root);
//             }
//     }
//     return result;
// }

// vector<TreeNode*> generateTrees(int n) {
//     if(n == 0) return {};
//     return generate(1, n);
// }

// // ====================================================================
// // ==================== Q3: MAXIMUM DEPTH ==============================
// // ====================================================================
// int maxDepth(TreeNode* root) {
//     if(!root) return 0;
//     return 1 + max(maxDepth(root->left), maxDepth(root->right));
// }

// // ====================================================================
// // ==================== Q4: RIGHT VIEW OF TREE =========================
// // ====================================================================
// vector<int> rightView(TreeNode* root) {
//     if(!root) return {};
//     vector<int> result;
//     queue<TreeNode*> q;
//     q.push(root);

//     while(!q.empty()) {
//         int n = q.size();
//         for(int i = 0; i < n; i++) {
//             TreeNode* cur = q.front(); 
//             q.pop();
//             if(i == n - 1) result.push_back(cur->val);
//             if(cur->left) q.push(cur->left);
//             if(cur->right) q.push(cur->right);
//         }
//     }
//     return result;
// }

// // ====================================================================
// // = Q5: BUILD TREE FROM PREORDER + INORDER ============================
// // ====================================================================
// TreeNode* buildFromPreIn(vector<int>& preorder, int preStart, int preEnd,
//                          vector<int>& inorder, int inStart, int inEnd,
//                          unordered_map<int,int>& pos)
// {
//     if(preStart > preEnd || inStart > inEnd) return NULL;

//     TreeNode* root = new TreeNode(preorder[preStart]);
//     int inRoot = pos[root->val];
//     int leftCount = inRoot - inStart;

//     root->left = buildFromPreIn(preorder, preStart+1, preStart+leftCount,
//                                 inorder, inStart, inRoot-1, pos);

//     root->right = buildFromPreIn(preorder, preStart+leftCount+1, preEnd,
//                                  inorder, inRoot+1, inEnd, pos);

//     return root;
// }

// TreeNode* buildTreePreIn(vector<int>& preorder, vector<int>& inorder) {
//     unordered_map<int,int> pos;
//     for(int i = 0; i < inorder.size(); i++) pos[inorder[i]] = i;

//     return buildFromPreIn(preorder, 0, preorder.size()-1,
//                           inorder, 0, inorder.size()-1, pos);
// }

// // ====================================================================
// // = Q6: BUILD TREE FROM INORDER + POSTORDER ===========================
// // ====================================================================
// TreeNode* buildFromInPost(vector<int>& inorder, int inStart, int inEnd,
//                            vector<int>& postorder, int postStart, int postEnd,
//                            unordered_map<int,int>& pos)
// {
//     if(inStart > inEnd || postStart > postEnd) return NULL;

//     TreeNode* root = new TreeNode(postorder[postEnd]);
//     int inRoot = pos[root->val];
//     int leftCount = inRoot - inStart;

//     root->left = buildFromInPost(inorder, inStart, inRoot-1,
//                                  postorder, postStart, postStart+leftCount-1, pos);

//     root->right = buildFromInPost(inorder, inRoot+1, inEnd,
//                                   postorder, postStart+leftCount, postEnd-1, pos);

//     return root;
// }

// TreeNode* buildTreeInPost(vector<int>& inorder, vector<int>& postorder) {
//     unordered_map<int,int> pos;
//     for(int i = 0; i < inorder.size(); i++) pos[inorder[i]] = i;

//     return buildFromInPost(inorder, 0, inorder.size()-1,
//                            postorder, 0, postorder.size()-1, pos);
// }

// // ====================================================================
// // ==================== Q7: MERGE 2 BSTs → DLL =========================
// // ====================================================================
// void inorderBST(TreeNode* root, vector<int>& arr) {
//     if(!root) return;
//     inorderBST(root->left, arr);
//     arr.push_back(root->val);
//     inorderBST(root->right, arr);
// }

// DLL* mergeBSTsToDLL(TreeNode* root1, TreeNode* root2) {
//     vector<int> A, B;
//     inorderBST(root1, A);
//     inorderBST(root2, B);

//     vector<int> merged;
//     int i = 0, j = 0;

//     while(i < A.size() && j < B.size()) {
//         if(A[i] < B[j]) merged.push_back(A[i++]);
//         else merged.push_back(B[j++]);
//     }
//     while(i < A.size()) merged.push_back(A[i++]);
//     while(j < B.size()) merged.push_back(B[j++]);

//     DLL* head = NULL;
//     DLL* prev = NULL;

//     for(int x : merged) {
//         DLL* node = new DLL(x);
//         if(!head) head = node;
//         else {
//             prev->next = node;
//             node->prev = prev;
//         }
//         prev = node;
//     }
//     return head;
// }
//                                                                                                          ASSIGNMENT 9 GRAPHS
// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;
// const ll INF = (1LL<<60);

// // -------------------------- Graph utilities --------------------------
// struct Edge { int u, v; ll w; };
// struct AdjEdge { int to; ll w; };

// // -------------------------- BFS & DFS (generic) ----------------------
// vector<int> bfs_from(int src, const vector<vector<AdjEdge>>& adj) {
//     int n = (int)adj.size();
//     vector<int> dist(n, -1);
//     queue<int> q;
//     dist[src] = 0;
//     q.push(src);
//     while(!q.empty()) {
//         int u = q.front(); q.pop();
//         for(auto &e : adj[u]) {
//             int v = e.to;
//             if(dist[v] == -1) {
//                 dist[v] = dist[u] + 1;
//                 q.push(v);
//             }
//         }
//     }
//     return dist;
// }

// // iterative DFS (returns discovery order)
// vector<int> dfs_iter(int src, const vector<vector<AdjEdge>>& adj) {
//     int n = (int)adj.size();
//     vector<char> vis(n, 0);
//     vector<int> order;
//     stack<int> st;
//     st.push(src);
//     while(!st.empty()) {
//         int u = st.top(); st.pop();
//         if(vis[u]) continue;
//         vis[u] = 1;
//         order.push_back(u);
//         // push neighbors in reverse so that lower-index visited earlier (optional)
//         for(auto it = adj[u].rbegin(); it != adj[u].rend(); ++it) {
//             if(!vis[it->to]) st.push(it->to);
//         }
//     }
//     return order;
// }

// // recursive DFS (fills visited)
// void dfs_rec_util(int u, const vector<vector<AdjEdge>>& adj, vector<char>& vis, vector<int>& order) {
//     vis[u] = 1;
//     order.push_back(u);
//     for(auto &e : adj[u]) if(!vis[e.to]) dfs_rec_util(e.to, adj, vis, order);
// }
// vector<int> dfs_rec(int src, const vector<vector<AdjEdge>>& adj) {
//     int n = (int)adj.size();
//     vector<char> vis(n, 0);
//     vector<int> order;
//     dfs_rec_util(src, adj, vis, order);
//     return order;
// }

// // -------------------------- Kruskal (MST) -----------------------------
// struct DSU {
//     int n;
//     vector<int> p, r;
//     DSU(int n=0): n(n), p(n), r(n,0) { for(int i=0;i<n;i++) p[i]=i; }
//     int find(int x){ return p[x]==x?x:p[x]=find(p[x]); }
//     bool unite(int a,int b){
//         a=find(a); b=find(b);
//         if(a==b) return false;
//         if(r[a]<r[b]) swap(a,b);
//         p[b]=a;
//         if(r[a]==r[b]) r[a]++;
//         return true;
//     }
// };

// pair<ll, vector<Edge>> kruskal(int n, vector<Edge> edges) {
//     sort(edges.begin(), edges.end(), [](const Edge& a, const Edge& b){ return a.w < b.w; });
//     DSU dsu(n);
//     ll total = 0;
//     vector<Edge> chosen;
//     for(auto &e : edges) {
//         if(dsu.unite(e.u, e.v)) {
//             total += e.w;
//             chosen.push_back(e);
//         }
//     }
//     // check if MST spans all vertices: number of chosen edges should be n-1 (for connected)
//     if((int)chosen.size() != n-1) {
//         // graph not connected; MST not possible for entire graph - we return components MST sum anyway
//     }
//     return {total, chosen};
// }

// // -------------------------- Prim (MST) -------------------------------
// pair<ll, vector<Edge>> prim(int n, const vector<vector<AdjEdge>>& adj, int start=0) {
//     vector<char> vis(n, 0);
//     vector<ll> key(n, INF);
//     vector<int> parent(n, -1);
//     ll total = 0;
//     // min-heap {key, node, parent}
//     using T = tuple<ll,int,int>;
//     priority_queue<T, vector<T>, greater<T>> pq;
//     key[start] = 0;
//     pq.emplace(0, start, -1);
//     while(!pq.empty()) {
//         auto [k,u,par] = pq.top(); pq.pop();
//         if(vis[u]) continue;
//         vis[u] = 1;
//         parent[u] = par;
//         total += k;
//         for(auto &e: adj[u]) {
//             int v = e.to; ll w = e.w;
//             if(!vis[v] && w < key[v]) {
//                 key[v] = w;
//                 pq.emplace(w, v, u);
//             }
//         }
//     }
//     vector<Edge> chosen;
//     for(int v=0; v<n; ++v) if(parent[v]!=-1) chosen.push_back({parent[v], v, key[v]});
//     // Note: if some nodes unreachable from start, parent remains -1 (except start)
//     return {total, chosen};
// }

// // -------------------------- Dijkstra (single-source) -----------------
// vector<ll> dijkstra(int n, const vector<vector<AdjEdge>>& adj, int src) {
//     vector<ll> dist(n, INF);
//     dist[src] = 0;
//     priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<pair<ll,int>>> pq;
//     pq.push({0, src});
//     while(!pq.empty()) {
//         auto [d,u] = pq.top(); pq.pop();
//         if(d != dist[u]) continue;
//         for(auto &e : adj[u]) {
//             int v = e.to; ll w = e.w;
//             if(dist[v] > dist[u] + w) {
//                 dist[v] = dist[u] + w;
//                 pq.push({dist[v], v});
//             }
//         }
//     }
//     return dist;
// }

// // -------------------------- Problem A: Connected Components -----------
// int count_connected_components(int V, const vector<pair<int,int>>& edges) {
//     vector<vector<int>> g(V);
//     for(auto &e : edges) {
//         int u=e.first, v=e.second;
//         g[u].push_back(v);
//         g[v].push_back(u);
//     }
//     vector<char> vis(V, 0);
//     int components = 0;
//     for(int i=0;i<V;i++){
//         if(!vis[i]) {
//             components++;
//             // BFS
//             queue<int> q; q.push(i); vis[i]=1;
//             while(!q.empty()) {
//                 int u = q.front(); q.pop();
//                 for(int v: g[u]) if(!vis[v]) { vis[v]=1; q.push(v); }
//             }
//         }
//     }
//     return components;
// }

// // -------------------------- Problem B: Shortest Path in Grid ----------
// ll shortest_path_grid_dijkstra(const vector<vector<int>>& grid) {
//     int m = grid.size();
//     if(m==0) return 0;
//     int n = grid[0].size();
//     auto id = [&](int r,int c){ return r*n + c; };
//     int N = m*n;
//     vector<ll> dist(N, INF);
//     priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<pair<ll,int>>> pq;
//     dist[id(0,0)] = grid[0][0]; // include starting cell cost
//     pq.push({dist[id(0,0)], id(0,0)});
//     int dr[4] = {1,-1,0,0}, dc[4] = {0,0,1,-1};
//     while(!pq.empty()) {
//         auto [d,u] = pq.top(); pq.pop();
//         if(d != dist[u]) continue;
//         int r = u / n, c = u % n;
//         if(u == id(m-1,n-1)) return d;
//         for(int k=0;k<4;k++){
//             int nr = r + dr[k], nc = c + dc[k];
//             if(nr<0||nr>=m||nc<0||nc>=n) continue;
//             int v = id(nr,nc);
//             ll w = grid[nr][nc]; // cost to move into neighbor = destination cell cost
//             if(dist[v] > dist[u] + w) {
//                 dist[v] = dist[u] + w;
//                 pq.push({dist[v], v});
//             }
//         }
//     }
//     return dist[id(m-1,n-1)];
// }

// // -------------------------- Problem C: Network Delay Time -------------
// int network_delay_time(int N, vector<tuple<int,int,int>> times, int K) {
//     // nodes are 1..N
//     vector<vector<AdjEdge>> adj(N+1);
//     for(auto &t : times) {
//         int u,v,w; tie(u,v,w) = t;
//         adj[u].push_back({v, w});
//     }
//     vector<ll> dist(N+1, INF);
//     priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<pair<ll,int>>> pq;
//     dist[K] = 0;
//     pq.push({0, K});
//     while(!pq.empty()){
//         auto [d,u] = pq.top(); pq.pop();
//         if(d != dist[u]) continue;
//         for(auto &e : adj[u]) {
//             int v = e.to; ll w = e.w;
//             if(dist[v] > dist[u] + w) {
//                 dist[v] = dist[u] + w;
//                 pq.push({dist[v], v});
//             }
//         }
//     }
//     ll ans = 0;
//     for(int i=1;i<=N;i++){
//         if(dist[i] == INF) return -1;
//         ans = max(ans, dist[i]);
//     }
//     return (int)ans;
// }

// // -------------------------- Problem D: Number of Islands ----------------
// int num_islands(vector<vector<int>> grid) {
//     int m = grid.size();
//     if(m==0) return 0;
//     int n = grid[0].size();
//     vector<vector<char>> vis(m, vector<char>(n,0));
//     int cnt = 0;
//     int dr[4] = {1,-1,0,0}, dc[4] = {0,0,1,-1};
//     for(int i=0;i<m;i++) for(int j=0;j<n;j++) {
//         if(!vis[i][j] && grid[i][j]==1) {
//             cnt++;
//             // BFS
//             queue<pair<int,int>> q; q.push({i,j}); vis[i][j]=1;
//             while(!q.empty()){
//                 auto [r,c] = q.front(); q.pop();
//                 for(int k=0;k<4;k++){
//                     int nr = r+dr[k], nc = c+dc[k];
//                     if(nr<0||nr>=m||nc<0||nc>=n) continue;
//                     if(!vis[nr][nc] && grid[nr][nc]==1) {
//                         vis[nr][nc]=1; q.push({nr,nc});
//                     }
//                 }
//             }
//         }
//     }
//     return cnt;
// }

// // -------------------------- helpers for demonstration -----------------
// void print_vec(const vector<ll>& v) {
//     for(size_t i=0;i<v.size();++i) {
//         if(v[i]==INF) cout<<"INF";
//         else cout<<v[i];
//         if(i+1<v.size()) cout<<" ";
//     }
//     cout<<"\n";
// }
// void print_edges(const vector<Edge>& es) {
//     for(auto &e : es) cout<<e.u<<" - "<<e.v<<" (w="<<e.w<<")\n";
// }

// // -------------------------- MAIN: examples & simple demonstration -----
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     cout << "=== Graph algorithms demo ===\n\n";

//     // Example Graph for BFS/DFS/Dijkstra/Kruskal/Prim:
//     // build a weighted undirected graph with 6 nodes (0..5)
//     int n = 6;
//     vector<vector<AdjEdge>> adj(n);
//     auto addUndir = [&](int u,int v,ll w){
//         adj[u].push_back({v,w});
//         adj[v].push_back({u,w});
//     };
//     // sample edges
//     addUndir(0,1,4); addUndir(0,2,3); addUndir(1,2,1);
//     addUndir(1,3,2); addUndir(2,4,7); addUndir(3,4,3);
//     addUndir(3,5,1); addUndir(4,5,5);

//     cout << "BFS distances from node 0 (unweighted):\n";
//     auto bd = bfs_from(0, adj);
//     for(size_t i=0;i<bd.size();++i) cout<<"node "<<i<<": "<<bd[i]<<"\n";
//     cout<<"\n";

//     cout << "DFS (iterative) discovery order from 0:\n";
//     auto dfsi = dfs_iter(0, adj);
//     for(int u: dfsi) cout<<u<<" "; cout<<"\n\n";

//     cout << "DFS (recursive) discovery order from 0:\n";
//     auto dfsr = dfs_rec(0, adj);
//     for(int u: dfsr) cout<<u<<" "; cout<<"\n\n";

//     cout << "Dijkstra distances from node 0 (weighted):\n";
//     auto dist = dijkstra(n, adj, 0);
//     print_vec(dist);
//     cout<<"\n";

//     // Prepare edges list for Kruskal (undirected)
//     vector<Edge> edges;
//     for(int u=0;u<n;u++) for(auto &e: adj[u]) if(u < e.to) edges.push_back({u, e.to, e.w});
//     cout << "Kruskal MST:\n";
//     auto [kW, kEdges] = kruskal(n, edges);
//     cout << "Total MST weight (Kruskal): " << kW << "\n";
//     print_edges(kEdges);
//     cout << "\n";

//     cout << "Prim MST (starting at 0):\n";
//     auto [pW, pEdges] = prim(n, adj, 0);
//     cout << "Total MST weight (Prim, sum of chosen keys): " << pW << "\n";
//     print_edges(pEdges);
//     cout << "\n";

//     // ---------------- Additional Questions with given examples ------------
//     cout << "=== Additional Problems ===\n\n";

//     // 1. Graph Traversal Count (connected components)
//     {
//         cout << "1) Connected components count (example):\n";
//         int V = 5; vector<pair<int,int>> E = {{0,1},{1,2},{3,4}};
//         int comps = count_connected_components(V, E);
//         cout << "Input: V=5 E=3 edges=[[0,1],[1,2],[3,4]]\n";
//         cout << "Output: " << comps << "  (expected 2)\n\n";
//     }

//     // 2. Shortest Path in Grid
//     {
//         cout << "2) Shortest Path in Grid using Dijkstra (example):\n";
//         vector<vector<int>> grid = {{1,2,3},{4,5,6},{7,8,9}};
//         cout << "Grid:\n";
//         for(auto &row: grid) { for(auto x:row) cout<<x<<" "; cout<<"\n"; }
//         ll cost = shortest_path_grid_dijkstra(grid);
//         cout << "Minimum total cost from (0,0) to (2,2): " << cost << " (expected 21)\n\n";
//     }

//     // 3. Network Delay Time
//     {
//         cout << "3) Network Delay Time (example):\n";
//         int N = 4; int K = 2;
//         vector<tuple<int,int,int>> times = {{2,1,1},{2,3,1},{3,4,1}};
//         int ans = network_delay_time(N, times, K);
//         cout << "Input: N=4 K=2 times=[[2,1,1],[2,3,1],[3,4,1]]\n";
//         cout << "Output: " << ans << " (expected 2)\n\n";
//     }

//     // 4. Number of Islands
//     {
//         cout << "4) Number of Islands (example):\n";
//         vector<vector<int>> grid = {{1,1,0},{0,1,0},{1,0,1}};
//         cout << "Grid:\n";
//         for(auto &r: grid){ for(int x: r) cout<<x<<" "; cout<<"\n"; }
//         int c = num_islands(grid);
//         cout << "Output: " << c << " (expected 3)\n\n";
//     }

//     cout << "=== End of demo ===\n";
//     return 0;
// }


