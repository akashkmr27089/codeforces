#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int speed;
    cin >> speed; cin.ignore();
    int lightCount;
    cin >> lightCount; cin.ignore();
    int dist[lightCount] = {0}, durr[lightCount] = {0};
    for (int i = 0; i < lightCount; i++) {
        int distance;
        int duration;
        cin >> distance >> duration; cin.ignore();
        dist[i] = distance;
        durr[i] = duration;
    }
    int req_speed = speed;
    while(true){
        int sum = 0, i = 0;
        for(i = 0; i < lightCount; i++){
            sum += dist[i];
            if(int((sum/req_speed)/durr[i]) % 2 == 0) continue;
            else{
                req_speed--;
                break;
            }
        }
        cerr <<" Debug" << i << " " << req_speed<< endl;
        if(i == lightCount) break;
    }
    cout << req_speed << endl;

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    return 0;
}