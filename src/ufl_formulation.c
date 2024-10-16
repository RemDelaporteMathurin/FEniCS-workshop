
// This code conforms with the UFC specification version 2018.2.0.dev0
// and was automatically generated by FFCx version 0.9.0.
//
// This code was generated with the following options:
//
//  {'epsilon': 1e-14,
//   'output_directory': '/root/shared/src',
//   'profile': False,
//   'scalar_type': 'float64',
//   'sum_factorization': False,
//   'table_atol': 1e-09,
//   'table_rtol': 1e-06,
//   'ufl_file': ['/root/shared/src/ufl_formulation.py'],
//   'verbosity': 30,
//   'visualise': True}

#include <math.h>
#include <stdalign.h>
#include <stdlib.h>
#include <string.h>
#include <ufcx.h>



// Code for integral integral_72453e6970f39670be718c17ab8a2eefd72b5b6e

void tabulate_tensor_integral_72453e6970f39670be718c17ab8a2eefd72b5b6e(double* restrict A,
                                    const double* restrict w,
                                    const double* restrict c,
                                    const double* restrict coordinate_dofs,
                                    const int* restrict entity_local_index,
                                    const uint8_t* restrict quadrature_permutation)
{
// Quadrature rules
static const double weights_39d[6] = {0.054975871827661, 0.054975871827661, 0.054975871827661, 0.1116907948390055, 0.1116907948390055, 0.1116907948390055};
// Precomputed values of basis functions and precomputations
// FE* dimensions: [permutation][entities][points][dofs]
static const double FE1_C0_D10_Q39d[1][1][1][3] = {{{{-1.0, 1.0, 0.0}}}};
static const double FE1_C1_D01_Q39d[1][1][1][3] = {{{{-1.0, 0.0, 1.0}}}};
static const double FE2_C0_Q39d[1][1][6][6] = {{{{-0.07480380774819603, 0.5176323419876736, -0.07480380774819671, 0.2992152309927871, 0.03354481152314834, 0.2992152309927839},
  {-0.07480380774819613, -0.0748038077481966, 0.5176323419876735, 0.2992152309927871, 0.2992152309927838, 0.03354481152314828},
  {0.5176323419876713, -0.0748038077481967, -0.07480380774819674, 0.03354481152314866, 0.2992152309927869, 0.2992152309927868},
  {-0.04820837781551195, -0.08473049309397784, -0.04820837781551192, 0.1928335112620479, 0.7954802262009061, 0.1928335112620478},
  {-0.04820837781551193, -0.048208377815512, -0.08473049309397786, 0.1928335112620479, 0.192833511262048, 0.7954802262009062},
  {-0.08473049309397794, -0.04820837781551188, -0.04820837781551195, 0.7954802262009061, 0.1928335112620479, 0.1928335112620479}}}};
// ------------------------ 
// Section: Jacobian
// Inputs: FE1_C0_D10_Q39d, FE1_C1_D01_Q39d, coordinate_dofs
// Outputs: J_c2, J_c0, J_c1, J_c3
double J_c0 = 0.0;
double J_c3 = 0.0;
double J_c1 = 0.0;
double J_c2 = 0.0;
{
  for (int ic = 0; ic < 3; ++ic)
  {
    J_c0 += coordinate_dofs[(ic) * 3] * FE1_C0_D10_Q39d[0][0][0][ic];
    J_c3 += coordinate_dofs[(ic) * 3 + 1] * FE1_C1_D01_Q39d[0][0][0][ic];
    J_c1 += coordinate_dofs[(ic) * 3] * FE1_C1_D01_Q39d[0][0][0][ic];
    J_c2 += coordinate_dofs[(ic) * 3 + 1] * FE1_C0_D10_Q39d[0][0][0][ic];
  }
}
// ------------------------ 
double sp_39d_0 = J_c0 * J_c3;
double sp_39d_1 = J_c1 * J_c2;
double sp_39d_2 = -sp_39d_1;
double sp_39d_3 = sp_39d_0 + sp_39d_2;
double sp_39d_4 = fabs(sp_39d_3);
for (int iq = 0; iq < 6; ++iq)
{
  // ------------------------ 
  // Section: Intermediates
  // Inputs: 
  // Outputs: fw0
  double fw0 = 0;
  {
    fw0 = sp_39d_4 * weights_39d[iq];
  }
  // ------------------------ 
  // ------------------------ 
  // Section: Tensor Computation
  // Inputs: FE2_C0_Q39d, fw0
  // Outputs: A
  {
    double temp_0[6] = {0};
    for (int j = 0; j < 6; ++j)
    {
      temp_0[j] = fw0 * FE2_C0_Q39d[0][0][iq][j];
    }
    for (int j = 0; j < 6; ++j)
    {
      for (int i = 0; i < 6; ++i)
      {
        A[6 * (i) + (j)] += FE2_C0_Q39d[0][0][iq][i] * temp_0[j];
      }
    }
  }
  // ------------------------ 
}

}



ufcx_integral integral_72453e6970f39670be718c17ab8a2eefd72b5b6e =
{
  .enabled_coefficients = NULL,
  .tabulate_tensor_float32 = NULL,
  .tabulate_tensor_float64 = tabulate_tensor_integral_72453e6970f39670be718c17ab8a2eefd72b5b6e,
  .tabulate_tensor_complex64 = NULL,
  .tabulate_tensor_complex128 = NULL,
  .needs_facet_permutations = false,
  .coordinate_element_hash = UINT64_C(0),
};

// End of code for integral integral_72453e6970f39670be718c17ab8a2eefd72b5b6e

// Code for integral integral_5f3a0a020d959b598d839e3e41ad0d7402e3607a

void tabulate_tensor_integral_5f3a0a020d959b598d839e3e41ad0d7402e3607a(double* restrict A,
                                    const double* restrict w,
                                    const double* restrict c,
                                    const double* restrict coordinate_dofs,
                                    const int* restrict entity_local_index,
                                    const uint8_t* restrict quadrature_permutation)
{
// Quadrature rules
static const double weights_7a4[6] = {0.08333333333333333, 0.08333333333333333, 0.08333333333333333, 0.08333333333333333, 0.08333333333333333, 0.08333333333333333};
// Precomputed values of basis functions and precomputations
// FE* dimensions: [permutation][entities][points][dofs]
static const double FE1_C0_Q7a4[1][1][6][6] = {{{{-0.08525999807368716, 0.2096071917300056, -0.1243471936563188, 0.6114019857068721, 0.1011591387118275, 0.2874388755813007},
  {-0.1243471936563188, 0.2096071917300055, -0.08525999807368713, 0.2874388755813008, 0.1011591387118276, 0.6114019857068723},
  {-0.0852599980736872, -0.1243471936563187, 0.2096071917300056, 0.6114019857068721, 0.2874388755813007, 0.1011591387118275},
  {0.2096071917300056, -0.1243471936563188, -0.08525999807368713, 0.1011591387118276, 0.2874388755813008, 0.6114019857068723},
  {-0.1243471936563188, -0.08525999807368707, 0.2096071917300056, 0.2874388755813007, 0.6114019857068721, 0.1011591387118275},
  {0.2096071917300057, -0.08525999807368712, -0.1243471936563187, 0.1011591387118275, 0.6114019857068722, 0.2874388755813007}}}};
static const double FE2_C0_Q7a4[1][1][6][3] = {{{{0.1090390090728771, 0.659027622374092, 0.231933368553031},
  {0.2319333685530311, 0.659027622374092, 0.109039009072877},
  {0.109039009072877, 0.231933368553031, 0.6590276223740918},
  {0.6590276223740921, 0.231933368553031, 0.109039009072877},
  {0.231933368553031, 0.109039009072877, 0.6590276223740918},
  {0.6590276223740921, 0.1090390090728769, 0.231933368553031}}}};
static const double FE3_C0_D10_Q7a4[1][1][1][3] = {{{{-1.0, 1.0, 0.0}}}};
static const double FE3_C1_D01_Q7a4[1][1][1][3] = {{{{-1.0, 0.0, 1.0}}}};
// ------------------------ 
// Section: Jacobian
// Inputs: FE3_C0_D10_Q7a4, FE3_C1_D01_Q7a4, coordinate_dofs
// Outputs: J_c2, J_c0, J_c1, J_c3
double J_c0 = 0.0;
double J_c3 = 0.0;
double J_c1 = 0.0;
double J_c2 = 0.0;
{
  for (int ic = 0; ic < 3; ++ic)
  {
    J_c0 += coordinate_dofs[(ic) * 3] * FE3_C0_D10_Q7a4[0][0][0][ic];
    J_c3 += coordinate_dofs[(ic) * 3 + 1] * FE3_C1_D01_Q7a4[0][0][0][ic];
    J_c1 += coordinate_dofs[(ic) * 3] * FE3_C1_D01_Q7a4[0][0][0][ic];
    J_c2 += coordinate_dofs[(ic) * 3 + 1] * FE3_C0_D10_Q7a4[0][0][0][ic];
  }
}
// ------------------------ 
double sp_7a4_0 = J_c0 * J_c3;
double sp_7a4_1 = J_c1 * J_c2;
double sp_7a4_2 = -sp_7a4_1;
double sp_7a4_3 = sp_7a4_0 + sp_7a4_2;
double sp_7a4_4 = fabs(sp_7a4_3);
for (int iq = 0; iq < 6; ++iq)
{
  // ------------------------ 
  // Section: Coefficient
  // Inputs: w, FE2_C0_Q7a4
  // Outputs: w1
  double w1 = 0.0;
  {
    for (int ic = 0; ic < 3; ++ic)
    {
      w1 += w[1 + (ic)] * FE2_C0_Q7a4[0][0][iq][ic];
    }
  }
  // ------------------------ 
  // ------------------------ 
  // Section: Intermediates
  // Inputs: w1
  // Outputs: fw0
  double fw0 = 0;
  {
    double sv_7a4_0 = w[0] / w1;
    double sv_7a4_1 = sv_7a4_0 * sp_7a4_4;
    fw0 = sv_7a4_1 * weights_7a4[iq];
  }
  // ------------------------ 
  // ------------------------ 
  // Section: Tensor Computation
  // Inputs: FE1_C0_Q7a4, fw0
  // Outputs: A
  {
    for (int i = 0; i < 6; ++i)
    {
      A[(i)] += fw0 * FE1_C0_Q7a4[0][0][iq][i];
    }
  }
  // ------------------------ 
}

}

bool enabled_coefficients_integral_5f3a0a020d959b598d839e3e41ad0d7402e3607a[2] = {1, 1};

ufcx_integral integral_5f3a0a020d959b598d839e3e41ad0d7402e3607a =
{
  .enabled_coefficients = enabled_coefficients_integral_5f3a0a020d959b598d839e3e41ad0d7402e3607a,
  .tabulate_tensor_float32 = NULL,
  .tabulate_tensor_float64 = tabulate_tensor_integral_5f3a0a020d959b598d839e3e41ad0d7402e3607a,
  .tabulate_tensor_complex64 = NULL,
  .tabulate_tensor_complex128 = NULL,
  .needs_facet_permutations = false,
  .coordinate_element_hash = UINT64_C(0),
};

// End of code for integral integral_5f3a0a020d959b598d839e3e41ad0d7402e3607a

// Code for form form_60bd7d1b5b09ecd5835279d08c73daa087ee5aea


uint64_t finite_element_hashes_form_60bd7d1b5b09ecd5835279d08c73daa087ee5aea[2] = {UINT64_C(16933917890882691061), UINT64_C(16933917890882691061)};
int form_integral_offsets_form_60bd7d1b5b09ecd5835279d08c73daa087ee5aea[4] = {0, 1, 1, 1};
static ufcx_integral* form_integrals_form_60bd7d1b5b09ecd5835279d08c73daa087ee5aea[1] = {&integral_72453e6970f39670be718c17ab8a2eefd72b5b6e};
int form_integral_ids_form_60bd7d1b5b09ecd5835279d08c73daa087ee5aea[1] = {-1};




ufcx_form form_60bd7d1b5b09ecd5835279d08c73daa087ee5aea =
{

  .signature = "659bb7829ca998ae070c00d61791dc81c948b9e100543c733f60e485fa28787eed5c6d044ab581f3b1066a171205e3e71c8e80ac6c6bec35ce596fd00f6551de",
  .rank = 2,
  .num_coefficients = 0,
  .num_constants = 0,
  .original_coefficient_positions = NULL,

  .coefficient_name_map = NULL,
  .constant_name_map = NULL,

  .finite_element_hashes = finite_element_hashes_form_60bd7d1b5b09ecd5835279d08c73daa087ee5aea,

  .form_integrals = form_integrals_form_60bd7d1b5b09ecd5835279d08c73daa087ee5aea,
  .form_integral_ids = form_integral_ids_form_60bd7d1b5b09ecd5835279d08c73daa087ee5aea,
  .form_integral_offsets = form_integral_offsets_form_60bd7d1b5b09ecd5835279d08c73daa087ee5aea
};

// Alias name
ufcx_form* form_ufl_formulation_a = &form_60bd7d1b5b09ecd5835279d08c73daa087ee5aea;

// End of code for form form_60bd7d1b5b09ecd5835279d08c73daa087ee5aea

// Code for form form_c7c80fcfd945d845b9e2823cc09d2748fa65215b

int original_coefficient_position_form_c7c80fcfd945d845b9e2823cc09d2748fa65215b[2] = {0, 1};
uint64_t finite_element_hashes_form_c7c80fcfd945d845b9e2823cc09d2748fa65215b[3] = {UINT64_C(16933917890882691061), UINT64_C(16933917890882691059), UINT64_C(16933917890882727400)};
int form_integral_offsets_form_c7c80fcfd945d845b9e2823cc09d2748fa65215b[4] = {0, 1, 1, 1};
static ufcx_integral* form_integrals_form_c7c80fcfd945d845b9e2823cc09d2748fa65215b[1] = {&integral_5f3a0a020d959b598d839e3e41ad0d7402e3607a};
int form_integral_ids_form_c7c80fcfd945d845b9e2823cc09d2748fa65215b[1] = {-1};

static const char* coefficient_names_form_c7c80fcfd945d845b9e2823cc09d2748fa65215b[2] = {"w0", "g"};


ufcx_form form_c7c80fcfd945d845b9e2823cc09d2748fa65215b =
{

  .signature = "9d25d415d90788d1805df773c404c0c9a82b28c29fdc821aec35d93f72f60f7193ebbd45e144424424113c1eb3611fc4abcec67e102051a6c5821ce4487b6032",
  .rank = 1,
  .num_coefficients = 2,
  .num_constants = 0,
  .original_coefficient_positions = original_coefficient_position_form_c7c80fcfd945d845b9e2823cc09d2748fa65215b,

  .coefficient_name_map = coefficient_names_form_c7c80fcfd945d845b9e2823cc09d2748fa65215b,
  .constant_name_map = NULL,

  .finite_element_hashes = finite_element_hashes_form_c7c80fcfd945d845b9e2823cc09d2748fa65215b,

  .form_integrals = form_integrals_form_c7c80fcfd945d845b9e2823cc09d2748fa65215b,
  .form_integral_ids = form_integral_ids_form_c7c80fcfd945d845b9e2823cc09d2748fa65215b,
  .form_integral_offsets = form_integral_offsets_form_c7c80fcfd945d845b9e2823cc09d2748fa65215b
};

// Alias name
ufcx_form* form_ufl_formulation_L = &form_c7c80fcfd945d845b9e2823cc09d2748fa65215b;

// End of code for form form_c7c80fcfd945d845b9e2823cc09d2748fa65215b
