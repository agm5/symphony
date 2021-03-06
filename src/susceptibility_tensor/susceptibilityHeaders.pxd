cdef extern from "susceptibility_tensor.h":

    double chi_11_symphony(double nu,
            double magnetic_field,
            double electron_density,
            double observer_angle,
            int distribution,
	    int real_part,
            double theta_e,
            double power_law_p,
            double gamma_min,
            double gamma_max,
            double gamma_cutoff,
            double kappa,
            double kappa_width,
            char **error_message
           )

    double chi_12_symphony(double nu,
            double magnetic_field,
            double electron_density,
            double observer_angle,
            int distribution,
	    int real_part,
            double theta_e,
            double power_law_p,
            double gamma_min,
            double gamma_max,
            double gamma_cutoff,
            double kappa,
            double kappa_width,
            char **error_message
           )

    double chi_13_symphony(double nu,
            double magnetic_field,
            double electron_density,
            double observer_angle,
            int distribution,
	    int real_part,
            double theta_e,
            double power_law_p,
            double gamma_min,
            double gamma_max,
            double gamma_cutoff,
            double kappa,
            double kappa_width,
            char **error_message
           )

    double chi_21_symphony(double nu,
            double magnetic_field,
            double electron_density,
            double observer_angle,
            int distribution,
	    int real_part,
            double theta_e,
            double power_law_p,
            double gamma_min,
            double gamma_max,
            double gamma_cutoff,
            double kappa,
            double kappa_width,
            char **error_message
           )

    double chi_22_symphony(double nu,
            double magnetic_field,
            double electron_density,
            double observer_angle,
            int distribution,
	    int real_part,
            double theta_e,
            double power_law_p,
            double gamma_min,
            double gamma_max,
            double gamma_cutoff,
            double kappa,
            double kappa_width,
            char **error_message
           )

    double chi_23_symphony(double nu,
            double magnetic_field,
            double electron_density,
            double observer_angle,
            int distribution,
	    int real_part,
            double theta_e,
            double power_law_p,
            double gamma_min,
            double gamma_max,
            double gamma_cutoff,
            double kappa,
            double kappa_width,
            char **error_message
           )

    double chi_31_symphony(double nu,
            double magnetic_field,
            double electron_density,
            double observer_angle,
            int distribution,
	    int real_part,
            double theta_e,
            double power_law_p,
            double gamma_min,
            double gamma_max,
            double gamma_cutoff,
            double kappa,
            double kappa_width,
            char **error_message
           )

    double chi_32_symphony(double nu,
            double magnetic_field,
            double electron_density,
            double observer_angle,
            int distribution,
	    int real_part,
            double theta_e,
            double power_law_p,
            double gamma_min,
            double gamma_max,
            double gamma_cutoff,
            double kappa,
            double kappa_width,
            char **error_message
           )

    double chi_33_symphony(double nu,
            double magnetic_field,
            double electron_density,
            double observer_angle,
            int distribution,
	    int real_part,
            double theta_e,
            double power_law_p,
            double gamma_min,
            double gamma_max,
            double gamma_cutoff,
            double kappa,
            double kappa_width,
            char **error_message
           )

    double chi_rho_Q_symphony(double nu,
            double magnetic_field,
            double electron_density,
            double observer_angle,
            int distribution,
            int real_part,
            double theta_e,
            double power_law_p,
            double gamma_min,
            double gamma_max,
            double gamma_cutoff,
            double kappa,
            double kappa_width,
            char **error_message
            )

