#include "PID.h"

/**
 * TODO: Complete the PID class. You may add any additional desired functions.
 */

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_) {
  /**
   * TODO: Initialize PID coefficients (and errors, if needed)
   */
  Kp = Kp_;
  Ki = Ki_;
  Kd = Kd_;
  sum_cte = 0;
  prev_cte = 0;
}

void PID::UpdateError(double cte) {
  /**
   * TODO: Update PID errors based on cte.
   */
  sum_cte += cte;
  auto diff_cte = cte - prev_cte;
  prev_cte = cte;
  p_error = -Kp * cte;
  d_error = - Kd * diff_cte;
  i_error = - Ki * sum_cte;
}

double PID::TotalError() {
  /**
   * TODO: Calculate and return the total error
   */
  return p_error + d_error + i_error;  // TODO: Add your total error calc here!
}

double PID::twiddle() {
  double p[3];
  double dp[3];

  return 0; 
}