#ifndef HAVE_FIXED_POINT_H
#define HAVE_FIXED_POINT_H
#include <iostream>
#define SC_INCLUDE_FX
#include "sysc/datatypes/fx/sc_fix.h"
#include <vector>
using namespace std;
class FixedPoint {
  public:
    int intWidth;
    int width;
    // Rounding mode's possible parameters:
    //      * SC_RND        : Round up at 0.5
    //      * SC_RND_ZERO   : Round toward 0
    //      * SC_TRN        : Truncate
    //
    // Overflow mode's possible parameters:
    //      * SC_SAT        : Saturation
    //      * SC_SAT_ZERO   : Set to zero (odd behavior)
    //      * SC_WRAP       : Wraparound (easiest)
    //
    // In this implementation , if parameters are not given, we set the defaults to SC_RND and SC_SAT.
    // Note that the intWidth counts the sign-bit in.
    FixedPoint(double i = 0, int width = 16, int intWidth = 16, sc_dt::sc_q_mode qMode = sc_dt::SC_RND, sc_dt::sc_o_mode oMode = sc_dt::SC_SAT)
        : value(width, intWidth, qMode, oMode) {
        this->intWidth = intWidth;
        this->width = width;
        this->qMode = qMode;
        this->oMode = oMode;
        value = static_cast<double>(i);
        // pool.push_back(this);
    }

    // FixedPoint(double i = 0, int width = ProcessorUtility::getFixedPointWidth(), int intWidth = ProcessorUtility::getFixedPointIntWidth(), sc_dt::sc_q_mode qMode = sc_dt::SC_RND, sc_dt::sc_o_mode oMode = sc_dt::SC_SAT)
    // : value(width, intWidth, qMode, oMode) {
    //     this->intWidth = intWidth;
    //     this->width = width;
    //     this->qMode = qMode;
    //     this->oMode = oMode;
    //     value = static_cast<double>(i);
    // }

    // FixedPoint(int i = 0, int width = 16, int intWidth = 16, sc_dt::sc_q_mode qMode = sc_dt::SC_RND, sc_dt::sc_o_mode oMode = sc_dt::SC_SAT)
    // : FixedPoint((double) i, width, intWidth, qMode, oMode) {}

    inline FixedPoint operator+(const double rhs) {
        FixedPoint result(0, width, intWidth, qMode, oMode);
        result.value = this->value + rhs;
        return result;
    }

    inline FixedPoint operator+(const FixedPoint& rOperand) {
        FixedPoint result(0, width, intWidth, qMode, oMode);
        result.value = this->value + rOperand.value;
        return result;
    }

    inline FixedPoint operator-(const double rhs) {
        FixedPoint result(0, width, intWidth, qMode, oMode);
        result.value = this->value - rhs;
        return result;
    }

    inline FixedPoint operator-(const FixedPoint& rOperand) {
        FixedPoint result(0, width, intWidth, qMode, oMode);
        result.value = this->value - rOperand.value;
        return result;
    }

    inline FixedPoint operator*(const double rhs) {
        FixedPoint result(0, width, intWidth, qMode, oMode);
        result.value = this->value * rhs;
        return result;
    }

    inline FixedPoint operator*(const FixedPoint& rOperand) {
        FixedPoint result(0, width, intWidth, qMode, oMode);
        result.value = this->value * rOperand.value;
        return result;
    }

    // // FixedPoint implementation, return with another FixedPoint instance
    // inline FixedPoint operator*(const FixedPoint& rOperand) {
    //     int newWidth = this->width + rOperand.width;
    //     int newIntWidh = this->intWidth + rOperand.intWidth;
    //     FixedPoint result(0, newWidth, newIntWidth);
    //     result->value = value * rOperand.value;
    //     return.result;
    // }

    inline FixedPoint operator/(const double rhs) {
        FixedPoint result(0, width, intWidth, qMode, oMode);
        result.value = this->value / rhs;
        return result;
    }

    inline FixedPoint operator/(const FixedPoint& rOperand) {
        FixedPoint result(0, width, intWidth, qMode, oMode);
        result.value = this->value / rOperand.value;
        return result;
    }

    // inline FixedPoint operator%(const FixedPoint& rOperand) {
    //     FixedPoint result(0, width, intWidth, qMode, oMode);
    //     result->value = this->value % rOperand.value;
    //     return.result;
    // }
    inline FixedPoint operator&(const FixedPoint& rOperand) {
        FixedPoint result(0, width, intWidth, qMode, oMode);
        result.value = this->value & rOperand.value;
        return result;
    }

    inline FixedPoint operator|(const FixedPoint& rOperand) {
        FixedPoint result(0, width, intWidth, qMode, oMode);
        result.value = this->value | rOperand.value;
        return result;
    }

    inline FixedPoint operator^(const FixedPoint& rOperand) {
        FixedPoint result(0, width, intWidth, qMode, oMode);
        result.value = this->value ^ rOperand.value;
        return result;
    }

    inline bool operator<(const FixedPoint& rOperand) {
        return this->value < rOperand.value;
    }

    inline bool operator>(const FixedPoint& rOperand) {
        return this->value > rOperand.value;
    }

    inline bool operator==(const FixedPoint& rOperand) {
        return this->value == rOperand.value;
    }

    //JS Add
    inline void Bin_Disp() {
        for (int i = width; i > 0; i--) {
            //cout << "i = " << i << endl;
            cout << this->value[i - 1];

            if ((i - 1) == (width - intWidth))
                cout << ".";
            else if ((i - 1) % 4 == 0) {
                if (i - 1 != 0)
                    cout << "_";
            }
        }
        cout << endl;
    }

    //JS Add
    inline int Leading_One() {
        for (int i = width; i > 0; i--) {
            //cout << "i-1 = " << i-1 << endl;
            if (this->value[i - 1])
                return i - 1;
        }
        //cannot find 1, it should be error.
        return -1;
    }

    inline FixedPoint operator<<(int N) {
        // int signedBit = this->value[width-1];
        FixedPoint result(0, width, intWidth, qMode, oMode);
        result.value = this->value << N;
        // result.value[width - 1] = signedBit; // Actually, it is the same without doing this. Just for safety
        return result;
    }

    inline FixedPoint operator>>(int N) {
        // int signedBit = this->value[width-1];
        FixedPoint result(0, width, intWidth, qMode, oMode);
        result.value = this->value >> N;
        // result.value[width - 1] = signedBit; // Actually, it is the same without doing this. Just for safety
        return result;
    }

    inline int operator[](int offset) {
        return this->value[offset];
    }

    inline void set(int index, bool value) {
        this->value[index] = value;
    }

    inline FixedPoint& operator=(const FixedPoint& operand) {
        value = operand.value;
        intWidth = operand.intWidth;
        width = operand.width;
        return *this;
    }

    inline int getRawBits() {
        int result_raw = 0;
        // std::cout << "wl bits = " << value.wl() << std::std::endl;
        for (int i = value.wl() - 1; i >= 0; i--) {
            result_raw |= value[i];
            // std::cout << value[i] << std::std::endl;
            result_raw <<= 1;
        }
        result_raw >>= 1;
        return result_raw;
    }

    // JS Added
    inline void displayBin() {

        for (int i = width; i > 0; i--) {
            //cout << "i = " << i << std::endl;
            std::cout << this->value[i - 1];

            if ((i - 1) == (width - intWidth))
                std::cout << ".";
            else if ((i - 1) % 4 == 0) {
                if (i - 1 != 0)
                    std::cout << "_";
            }
        }
        std::cout << std::endl;
    }

    // JS Added
    inline int getLeadingOne() {
        for (int i = width; i > 0; i--) {
            //std::cout << "i-1 = " << i-1 << std::endl;
            if (this->value[i - 1])
                return i - 1;
        }
        //cannot find 1, it should be error.
        return -1;
    }

    inline double toDouble() {
        return value.to_double();
    }

    inline double toFloat() {
        return value.to_float();
    }

    inline double toInt() {
        return static_cast<int>(value.to_double());
    }

    inline friend std::ostream& operator<<(std::ostream& os, const FixedPoint& obj) {
        os << obj.value;
        return os;
    }

  private:
    sc_dt::sc_fix_fast value;
    sc_dt::sc_q_mode qMode;
    sc_dt::sc_o_mode oMode;
};

#endif
