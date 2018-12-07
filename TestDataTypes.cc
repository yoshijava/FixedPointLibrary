#include "FixedPoint.h"
#include "UFixedPoint.h"
#include <iostream>
using namespace std;

void testFixedPoint1() {
    cout << "-- Testing FixedPoint(16, 16)..." << endl;
    cout << "Original equation is: 32768 + 16384 = ?" << endl;
    FixedPoint v1(32768);
    FixedPoint v2(16384);
    FixedPoint v3;
    v3 = v1 + v2;
    cout << v1 << " + " << v2 << " = " << v3 << endl;
    v3 = v1 - v2;
    cout << v1 << " - " << v2 << " = " << v3 << endl;
    v3 = v1 * v2;
    cout << v1 << " * " << v2 << " = " << v3 << endl;
    v3 = v1 / v2;
    cout << v1 << " / " << v2 << " = " << v3 << endl;
    v3 = v1 & v2;
    cout << v1 << " & " << v2 << " = " << v3 << endl;
    v3 = v1 ^ v2;
    cout << v1 << " ^ " << v2 << " = " << v3 << endl;
}

void testFixedPoint2() {
    cout << "-- Testing FixedPoint(16, 8)..." << endl;
    cout << "Original equation is: 3.14159265359 + 2.71828182846 = ?" << endl;
    FixedPoint v1(3.14159265359, 16, 8);
    FixedPoint v2(2.71828182846, 16, 8);
    FixedPoint v3(0, 16, 8);
    v3 = v1 + v2;
    cout << v1 << " + " << v2 << " = " << v3 << endl;
    v3 = v1 - v2;
    cout << v1 << " - " << v2 << " = " << v3 << endl;
    v3 = v1 * v2;
    cout << v1 << " * " << v2 << " = " << v3 << endl;
    v3 = v1 / v2;
    cout << v1 << " / " << v2 << " = " << v3 << endl;
    v3 = v1 & v2;
    cout << v1 << " & " << v2 << " = " << v3 << endl;
    v3 = v1 ^ v2;
    cout << v1 << " ^ " << v2 << " = " << v3 << endl;
}

void testFixedPoint3() {
    cout << "-- Testing FixedPoint(16, 2)..." << endl;
    cout << "Original equation is: 3.14159265359 + 2.71828182846 = ?" << endl;
    FixedPoint v1(3.14159265359, 16, 2);
    FixedPoint v2(2.71828182846, 16, 2);
    FixedPoint v3(0, 16, 4);
    v3 = v1 + v2;
    cout << v1 << " + " << v2 << " = " << v3 << endl;
    v3 = v1 - v2;
    cout << v1 << " - " << v2 << " = " << v3 << endl;
    v3 = v1 * v2;
    cout << v1 << " * " << v2 << " = " << v3 << endl;
    v3 = v1 / v2;
    cout << v1 << " / " << v2 << " = " << v3 << endl;
    v3 = v1 & v2;
    cout << v1 << " & " << v2 << " = " << v3 << endl;
    v3 = v1 ^ v2;
    cout << v1 << " ^ " << v2 << " = " << v3 << endl;
}

void testUFixedPoint1() {
    cout << "-- Testing UFixedPoint(16, 16)..." << endl;
    cout << "Original equation is: 32768 + 16384 = ?" << endl;
    UFixedPoint v1(32768);
    UFixedPoint v2(16384);
    UFixedPoint v3;
    v3 = v1 + v2;
    cout << v1 << " + " << v2 << " = " << v3 << endl;
    v3 = v1 - v2;
    cout << v1 << " - " << v2 << " = " << v3 << endl;
    v3 = v1 * v2;
    cout << v1 << " * " << v2 << " = " << v3 << endl;
    v3 = v1 / v2;
    cout << v1 << " / " << v2 << " = " << v3 << endl;
    v3 = v1 & v2;
    cout << v1 << " & " << v2 << " = " << v3 << endl;
    v3 = v1 ^ v2;
    cout << v1 << " ^ " << v2 << " = " << v3 << endl;
}

void testUFixedPoint2() {
    cout << "-- Testing UFixedPoint(16, 8)..." << endl;
    cout << "Original equation is: 3.14159265359 + 2.71828182846 = ?" << endl;
    UFixedPoint v1(3.14159265359, 16, 8);
    UFixedPoint v2(2.71828182846, 16, 8);
    UFixedPoint v3(0, 16, 8);
    v3 = v1 + v2;
    cout << v1 << " + " << v2 << " = " << v3 << endl;
    v3 = v1 - v2;
    cout << v1 << " - " << v2 << " = " << v3 << endl;
    v3 = v1 * v2;
    cout << v1 << " * " << v2 << " = " << v3 << endl;
    v3 = v1 / v2;
    cout << v1 << " / " << v2 << " = " << v3 << endl;
    v3 = v1 & v2;
    cout << v1 << " & " << v2 << " = " << v3 << endl;
    v3 = v1 ^ v2;
    cout << v1 << " ^ " << v2 << " = " << v3 << endl;
}

void testUFixedPoint3() {
    cout << "-- Testing UFixedPoint(16, 2)..." << endl;
    cout << "Original equation is: 3.14159265359 + 2.71828182846 = ?" << endl;
    UFixedPoint v1(3.14159265359, 16, 2);
    UFixedPoint v2(2.71828182846, 16, 2);
    UFixedPoint v3(0, 16, 4);
    v3 = v1 + v2;
    cout << v1 << " + " << v2 << " = " << v3 << endl;
    v3 = v1 - v2;
    cout << v1 << " - " << v2 << " = " << v3 << endl;
    v3 = v1 * v2;
    cout << v1 << " * " << v2 << " = " << v3 << endl;
    v3 = v1 / v2;
    cout << v1 << " / " << v2 << " = " << v3 << endl;
    v3 = v1 & v2;
    cout << v1 << " & " << v2 << " = " << v3 << endl;
    v3 = v1 ^ v2;
    cout << v1 << " ^ " << v2 << " = " << v3 << endl;
}

void testFixedPoint4() {
    float din0 = 3.14159;
    float din1 = 2.71828;
    FixedPoint din0_fix(din0, 16, 8);
    FixedPoint din1_fix(din1, 16, 8);
    FixedPoint result_fix = din1_fix + din0_fix;
    cout << "Fixed Point:" << endl;
    cout << din0_fix << " + " << din1_fix << " = " << result_fix << endl;
    int result_raw = result_fix.getRawBits();
    cout << hex << "result_raw = 0x" << result_raw << endl;
}

void testFixedPoint5() {
    int din0 = 0;
    int din1 = 0;
    FixedPoint din0_fix(din0, 16, 8);
    FixedPoint din1_fix(din1, 16, 8);
    din0_fix.set(1, true);
    din1_fix.set(1, true);
    cout << hex << "din0(16,8)'s raw = 0x" << din0_fix.getRawBits() << endl;
    cout << hex << "din0(16,8)'s raw = 0x" << din0_fix.getRawBits() << endl;
    FixedPoint result_fix = din1_fix / din0_fix;
    cout << "Fixed Point:" << endl;
    cout << din0_fix << " / " << din1_fix << " = " << result_fix << endl;
    int result_raw = result_fix.getRawBits();
    cout << hex << "result_raw = 0x" << result_raw << endl;
}

void testFixedDiv(int W, int din0, int din1, int mantissaLength) {
    int dout = 0;
    if (W == 0) { // 8bit
        FixedPoint din0_fix(0, 8, 8 - mantissaLength);
        FixedPoint din1_fix(0, 8, 8 - mantissaLength);
        din0 = static_cast<char>(din0);
        din1 = static_cast<char>(din1);

        for (int i = 0; i < 8; i++) {
            din0_fix.set(i, ((din0 >> i) & 0b1) == 1);
            din1_fix.set(i, ((din1 >> i) & 0b1) == 1);
        }

        FixedPoint result_fix = din1_fix / din0_fix;
        cout << "double type: " << din1_fix / din0_fix << endl;
        int result_raw = result_fix.getRawBits();
        cout << hex << "Raw = 0x" << result_raw << endl;
        cout << "din1_fix / din0_fix = " << din1_fix << " / " << din0_fix << " = " << result_fix << endl;
    }
    else {   // 16bit
        din0 = static_cast<short>(din0);
        din1 = static_cast<short>(din1);
        FixedPoint din0_fix(0, 16, 16 - mantissaLength);
        FixedPoint din1_fix(0, 16, 16 - mantissaLength);

        for (int i = 0; i < 16; i++) {
            din0_fix.set(i, ((din0 >> i) & 0b1) == 1);
            din1_fix.set(i, ((din1 >> i) & 0b1) == 1);
        }

        FixedPoint result_fix = din1_fix / din0_fix;
        cout << "double type: " << din1_fix / din0_fix << endl;
        int result_raw = result_fix.getRawBits();
        cout << hex << "Raw = 0x" << result_raw << endl;
        cout << "din1_fix / din0_fix = " << din1_fix << " / " << din0_fix << " = " << result_fix << endl;
    }
}

void testFixedShift() {
    cout << "-- Test shifting --" << endl;
    FixedPoint a(3.14, 8, 4);
    cout << "Original: " << a << endl;
    cout << "RShift 1: " << (a >> 1) << endl;
    cout << "LShift 1: " << (a << 1) << endl;
    FixedPoint b(3.14, 7, 4);
    cout << endl;
    cout << "-- Test equalness --" << endl;
    cout << "(3.14, 8, 4) == (3.14, 7, 4) ? " << ((a == b) ? "True" : "False") << endl;
    cout << endl;
    FixedPoint c(3.14, 7, 5);
    cout << "Test two numbers: A vs C = " << a << ", " << c << endl;
    cout << "(3.14, 8, 4) == (3.14, 7, 5) ? " << ((a == c) ? "True" : "False") << endl;
    cout << "(3.14, 8, 4) < (3.14, 7, 5) ? " << ((a < c) ? "True" : "False") << endl;
    cout << endl;
    cout << "-- Test signed bit with saturation --" << endl;
    FixedPoint d(7, 4, 4);
    cout << "Original: " << d << endl;
    cout << "LShift 1: " << (d << 1) << endl;
    cout << endl;
    cout << "-- Test signed extension --" << endl;
    FixedPoint e(-8, 4, 4);
    cout << "Original: " << e << endl;
    cout << "RShift 1: " << (e >> 1) << endl;
}

int testIntRhs() {
    cout << "-- Testing constant RHS +-*/ with FixedPoint(16, 16)..." << endl;
    cout << "Original equation is: v1 + 5 = ?" << endl;
    FixedPoint v1(1);
    FixedPoint v2(2);
    FixedPoint result(0);
    result = v1 + 5;
    cout << v1 << " + " << 5 << " = " << result << endl;
    result = v1 + v2;
    cout << v1 << " + " << v2 << " = " << result << endl;
}

int main(int argc, char* argv[]) {
    cout << "- Testing FixedPoint Family -" << endl;
    testFixedPoint1();
    testFixedPoint2();
    testFixedPoint3();
    cout << endl;
    cout << "- Testing UFixedPoint Family -" << endl;
    testUFixedPoint1();
    testUFixedPoint2();
    testUFixedPoint3();
    cout << endl;
    cout << "- Test showing raw bits -" << endl;
    testFixedPoint4();
    cout << endl;
    cout << "- Test div raw bits -" << endl;
    testFixedPoint5();
    cout << endl;
    cout << "- Test div -" << endl;
    testFixedDiv(1, 0b0000000100000000, 0b0000000100000000, 8);
    testFixedDiv(1, 0b0000000111100000, 0b0000000111100000, 8);
    testFixedDiv(0, 0b11110000, 0b11100000, 4);
    cout << endl;
    cout << "- Test JS Shen's request - " << endl;
    testFixedShift();
    cout << endl;
    cout << "- Test constant +-*/ " << endl;
    testIntRhs();
    return 0;
}
