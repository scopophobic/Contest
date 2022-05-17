/*Remove the alphabets
In a small country far, far away, all the best and brightest high schoolers apply to universities abroad(even further away).
The exact cause is always different and hard to find. Of course, the country's leaders aren't happy about that since they care
deeply about their gifted (read profitable) youth.That's why the Education Ministry has started research into various subliminal
messages to coax highschoolers into staying in their homeland. Their first try was handing out booster packs for the recent Magic:
The Gathering expansion known as Return to Ravni competition prizes. Then they started to play Tony Stark's song “Want me”2 on math
radio all the time. Finally, there is this task!

Given a word, remove from it all letters contained in the word CAMBRIDGE.


Input Format:
The first and only line of input contains a single word consisting of at least 3 and at most 100000
uppercase English letters.

Constraints:
3<=|S| <=100000 (length of string)
Time limit: 1 sec

Output Format:
The first and only line of output should contain the word obtained by removing all the letters in CAMBRIDGE from the given word. Test data will ensure that the solution contains at least one letter.
----------------
Sample Input 1:
LOVA
Sample Output 1:
LOV
----------------
Sample Input 2;
 KARIJERA
Sample Output 2:
KJ
*/

//solution

#include <bits/stdc++.h>
using namespace std;
int main() {
    string my_str;
    cin>>my_str;
    
    
    
    my_str.erase(remove(my_str.begin(), my_str.end(), 'C'), my_str.end());
    my_str.erase(remove(my_str.begin(), my_str.end(), 'A'), my_str.end());
    my_str.erase(remove(my_str.begin(), my_str.end(), 'M'), my_str.end());
    my_str.erase(remove(my_str.begin(), my_str.end(), 'B'), my_str.end());
    my_str.erase(remove(my_str.begin(), my_str.end(), 'R'), my_str.end());
    my_str.erase(remove(my_str.begin(), my_str.end(), 'I'), my_str.end());
    my_str.erase(remove(my_str.begin(), my_str.end(), 'G'), my_str.end());
    my_str.erase(remove(my_str.begin(), my_str.end(), 'E'), my_str.end());
    my_str.erase(remove(my_str.begin(), my_str.end(), 'D'), my_str.end());
   

   
   cout << my_str<<endl;
                    
}

