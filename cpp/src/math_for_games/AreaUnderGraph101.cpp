//
// Created by Vasyl Latushko on 10/26/24.
//
#include <iostream>
#include <cmath>
using namespace std;

struct Vector2
{
    float x;
    float y;
};

int main() {
    const int POINTS_NUMBER = 10;
    const float X_STEP = 0.1f;

    Vector2 chartPoints[POINTS_NUMBER];

    //define a simple rectangle
    float cumulativeArea = 0;
    float lastX = 0;
    float deltaX = 0.0f;
    auto x = static_cast<float>(X_STEP);

    for (int i = 1; i <= POINTS_NUMBER; ++i) {
        int arrayIndex = i - 1;
//        float y = x * 2.0f; //f(x) = 2x
        float y = powf(x, 2); //f(x) = x^2
        deltaX = x - lastX;
        cumulativeArea += deltaX * y;

        chartPoints[arrayIndex] = {x, y};

        cout << "Added a point: [" << chartPoints[arrayIndex].x << ", " << chartPoints[arrayIndex].y << "]" << endl;

        lastX = x;
        x += X_STEP;
    }

    cout << "cumulative area: " << cumulativeArea << endl;

    return 0;
}