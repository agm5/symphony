/* Symphony
 * by Alex Pandya, Zhaowei Zhang
 * 6/30/15
 *
 *References:
 * 1) Leung, Gammie, and Noble (2011)
 * 2) Xiao (2006)
*/

#include "symphony.h"

/* main: defines nu_c (cyclotron frequency) and loops through values of nu, 
 * to give output absorptivity or emissivity vs. nu/nu_c; can also be modified
 * to give abs/emiss as a function of its other parameters, like obs. angle
 *
 * The distribution function, polarization mode, and emissivity/absorptivity
 * must all be set in the file symphony.h; parameters can be set in params.h
 */

int main(int argc, char *argv[]) 
{
  struct parameters paramsM;
  setConstParams(&paramsM);
//  setUserParams(&params);

//set some the parameters
  //params.nu = 8.397752e+07;
  paramsM.magnetic_field = 30.;
  paramsM.electron_density = 1.;
  paramsM.observer_angle = paramsM.pi/3.;
  paramsM.distribution = paramsM.THERMAL;
  paramsM.polarization = paramsM.STOKES_I;

  double nu_c = get_nu_c(paramsM);

//  printf("\nDIST: %d, MODE: %d, POL: %d", DISTRIBUTION_FUNCTION,
//		 	                  MODE, POL_MODE);

  double max_nuratio = 1e6;
  int points_per_pow_10 = 1;
  int max_index = (int) log10(max_nuratio)*points_per_pow_10;

  printf("\nnu/nu_c         ans             fit");

  for (int index=0; index <= max_index; index++) 
  {

    paramsM.nu = pow(10., (double)index/(double)points_per_pow_10) * nu_c;
//    printf("nu/nu_c = %e\n", paramsM.nu/nu_c);

    printf("\n%e	%e	%e", paramsM.nu/nu_c, 
                                     j_nu(paramsM.nu, 
                                          paramsM.magnetic_field, 
                                          paramsM.electron_density, 
                                          paramsM.observer_angle, 
                                          paramsM.distribution, 
                                          paramsM.polarization,
                                          10.,3.5,1.,1000.,10000000.,3.5,10.
                                          ), 
                                 j_nu_fit(paramsM.nu, 
                                          paramsM.magnetic_field, 
                                          paramsM.electron_density, 
                                          paramsM.observer_angle, 
                                          paramsM.distribution, 
                                          paramsM.polarization,
                                          10.,3.5,1.,1000.,10000000.,3.5,10.
                                          ));

//    printf("\n%e\n", j_nu_fit(nu, magnetic_field, electron_density,
//                              observer_angle, distribution, polarization));

//    printf("EMISS:  %e     %e\n", j_nu(nu, magnetic_field, electron_density,
//                                       observer_angle, distribution, polarization,
//                                       10., 3.5, 1., 1000., 100000000., 3.5, 10.),
//                                 j_nu_fit(nu, magnetic_field, electron_density,
//                                          observer_angle, distribution, polarization,
//                                          10., 3.5, 1., 1000., 100000000., 3.5, 10.));

//   printf("\n%e	%e	%e", nu/nu_c, alpha_nu(nu, B, n_e, obs_angle, dist, pol), 
//                               alpha_nu_fit(nu, B, n_e, obs_angle, dist, pol));

//    printf("ABSORP: %e     %e\n", alpha_nu(nu, magnetic_field, electron_density,
//                                           observer_angle, distribution, polarization,
//                                           10., 3.5, 1., 1000., 100000000., 3.5, 10.),
//                                alpha_nu_fit(nu, magnetic_field, electron_density,
//                                             observer_angle, distribution, polarization,
//                                             10., 3.5, 1., 1000., 100000000., 3.5, 10.));

  }
  printf("\n");
  return 0;
}
