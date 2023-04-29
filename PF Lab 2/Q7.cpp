////#include<iostream>
////using namespace std;
////int main() {
////	int n, f1, f2, f;
////	cout << "Enter the number:" << endl;
////	cin >> n;
////	f1 = -1;
////	f2 = 1;
////	while (n > 0) {
////		f = f1 + f2;
////		f1 = f2;
////		f2 = f;
////		cout << f << " , ";
////		n = n - 1;
////
////	}
////}
//
//#include <iostream>
//    using namespace std;
//
//    int main() {
//        int n, t1 = 0, t2 = 1, nextTerm = 0;
//
//        cout << "Enter the number of terms: ";
//        cin >> n;
//
//        cout << "Fibonacci Series: ";
//
//        for (int i = 1; i <= n; ++i) {
//            
//            if (i == 1) {
//                cout << t1 << ", ";
//                continue;
//            }
//            if (i == 2) {
//                cout << t2 << ", ";
//                continue;
//            }
//            nextTerm = t1 + t2;
//            t1 = t2;
//            t2 = nextTerm;
//
//            cout << nextTerm << ", ";
//        }
//}