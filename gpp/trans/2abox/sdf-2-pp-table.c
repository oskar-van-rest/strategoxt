#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Verbose_0;
Symbol sym_PP_Table_1;
Symbol sym_PP_Entry_2;
Symbol sym_Path1_1;
Symbol sym_Path_2;
Symbol sym_selector_2;
Symbol sym_Arg_1;
Symbol sym_S_1;
Symbol sym_KW_0;
Symbol sym_FBOX_2;
Symbol sym_H_2;
Symbol sym_V_2;
Symbol sym_SOpt_2;
Symbol sym_VS_0;
Symbol sym_lit_1;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_sep_2;
Symbol sym_iter_1;
Symbol sym_iter_star_1;
Symbol sym_alt_2;
Symbol sym_char_class_1;
Symbol sym_sort_1;
Symbol sym_cons_1;
Symbol sym_prod_3;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym__0;
Symbol sym__1;
Symbol sym__2;
Symbol sym__3;
Symbol sym__4;
Symbol sym__5;
Symbol sym__6;
Symbol sym__7;
Symbol sym__8;
Symbol sym__9;
Symbol sym__10;
Symbol sym__11;
Symbol sym__12;
Symbol sym__13;
Symbol sym__14;
Symbol sym__15;
Symbol sym__16;
Symbol sym__17;
Symbol sym__18;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Undefined_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Silent_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_label_2;
Symbol sym_cons_1;
Symbol sym_prod_3;
Symbol sym_prod_fun_4;
Symbol sym_context_free_syntax_1;
Symbol sym_bracket_symbol_1;
Symbol sym_Strict_0;
static void init_module_constructors (void)
{
  sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
  ATprotectSymbol(sym_Verbose_0);
  sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
  ATprotectSymbol(sym_PP_Table_1);
  sym_PP_Entry_2 = ATmakeSymbol("PP-Entry", 2, ATfalse);
  ATprotectSymbol(sym_PP_Entry_2);
  sym_Path1_1 = ATmakeSymbol("Path1", 1, ATfalse);
  ATprotectSymbol(sym_Path1_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_selector_2 = ATmakeSymbol("selector", 2, ATfalse);
  ATprotectSymbol(sym_selector_2);
  sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
  ATprotectSymbol(sym_Arg_1);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
  ATprotectSymbol(sym_KW_0);
  sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
  ATprotectSymbol(sym_FBOX_2);
  sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
  ATprotectSymbol(sym_H_2);
  sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
  ATprotectSymbol(sym_V_2);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_iter_sep_2 = ATmakeSymbol("iter-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_sep_2);
  sym_iter_star_sep_2 = ATmakeSymbol("iter-star-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_star_sep_2);
  sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
  ATprotectSymbol(sym_iter_1);
  sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
  ATprotectSymbol(sym_iter_star_1);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
  sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
  ATprotectSymbol(sym_sort_1);
  sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
  ATprotectSymbol(sym_cons_1);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym__0 = ATmakeSymbol("", 0, ATfalse);
  ATprotectSymbol(sym__0);
  sym__1 = ATmakeSymbol("", 1, ATfalse);
  ATprotectSymbol(sym__1);
  sym__2 = ATmakeSymbol("", 2, ATfalse);
  ATprotectSymbol(sym__2);
  sym__3 = ATmakeSymbol("", 3, ATfalse);
  ATprotectSymbol(sym__3);
  sym__4 = ATmakeSymbol("", 4, ATfalse);
  ATprotectSymbol(sym__4);
  sym__5 = ATmakeSymbol("", 5, ATfalse);
  ATprotectSymbol(sym__5);
  sym__6 = ATmakeSymbol("", 6, ATfalse);
  ATprotectSymbol(sym__6);
  sym__7 = ATmakeSymbol("", 7, ATfalse);
  ATprotectSymbol(sym__7);
  sym__8 = ATmakeSymbol("", 8, ATfalse);
  ATprotectSymbol(sym__8);
  sym__9 = ATmakeSymbol("", 9, ATfalse);
  ATprotectSymbol(sym__9);
  sym__10 = ATmakeSymbol("", 10, ATfalse);
  ATprotectSymbol(sym__10);
  sym__11 = ATmakeSymbol("", 11, ATfalse);
  ATprotectSymbol(sym__11);
  sym__12 = ATmakeSymbol("", 12, ATfalse);
  ATprotectSymbol(sym__12);
  sym__13 = ATmakeSymbol("", 13, ATfalse);
  ATprotectSymbol(sym__13);
  sym__14 = ATmakeSymbol("", 14, ATfalse);
  ATprotectSymbol(sym__14);
  sym__15 = ATmakeSymbol("", 15, ATfalse);
  ATprotectSymbol(sym__15);
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
  sym_Stream_1 = ATmakeSymbol("Stream", 1, ATfalse);
  ATprotectSymbol(sym_Stream_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
  sym_Verbose_1 = ATmakeSymbol("Verbose", 1, ATfalse);
  ATprotectSymbol(sym_Verbose_1);
  sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
  ATprotectSymbol(sym_Version_0);
  sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
  ATprotectSymbol(sym_Input_1);
  sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
  ATprotectSymbol(sym_Output_1);
  sym_Binary_0 = ATmakeSymbol("Binary", 0, ATfalse);
  ATprotectSymbol(sym_Binary_0);
  sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
  ATprotectSymbol(sym_Statistics_0);
  sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
  ATprotectSymbol(sym_Help_0);
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_label_2 = ATmakeSymbol("label", 2, ATfalse);
  ATprotectSymbol(sym_label_2);
  sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
  ATprotectSymbol(sym_cons_1);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_prod_fun_4 = ATmakeSymbol("prod-fun", 4, ATfalse);
  ATprotectSymbol(sym_prod_fun_4);
  sym_context_free_syntax_1 = ATmakeSymbol("context-free-syntax", 1, ATfalse);
  ATprotectSymbol(sym_context_free_syntax_1);
  sym_bracket_symbol_1 = ATmakeSymbol("bracket-symbol", 1, ATfalse);
  ATprotectSymbol(sym_bracket_symbol_1);
  sym_Strict_0 = ATmakeSymbol("Strict", 0, ATfalse);
  ATprotectSymbol(sym_Strict_0);
}
ATerm term_k_25;
ATerm term_j_25;
ATerm term_h_25;
ATerm term_e_25;
ATerm term_y_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_y_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_m_23;
ATerm term_h_23;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_m_22;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_m_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_x_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_j_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_m_18;
ATerm term_d_18;
ATerm term_v_17;
ATerm term_s_17;
ATerm term_z_16;
ATerm term_s_16;
ATerm term_m_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_s_15;
ATerm term_q_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_f_15;
ATerm term_d_15;
ATerm term_b_15;
ATerm term_v_14;
ATerm term_f_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_y_11;
ATerm term_j_10;
ATerm term_e_10;
ATerm term_b_10;
ATerm term_t_9;
ATerm term_p_9;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_r_7;
ATerm term_p_6;
ATerm term_d_3;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_d_3));
  term_d_3 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym_Arg_1, term_r_8);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_SOpt_2, term_b_10, term_e_10);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No constructor defined for production: ", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_lit_1, term_u_12);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_lit_1, term_w_12);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym__2, term_b_15, term_d_15);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym__2, term_a_19, term_j_19);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_19);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym__2, term_t_19, term_d_3);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym__2, term_p_6, term_r_7);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym__2, term_q_21, term_d_3);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym__2, term_t_21, term_d_3);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym__2, term_e_21, term_d_3);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym__2, term_m_23, term_d_3);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--strict         Use strict typing of input term", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("out-type", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v     Verbose execution", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm Option_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm k_1 (ATerm b_1, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm t_75 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm v_82 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm m_89 (ATerm), ATerm t);
ATerm flat_alt_0_0 (ATerm t);
static ATerm h_0 (ATerm t);
ATerm argument_list_0_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm symbol2abox_1_0 (ATerm u_73 (ATerm), ATerm t);
ATerm _2_0 (ATerm q_59 (ATerm), ATerm r_59 (ATerm), ATerm t);
ATerm pair_0_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm make_0_0 (ATerm t);
ATerm NonTerminal_0_0 (ATerm t);
static ATerm m_25 (ATerm v_23, ATerm w_23, ATerm x_23, ATerm t);
ATerm number_node_1_0 (ATerm x_73 (ATerm), ATerm t);
static ATerm m_1 (ATerm t);
ATerm number_nonterminals_0_0 (ATerm t);
ATerm symbols2pp_entries_1_0 (ATerm t_73 (ATerm), ATerm t);
static ATerm t_1 (ATerm t);
static ATerm x_1 (ATerm t);
ATerm generate_pp_entries_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm g_83 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm y_1 (ATerm t);
ATerm unquote_chars_2_0 (ATerm j_91 (ATerm), ATerm k_91 (ATerm), ATerm t);
ATerm foldr_3_0 (ATerm k_88 (ATerm), ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm t);
static ATerm a_2 (ATerm t);
ATerm collect_p__1_0 (ATerm i_105 (ATerm), ATerm t);
static ATerm b_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm ppgenerate_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm x_76 (ATerm), ATerm t);
ATerm get_options_0_0 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm type_failure_0_0 (ATerm t);
static ATerm p_5 (ATerm k_37, ATerm l_37, ATerm t);
static ATerm q_5 (ATerm u_105 (ATerm), ATerm u_55, ATerm t);
ATerm InOutId_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm v_5 (ATerm z_36, ATerm a_37, ATerm t);
static ATerm w_5 (ATerm h_22, ATerm i_22, ATerm t);
static ATerm y_5 (ATerm w_81 (ATerm), ATerm o_165, ATerm l_22, ATerm t);
static ATerm x_5 (ATerm d_22, ATerm e_22, ATerm t);
static ATerm x_2 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm m_98 (ATerm), ATerm t);
static ATerm g_41 (ATerm z_40, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm z_5 (ATerm j_22, ATerm t);
static ATerm a_6 (ATerm b_37, ATerm c_37, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm r_42 (ATerm q_41, ATerm t);
static ATerm s_42 (ATerm u_41, ATerm v_41, ATerm w_41, ATerm t);
static ATerm t_42 (ATerm e_42, ATerm f_42, ATerm g_42, ATerm t);
static ATerm b_6 (ATerm t);
static ATerm h_3 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm p_82 (ATerm), ATerm t);
static ATerm u_5 (ATerm s_35, ATerm t_35, ATerm t);
ATerm debug_1_0 (ATerm u_81 (ATerm), ATerm t);
static ATerm k_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm v_96 (ATerm), ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm h_6 (ATerm v_45, ATerm w_45, ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm c_6 (ATerm v_50, ATerm w_50, ATerm u_50, ATerm t);
ATerm ArgOption_3_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm d_6 (ATerm u_39, ATerm v_39, ATerm t);
ATerm foldr_2_0 (ATerm i_88 (ATerm), ATerm j_88 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm u_96 (ATerm), ATerm t);
static ATerm c_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm need_help_1_0 (ATerm k_99 (ATerm), ATerm t);
ATerm map_1_0 (ATerm f_82 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t);
static ATerm f_6 (ATerm m_52, ATerm n_52, ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm n_59 (ATerm), ATerm o_59 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm n_101 (ATerm), ATerm t);
static ATerm g_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm parse_options_1_0 (ATerm m_101 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm m_99 (ATerm), ATerm n_99 (ATerm), ATerm o_99 (ATerm), ATerm p_99 (ATerm), ATerm t);
static ATerm o_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
ATerm iowrap_3_0 (ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm x_98 (ATerm), ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
ATerm io_idwrap_3_0 (ATerm q_105 (ATerm), ATerm r_105 (ATerm), ATerm s_105 (ATerm), ATerm t);
static ATerm d_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm p_7 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm Option_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm j_0 = NULL,q_0 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_0 = NULL,t_0 = NULL,u_0 = NULL;
      t = term_d_3;
      t = p_0(t);
      r_0 = t;
      t = term_p_6;
      t_0 = t;
      t = term_r_7;
      u_0 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_6, term_r_7, r_0);
      t = c_6(t_0, u_0, r_0, t);
      _fail(t);
    }
  else
    {
      ATerm x_0 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_0 = ATgetFirst((ATermList) t);
          q_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_0;
      t = n_0(t);
      t = term_d_3;
      t = o_0(t);
      x_0 = t;
      t = (ATerm) ATinsert(CheckATermList(q_0), x_0);
    }
  return(t);
}
static ATerm k_1 (ATerm b_1, ATerm t)
{
  ATerm c_1 = NULL;
  t = SSL_explode_term(b_1);
  if(match_cons(t, sym__2))
    {
      ATerm t_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      c_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_1;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm e_1 = NULL,g_1 = NULL,h_1 = NULL;
  h_1 = t;
  if(match_cons(t, sym__2))
    {
      e_1 = ATgetArgument(t, 0);
      g_1 = ATgetArgument(t, 1);
      {
        ATerm u_7 = t;
        int w_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm a_0 (ATerm t)
            {
              t = g_1;
              return(t);
            }
            t = e_1;
            t = at_end_1_0(a_0, t);
            LocalPopChoice(w_7);
          }
        else
          {
            t = u_7;
            t = k_1(h_1, t);
          }
      }
    }
  else
    {
      t = k_1(h_1, t);
    }
  return(t);
}
ATerm topdown_1_0 (ATerm t_75 (ATerm), ATerm t)
{
  static ATerm b_0 (ATerm t)
  {
    t = topdown_1_0(t_75, t);
    return(t);
  }
  t = t_75(t);
  t = SRTS_all(b_0, t);
  return(t);
}
ATerm at_end_1_0 (ATerm v_82 (ATerm), ATerm t)
{
  static ATerm g_2 (ATerm t)
  {
    ATerm z_1 = NULL,c_2 = NULL,f_2 = NULL;
    f_2 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_1 = ATgetFirst((ATermList) t);
        c_2 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm m_0 = NULL,z_0 = NULL,n_1 = NULL;
          t = SSLgetAnnotations(f_2);
          m_0 = t;
          t = c_2;
          t = g_2(t);
          z_0 = t;
          t = (ATerm) ATinsert(CheckATermList(z_0), z_1);
          n_1 = t;
          t = SSLsetAnnotations(n_1, m_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_2;
        t = v_82(t);
      }
    return(t);
  }
  t = g_2(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm m_2 = NULL,p_2 = NULL,r_2 = NULL;
  m_2 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_2;
    }
  else
    {
      static ATerm f_0 (ATerm t)
      {
        t = not_null(r_2);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_2 = ATgetFirst((ATermList) t);
          if(((r_2 != NULL) && (r_2 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_2;
      t = at_end_1_0(f_0, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm m_89 (ATerm), ATerm t)
{
  ATerm x_3 = NULL,y_3 = NULL,z_3 = NULL;
  x_3 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_3;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_3 = ATgetFirst((ATermList) t);
          z_3 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm x_7 = t;
        int z_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_1 = NULL,d_2 = NULL,e_2 = NULL,q_1 = NULL;
            t = SSLgetAnnotations(x_3);
            w_1 = t;
            t = y_3;
            t = m_89(t);
            d_2 = t;
            t = z_3;
            t = filter_1_0(m_89, t);
            e_2 = t;
            t = (ATerm) ATinsert(CheckATermList(e_2), d_2);
            q_1 = t;
            t = SSLsetAnnotations(q_1, w_1);
            LocalPopChoice(z_7);
          }
        else
          {
            t = x_7;
            t = z_3;
            t = filter_1_0(m_89, t);
          }
      }
    }
  return(t);
}
ATerm flat_alt_0_0 (ATerm t)
{
  ATerm v_4 = NULL,x_4 = NULL,e_5 = NULL,f_5 = NULL;
  if(match_cons(t, sym_alt_2))
    {
      e_5 = ATgetArgument(t, 0);
      f_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_5;
  if(match_cons(t, sym_alt_2))
    {
      v_4 = ATgetArgument(t, 0);
      x_4 = ATgetArgument(t, 1);
      {
        ATerm b_8 = t;
        int c_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_5 = NULL;
            t = (ATerm) ATmakeAppl(sym_alt_2, v_4, x_4);
            t = flat_alt_0_0(t);
            t_5 = t;
            t = (ATerm) ATinsert(CheckATermList(t_5), e_5);
            LocalPopChoice(c_8);
          }
        else
          {
            t = b_8;
            t = (ATerm) ATinsert(ATinsert(ATempty, f_5), e_5);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, f_5), e_5);
    }
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm o_4 = NULL;
  o_4 = t;
  {
    ATerm f_8 = t;
    int g_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_4;
        {
          ATerm h_8 = t;
          if((PushChoice() == 0))
            {
              ATerm q_2 = NULL;
              q_2 = t;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = q_2;
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm j_8 = ATgetFirst((ATermList) t);
                      ATerm n_8 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = q_2;
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = h_8;
            }
        }
        t = (ATerm) ATinsert(ATempty, o_4);
        LocalPopChoice(g_8);
      }
    else
      {
        t = f_8;
        t = o_4;
      }
  }
  return(t);
}
ATerm argument_list_0_0 (ATerm t)
{
  t = map_1_0(h_0, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL;
  a_5 = t;
  if(match_cons(t, sym_Arg_1))
    {
      z_4 = ATgetArgument(t, 0);
      {
        ATerm o_8 = t;
        int p_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_6 = NULL,u_1 = NULL;
            t = SSLgetAnnotations(a_5);
            m_6 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, z_4);
            u_1 = t;
            t = SSLsetAnnotations(u_1, m_6);
            t = term_s_8;
            LocalPopChoice(p_8);
          }
        else
          {
            t = o_8;
            t = a_5;
          }
      }
    }
  else
    {
      t = a_5;
    }
  return(t);
}
ATerm symbol2abox_1_0 (ATerm u_73 (ATerm), ATerm t)
{
  ATerm m_7 = NULL,n_7 = NULL,o_7 = NULL,q_7 = NULL,s_7 = NULL;
  static ATerm v_11 (ATerm t)
  {
    static ATerm z_11 (ATerm f_10, ATerm g_10, ATerm h_10, ATerm i_10, ATerm t)
    {
      ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL,t_10 = NULL,u_10 = NULL,w_10 = NULL;
      t = SSL_explode_term(i_10);
      if(match_cons(t, sym__2))
        {
          t_10 = ATgetArgument(t, 0);
          u_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, g_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, h_10, t_10)));
      t = conc_0_0(t);
      l_10 = t;
      t = u_10;
      t = argument_list_0_0(t);
      t = number_nonterminals_0_0(t);
      w_10 = t;
      t = make_0_0(t);
      m_10 = t;
      t = w_10;
      {
        static ATerm s_0 (ATerm t)
        {
          ATerm z_10 = NULL;
          z_10 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_10, l_10), z_10);
          t = v_11(t);
          return(t);
        }
        t = map_1_0(s_0, t);
      }
      t = concat_0_0(t);
      n_10 = t;
      t = (ATerm) ATinsert(CheckATermList(n_10), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, f_10, l_10), m_10));
      return(t);
    }
    ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,h_11 = NULL,j_11 = NULL,k_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL;
    if(match_cons(t, sym__2))
      {
        h_11 = ATgetArgument(t, 0);
        m_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = m_11;
    {
      ATerm t_8 = t;
      int u_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_lit_1))
            {
              ATerm v_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          LocalPopChoice(u_8);
          t = (ATerm) ATempty;
        }
      else
        {
          t = t_8;
          if(match_cons(t, sym__2))
            {
              n_11 = ATgetArgument(t, 0);
              o_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = o_11;
          {
            ATerm w_8 = t;
            int x_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_sort_1))
                  {
                    ATerm y_8 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                LocalPopChoice(x_8);
                t = h_11;
                {
                  ATerm z_8 = t;
                  int a_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym__2))
                        {
                          ATerm c_9 = ATgetArgument(t, 0);
                          ATerm d_9 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(a_9);
                      t = (ATerm) ATempty;
                    }
                  else
                    {
                      t = z_8;
                      t = (ATerm) ATempty;
                    }
                }
              }
            else
              {
                t = w_8;
                {
                  ATerm e_9 = t;
                  int f_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_char_class_1))
                        {
                          ATerm g_9 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(f_9);
                      t = h_11;
                      {
                        ATerm h_9 = t;
                        int i_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym__2))
                              {
                                ATerm j_9 = ATgetArgument(t, 0);
                                ATerm k_9 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(i_9);
                            t = (ATerm) ATempty;
                          }
                        else
                          {
                            t = h_9;
                            t = (ATerm) ATempty;
                          }
                      }
                    }
                  else
                    {
                      t = e_9;
                      if(match_cons(t, sym_alt_2))
                        {
                          e_11 = ATgetArgument(t, 0);
                          b_11 = ATgetArgument(t, 1);
                          t = h_11;
                          if(match_cons(t, sym__2))
                            {
                              j_11 = ATgetArgument(t, 0);
                              k_11 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = b_11;
                          if(match_cons(t, sym_alt_2))
                            {
                              c_11 = ATgetArgument(t, 0);
                              d_11 = ATgetArgument(t, 1);
                              {
                                ATerm l_9 = t;
                                int n_9 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm a_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL,i_4 = NULL,k_4 = NULL,m_4 = NULL,r_4 = NULL,v_1 = NULL;
                                    t = j_11;
                                    if(((m_7 != NULL) && (m_7 != t)))
                                      _fail(t);
                                    else
                                      m_7 = t;
                                    t = k_11;
                                    if(((n_7 != NULL) && (n_7 != t)))
                                      _fail(t);
                                    else
                                      n_7 = t;
                                    t = n_11;
                                    if(((o_7 != NULL) && (o_7 != t)))
                                      _fail(t);
                                    else
                                      o_7 = t;
                                    t = (ATerm) ATmakeAppl(sym_alt_2, e_11, (ATerm) ATmakeAppl(sym_alt_2, c_11, d_11));
                                    t = flat_alt_0_0(t);
                                    a_4 = t;
                                    t = term_p_9;
                                    e_4 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, term_p_9, a_4);
                                    t = p_5(e_4, a_4, t);
                                    d_4 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_11, k_11), (ATerm) ATmakeAppl(sym__2, n_11, d_4));
                                    t = v_11(t);
                                    r_4 = t;
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        i_4 = ATgetFirst((ATermList) t);
                                        k_4 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(r_4);
                                    f_4 = t;
                                    t = i_4;
                                    t = topdown_1_0(v_0, t);
                                    m_4 = t;
                                    t = (ATerm) ATinsert(CheckATermList(k_4), m_4);
                                    v_1 = t;
                                    t = SSLsetAnnotations(v_1, f_4);
                                    LocalPopChoice(n_9);
                                  }
                                else
                                  {
                                    t = l_9;
                                    t = z_11(j_11, k_11, n_11, o_11, t);
                                  }
                              }
                            }
                          else
                            {
                              t = z_11(j_11, k_11, n_11, o_11, t);
                            }
                        }
                      else
                        {
                          if(match_cons(t, sym_bracket_symbol_1))
                            {
                              e_11 = ATgetArgument(t, 0);
                              t = h_11;
                              if(match_cons(t, sym__2))
                                {
                                  j_11 = ATgetArgument(t, 0);
                                  k_11 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              {
                                ATerm r_9 = t;
                                int s_9 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_11, k_11), (ATerm) ATmakeAppl(sym__2, n_11, e_11));
                                    t = v_11(t);
                                    LocalPopChoice(s_9);
                                  }
                                else
                                  {
                                    t = r_9;
                                    t = z_11(j_11, k_11, n_11, o_11, t);
                                  }
                              }
                            }
                          else
                            {
                              t = h_11;
                              if(match_cons(t, sym__2))
                                {
                                  j_11 = ATgetArgument(t, 0);
                                  k_11 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = z_11(j_11, k_11, n_11, o_11, t);
                            }
                        }
                    }
                }
              }
          }
        }
    }
    return(t);
  }
  s_7 = t;
  t = term_d_3;
  t = u_73(t);
  q_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_7, s_7);
  t = v_11(t);
  return(t);
}
ATerm _2_0 (ATerm q_59 (ATerm), ATerm r_59 (ATerm), ATerm t)
{
  ATerm d_12 = NULL,f_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,h_2 = NULL;
  k_12 = t;
  if(match_cons(t, sym__2))
    {
      f_12 = ATgetArgument(t, 0);
      h_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_12);
  d_12 = t;
  t = f_12;
  t = q_59(t);
  i_12 = t;
  t = h_12;
  t = r_59(t);
  j_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_12, j_12);
  h_2 = t;
  t = SSLsetAnnotations(h_2, d_12);
  return(t);
}
ATerm pair_0_0 (ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL,q_12 = NULL,s_12 = NULL,t_12 = NULL;
  n_12 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_12;
    }
  else
    {
      ATerm y_12 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_12 = ATgetFirst((ATermList) t);
          q_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_12;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_12 = ATgetFirst((ATermList) t);
          t_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_12;
      t = pair_0_0(t);
      y_12 = t;
      t = (ATerm) ATinsert(CheckATermList(y_12), (ATerm) ATmakeAppl(sym__2, o_12, s_12));
    }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL,b_16 = NULL,f_16 = NULL,e_3 = NULL;
  b_16 = t;
  if(match_cons(t, sym_lit_1))
    {
      y_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_16);
  x_15 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, y_15);
  e_3 = t;
  t = SSLsetAnnotations(e_3, x_15);
  if(match_cons(t, sym_lit_1))
    {
      f_16 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_t_9, (ATerm) ATmakeAppl(sym_S_1, f_16));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          f_16 = ATgetArgument(t, 0);
          {
            ATerm y_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, f_16);
    }
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL,q_17 = NULL,b_18 = NULL,y_18 = NULL,z_18 = NULL,h_19 = NULL,q_3 = NULL,h_21 = NULL,w_19 = NULL,m_3 = NULL;
  h_19 = t;
  if(match_cons(t, sym__2))
    {
      q_17 = ATgetArgument(t, 0);
      b_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_19);
  o_17 = t;
  t = q_17;
  if(match_cons(t, sym_lit_1))
    {
      z_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_17);
  y_18 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, z_18);
  m_3 = t;
  t = SSLsetAnnotations(m_3, y_18);
  if(match_cons(t, sym_lit_1))
    {
      w_19 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_t_9, (ATerm) ATmakeAppl(sym_S_1, w_19));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          w_19 = ATgetArgument(t, 0);
          {
            ATerm z_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, w_19);
    }
  m_17 = t;
  t = b_18;
  t = _2_0(_id, j_1, t);
  if(match_cons(t, sym_lit_1))
    {
      h_21 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_t_9, (ATerm) ATmakeAppl(sym_S_1, h_21));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          h_21 = ATgetArgument(t, 0);
          {
            ATerm a_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, h_21);
    }
  n_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_17, n_17);
  q_3 = t;
  t = SSLsetAnnotations(q_3, o_17);
  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_j_10), (ATerm) ATinsert(ATinsert(ATempty, n_17), m_17));
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL;
  a_21 = t;
  if(match_cons(t, sym_iter_1))
    {
      b_21 = ATgetArgument(t, 0);
      {
        ATerm a_8 = NULL,o_3 = NULL;
        t = SSLgetAnnotations(a_21);
        a_8 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, b_21);
        o_3 = t;
        t = SSLsetAnnotations(o_3, a_8);
      }
    }
  else
    {
      ATerm q_8 = NULL,p_3 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          b_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_21);
      q_8 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, b_21);
      p_3 = t;
      t = SSLsetAnnotations(p_3, q_8);
    }
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm g_22 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      g_22 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_t_9, (ATerm) ATmakeAppl(sym_S_1, g_22));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          g_22 = ATgetArgument(t, 0);
          {
            ATerm k_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, g_22);
    }
  return(t);
}
ATerm make_0_0 (ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL;
  ATerm p_10 = t;
  int q_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,i_3 = NULL,r_15 = NULL,c_3 = NULL,o_15 = NULL,p_15 = NULL;
      t = reverse_acc_2_0(_id, w_0, t);
      q_14 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_14 = ATgetFirst((ATermList) t);
          j_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_14);
      h_14 = t;
      t = i_14;
      if(match_cons(t, sym__2))
        {
          n_14 = ATgetArgument(t, 0);
          o_14 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_14);
      m_14 = t;
      t = o_14;
      if(match_cons(t, sym_iter_1))
        {
          o_15 = ATgetArgument(t, 0);
          {
            ATerm v_6 = NULL,y_2 = NULL;
            t = SSLgetAnnotations(o_14);
            v_6 = t;
            t = (ATerm) ATmakeAppl(sym_iter_1, o_15);
            y_2 = t;
            t = SSLsetAnnotations(y_2, v_6);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_1))
            {
              o_15 = ATgetArgument(t, 0);
              {
                ATerm z_6 = NULL,z_2 = NULL;
                t = SSLgetAnnotations(o_14);
                z_6 = t;
                t = (ATerm) ATmakeAppl(sym_iter_star_1, o_15);
                z_2 = t;
                t = SSLsetAnnotations(z_2, z_6);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  o_15 = ATgetArgument(t, 0);
                  p_15 = ATgetArgument(t, 1);
                  {
                    ATerm e_7 = NULL,a_3 = NULL;
                    t = SSLgetAnnotations(o_14);
                    e_7 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, o_15, p_15);
                    a_3 = t;
                    t = SSLsetAnnotations(a_3, e_7);
                  }
                }
              else
                {
                  ATerm l_7 = NULL,b_3 = NULL;
                  if(match_cons(t, sym_iter_star_sep_2))
                    {
                      o_15 = ATgetArgument(t, 0);
                      p_15 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(o_14);
                  l_7 = t;
                  t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, o_15, p_15);
                  b_3 = t;
                  t = SSLsetAnnotations(b_3, l_7);
                }
            }
        }
      p_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_14, p_14);
      c_3 = t;
      t = SSLsetAnnotations(c_3, m_14);
      if(match_cons(t, sym_lit_1))
        {
          r_15 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_FBOX_2, term_t_9, (ATerm) ATmakeAppl(sym_S_1, r_15));
        }
      else
        {
          if(match_cons(t, sym__2))
            {
              r_15 = ATgetArgument(t, 0);
              {
                ATerm r_10 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, r_15);
        }
      k_14 = t;
      t = j_14;
      t = map_1_0(y_0, t);
      l_14 = t;
      t = (ATerm) ATinsert(CheckATermList(l_14), k_14);
      i_3 = t;
      t = SSLsetAnnotations(i_3, h_14);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_14 = ATgetFirst((ATermList) t);
          b_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm s_10 = t;
        if((PushChoice() == 0))
          {
            ATerm k_16 = NULL,o_16 = NULL,p_16 = NULL,r_16 = NULL,j_3 = NULL;
            r_16 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                o_16 = ATgetFirst((ATermList) t);
                p_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(r_16);
            k_16 = t;
            t = p_16;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(p_16), o_16);
            j_3 = t;
            t = SSLsetAnnotations(j_3, k_16);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = s_10;
          }
      }
      t = b_14;
      t = reverse_acc_2_0(_id, a_1, t);
      g_14 = t;
      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, c_14), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, g_14)));
      LocalPopChoice(q_10);
    }
  else
    {
      t = p_10;
      {
        ATerm v_10 = t;
        int x_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,l_3 = NULL,b_17 = NULL;
            t = reverse_acc_2_0(_id, d_1, t);
            w_16 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                u_16 = ATgetFirst((ATermList) t);
                v_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(w_16);
            t_16 = t;
            t = u_16;
            if(match_cons(t, sym_lit_1))
              {
                b_17 = ATgetArgument(t, 0);
                t = (ATerm) ATmakeAppl(sym_FBOX_2, term_t_9, (ATerm) ATmakeAppl(sym_S_1, b_17));
              }
            else
              {
                if(match_cons(t, sym__2))
                  {
                    b_17 = ATgetArgument(t, 0);
                    {
                      ATerm y_10 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Arg_1, b_17);
              }
            f_14 = t;
            t = v_16;
            {
              ATerm f_11 = t;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = f_11;
                }
            }
            t = reverse_acc_2_0(_id, f_1, t);
            d_14 = t;
            t = (ATerm) ATinsert(CheckATermList(d_14), f_14);
            l_3 = t;
            t = SSLsetAnnotations(l_3, t_16);
            t = d_14;
            t = pair_0_0(t);
            t = map_1_0(i_1, t);
            e_14 = t;
            t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, f_14), e_14));
            LocalPopChoice(x_10);
          }
        else
          {
            t = v_10;
            t = map_1_0(l_1, t);
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0_0 (ATerm t)
{
  ATerm g_11 = t;
  if((PushChoice() == 0))
    {
      ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL,y_4 = NULL;
      q_23 = t;
      if(match_cons(t, sym_lit_1))
        {
          p_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_23);
      o_23 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, p_23);
      y_4 = t;
      t = SSLsetAnnotations(y_4, o_23);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_11;
    }
  return(t);
}
static ATerm m_25 (ATerm v_23, ATerm w_23, ATerm x_23, ATerm t)
{
  ATerm e_24 = NULL,o_5 = NULL;
  t = SSLgetAnnotations(v_23);
  e_24 = t;
  t = x_23;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_23, x_23);
  o_5 = t;
  t = SSLsetAnnotations(o_5, e_24);
  t = (ATerm) ATempty;
  return(t);
}
ATerm number_node_1_0 (ATerm x_73 (ATerm), ATerm t)
{
  ATerm u_23 = NULL;
  static ATerm l_25 (ATerm t)
  {
    ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL;
    m_24 = t;
    if(match_cons(t, sym__2))
      {
        n_24 = ATgetArgument(t, 0);
        o_24 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = o_24;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_24 = ATgetFirst((ATermList) t);
        q_24 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm p_11 = t;
          int q_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_25(m_24, n_24, o_24, t);
              LocalPopChoice(q_11);
            }
          else
            {
              t = p_11;
              {
                ATerm r_11 = t;
                int s_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm x_24 = NULL,b_25 = NULL,d_25 = NULL;
                    t = p_24;
                    t = x_73(t);
                    t = term_r_8;
                    d_25 = t;
                    t = (ATerm) ATmakeAppl(sym__2, n_24, term_r_8);
                    t = d_6(n_24, d_25, t);
                    b_25 = t;
                    t = (ATerm) ATmakeAppl(sym__2, b_25, q_24);
                    t = l_25(t);
                    x_24 = t;
                    t = (ATerm) ATinsert(CheckATermList(x_24), (ATerm) ATmakeAppl(sym__2, n_24, p_24));
                    LocalPopChoice(s_11);
                  }
                else
                  {
                    t = r_11;
                    {
                      ATerm i_25 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, n_24, q_24);
                      t = l_25(t);
                      i_25 = t;
                      t = (ATerm) ATinsert(CheckATermList(i_25), p_24);
                    }
                  }
              }
            }
        }
      }
    else
      {
        t = m_25(m_24, n_24, o_24, t);
      }
    return(t);
  }
  u_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_8, u_23);
  t = l_25(t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL;
  w_25 = t;
  {
    ATerm t_11 = t;
    int u_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_label_2))
          {
            ATerm x_11 = ATgetArgument(t, 0);
            v_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(u_11);
        t = v_25;
      }
    else
      {
        t = t_11;
        t = w_25;
      }
  }
  return(t);
}
ATerm number_nonterminals_0_0 (ATerm t)
{
  t = map_1_0(m_1, t);
  t = number_node_1_0(NonTerminal_0_0, t);
  return(t);
}
ATerm symbols2pp_entries_1_0 (ATerm t_73 (ATerm), ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,h_26 = NULL,i_26 = NULL;
  t = number_nonterminals_0_0(t);
  i_26 = t;
  t = make_0_0(t);
  c_26 = t;
  t = i_26;
  {
    static ATerm o_1 (ATerm t)
    {
      static ATerm p_1 (ATerm t)
      {
        ATerm j_26 = NULL;
        t = term_d_3;
        t = t_73(t);
        j_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_26, (ATerm) ATempty);
        return(t);
      }
      t = symbol2abox_1_0(p_1, t);
      return(t);
    }
    t = map_1_0(o_1, t);
  }
  t = concat_0_0(t);
  d_26 = t;
  t = term_d_3;
  t = t_73(t);
  h_26 = t;
  t = (ATerm) ATinsert(CheckATermList(d_26), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, h_26), c_26));
  return(t);
}
static ATerm t_1 (ATerm t)
{
  if(!(match_cons(t, sym_Silent_0)))
    _fail(t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_y_11;
  return(t);
}
ATerm generate_pp_entries_0_0 (ATerm t)
{
  ATerm o_26 = NULL;
  ATerm a_12 = t;
  int e_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_26 = NULL,z_26 = NULL,g_27 = NULL,h_27 = NULL;
      ATerm m_12 = t;
      int p_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_prod_3))
            {
              y_26 = ATgetArgument(t, 0);
              {
                ATerm r_12 = ATgetArgument(t, 1);
              }
              g_27 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          LocalPopChoice(p_12);
          {
            static ATerm s_1 (ATerm t)
            {
              t = not_null(o_26);
              return(t);
            }
            t = g_27;
            {
              static ATerm r_1 (ATerm t)
              {
                if(match_cons(t, sym_cons_1))
                  {
                    if(((o_26 != NULL) && (o_26 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      o_26 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1_0(r_1, t);
            }
            t = y_26;
            t = symbols2pp_entries_1_0(s_1, t);
          }
        }
      else
        {
          t = m_12;
          {
            ATerm i_27 = NULL;
            if(match_cons(t, sym_prod_fun_4))
              {
                y_26 = ATgetArgument(t, 0);
                z_26 = ATgetArgument(t, 1);
                g_27 = ATgetArgument(t, 2);
                h_27 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_x_12)), z_26), (ATerm) ATinsert(ATinsert(ATempty, term_v_12), (ATerm) ATmakeAppl(sym_lit_1, y_26)));
            t = concat_0_0(t);
            i_27 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, i_27, g_27, h_27);
            t = generate_pp_entries_0_0(t);
          }
        }
      LocalPopChoice(e_12);
    }
  else
    {
      t = a_12;
      {
        ATerm z_12 = t;
        int a_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_13 = t;
            if((PushChoice() == 0))
              {
                ATerm j_27 = NULL;
                j_27 = t;
                t = term_f_13;
                t = get_options_0_0(t);
                t = oncetd_1_0(t_1, t);
                t = j_27;
                PopChoice();
                _fail(t);
              }
            else
              {
                t = c_13;
              }
            t = debug_1_0(x_1, t);
            LocalPopChoice(a_13);
          }
        else
          {
            t = z_12;
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm at_last_1_0 (ATerm g_83 (ATerm), ATerm t)
{
  static ATerm o_29 (ATerm t)
  {
    ATerm z_28 = NULL,e_29 = NULL,i_29 = NULL;
    z_28 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_29 = ATgetFirst((ATermList) t);
        i_29 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm g_13 = t;
      int h_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_9 = NULL,v_7 = NULL;
          t = SSLgetAnnotations(z_28);
          b_9 = t;
          t = i_29;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(i_29), e_29);
          v_7 = t;
          t = SSLsetAnnotations(v_7, b_9);
          t = g_83(t);
          LocalPopChoice(h_13);
        }
      else
        {
          t = g_13;
          {
            ATerm o_9 = NULL,w_9 = NULL,y_7 = NULL;
            t = SSLgetAnnotations(z_28);
            o_9 = t;
            t = i_29;
            t = o_29(t);
            w_9 = t;
            t = (ATerm) ATinsert(CheckATermList(w_9), e_29);
            y_7 = t;
            t = SSLsetAnnotations(y_7, o_9);
          }
        }
    }
    return(t);
  }
  t = o_29(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm z_29 = NULL,d_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_29 = ATgetFirst((ATermList) t);
      d_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = d_30;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_29;
    }
  else
    {
      t = d_30;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm r_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_13 = ATgetFirst((ATermList) t);
      r_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_30;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm j_91 (ATerm), ATerm k_91 (ATerm), ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL;
  o_30 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_30 = ATgetFirst((ATermList) t);
      {
        ATerm j_13 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = q_30;
  t = j_91(t);
  t = o_30;
  t = last_0_0(t);
  t = k_91(t);
  t = o_30;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_13 = ATgetFirst((ATermList) t);
      p_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_30;
  t = at_last_1_0(y_1, t);
  return(t);
}
ATerm foldr_3_0 (ATerm k_88 (ATerm), ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL;
  t_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_30;
      t = k_88(t);
    }
  else
    {
      ATerm d_31 = NULL,e_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_30 = ATgetFirst((ATermList) t);
          v_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_30;
      t = m_88(t);
      d_31 = t;
      t = v_30;
      t = foldr_3_0(k_88, l_88, m_88, t);
      e_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_31, e_31);
      t = l_88(t);
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_p__1_0 (ATerm i_105 (ATerm), ATerm t)
{
  static ATerm m_31 (ATerm t)
  {
    ATerm n_13 = t;
    int o_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_31 = NULL;
        t = i_105(t);
        l_31 = t;
        t = (ATerm) ATinsert(ATempty, l_31);
        LocalPopChoice(o_13);
      }
    else
      {
        t = n_13;
        {
          ATerm d_10 = NULL,o_10 = NULL;
          o_10 = t;
          t = SSL_explode_term(o_10);
          if(match_cons(t, sym__2))
            {
              ATerm p_13 = ATgetArgument(t, 0);
              d_10 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_10;
          t = foldr_3_0(a_2, conc_0_0, m_31, t);
        }
      }
    return(t);
  }
  t = m_31(t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm j_32 = NULL;
  if(match_cons(t, sym_context_free_syntax_1))
    {
      j_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_32;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm v_33 = NULL,x_33 = NULL;
  x_33 = t;
  if(match_cons(t, sym_cons_1))
    {
      v_33 = ATgetArgument(t, 0);
      {
        ATerm q_13 = t;
        int r_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_11 = NULL,i_11 = NULL,l_11 = NULL,d_8 = NULL;
            t = SSLgetAnnotations(x_33);
            a_11 = t;
            t = SSL_explode_string(v_33);
            t = unquote_chars_2_0(j_2, k_2, t);
            l_11 = t;
            t = SSL_implode_string(l_11);
            i_11 = t;
            t = (ATerm) ATmakeAppl(sym_cons_1, i_11);
            d_8 = t;
            t = SSLsetAnnotations(d_8, a_11);
            LocalPopChoice(r_13);
          }
        else
          {
            t = q_13;
            t = x_33;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_lit_1))
        {
          v_33 = ATgetArgument(t, 0);
          {
            ATerm s_13 = t;
            int u_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_12 = NULL,g_12 = NULL,l_12 = NULL,e_8 = NULL;
                t = SSLgetAnnotations(x_33);
                b_12 = t;
                t = SSL_explode_string(v_33);
                t = unquote_chars_2_0(l_2, n_2, t);
                l_12 = t;
                t = SSL_implode_string(l_12);
                g_12 = t;
                t = (ATerm) ATmakeAppl(sym_lit_1, g_12);
                e_8 = t;
                t = SSLsetAnnotations(e_8, b_12);
                LocalPopChoice(u_13);
              }
            else
              {
                t = s_13;
                t = x_33;
              }
          }
        }
      else
        {
          if(match_cons(t, sym_sort_1))
            {
              v_33 = ATgetArgument(t, 0);
              {
                ATerm v_13 = t;
                int x_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_13 = NULL,d_13 = NULL,e_13 = NULL,i_8 = NULL;
                    t = SSLgetAnnotations(x_33);
                    b_13 = t;
                    t = SSL_explode_string(v_33);
                    t = unquote_chars_2_0(o_2, s_2, t);
                    e_13 = t;
                    t = SSL_implode_string(e_13);
                    d_13 = t;
                    t = (ATerm) ATmakeAppl(sym_sort_1, d_13);
                    i_8 = t;
                    t = SSLsetAnnotations(i_8, b_13);
                    LocalPopChoice(x_13);
                  }
                else
                  {
                    t = v_13;
                    t = x_33;
                  }
              }
            }
          else
            {
              t = x_33;
            }
        }
    }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm y_13 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_13;
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm a_36 = NULL,d_36 = NULL,e_36 = NULL;
  e_36 = t;
  if(match_cons(t, sym_Arg_1))
    {
      d_36 = ATgetArgument(t, 0);
      {
        ATerm z_13 = t;
        int a_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_13 = NULL,m_13 = NULL,k_8 = NULL;
            t = SSLgetAnnotations(e_36);
            k_13 = t;
            t = SSL_int_to_string(d_36);
            m_13 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, m_13);
            k_8 = t;
            t = SSLsetAnnotations(k_8, k_13);
            LocalPopChoice(a_14);
          }
        else
          {
            t = z_13;
            t = e_36;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_selector_2))
        {
          d_36 = ATgetArgument(t, 0);
          a_36 = ATgetArgument(t, 1);
          {
            ATerm r_14 = t;
            int s_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_13 = NULL,w_13 = NULL,l_8 = NULL;
                t = SSLgetAnnotations(e_36);
                t_13 = t;
                t = SSL_int_to_string(d_36);
                w_13 = t;
                t = (ATerm) ATmakeAppl(sym_selector_2, w_13, a_36);
                l_8 = t;
                t = SSLsetAnnotations(l_8, t_13);
                LocalPopChoice(s_14);
              }
            else
              {
                t = r_14;
                t = e_36;
              }
          }
        }
      else
        {
          if(match_cons(t, sym_S_1))
            {
              d_36 = ATgetArgument(t, 0);
              {
                ATerm t_14 = t;
                int u_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_15 = NULL,n_15 = NULL,t_15 = NULL,u_15 = NULL,m_8 = NULL;
                    t = SSLgetAnnotations(e_36);
                    i_15 = t;
                    t = SSL_explode_string(d_36);
                    t_15 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_15), term_v_14), (ATerm) ATinsert(ATempty, term_v_14));
                    t = conc_0_0(t);
                    u_15 = t;
                    t = SSL_implode_string(u_15);
                    n_15 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, n_15);
                    m_8 = t;
                    t = SSLsetAnnotations(m_8, i_15);
                    LocalPopChoice(u_14);
                  }
                else
                  {
                    t = t_14;
                    t = e_36;
                  }
              }
            }
          else
            {
              t = e_36;
            }
        }
    }
  return(t);
}
ATerm ppgenerate_0_0 (ATerm t)
{
  ATerm i_32 = NULL;
  t = collect_p__1_0(b_2, t);
  t = concat_0_0(t);
  t = topdown_1_0(i_2, t);
  t = map_1_0(generate_pp_entries_0_0, t);
  t = filter_1_0(t_2, t);
  t = concat_0_0(t);
  i_32 = t;
  t = (ATerm) ATmakeAppl(sym_PP_Table_1, i_32);
  t = topdown_1_0(u_2, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm x_76 (ATerm), ATerm t)
{
  static ATerm p_36 (ATerm t)
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_76(t);
        LocalPopChoice(z_14);
      }
    else
      {
        t = y_14;
        t = SRTS_one(p_36, t);
      }
    return(t);
  }
  t = p_36(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm q_36 = NULL,r_36 = NULL;
  t = term_b_15;
  q_36 = t;
  t = term_d_15;
  r_36 = t;
  t = term_f_15;
  t = f_6(q_36, r_36, t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  if(!(match_cons(t, sym_Strict_0)))
    _fail(t);
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm h_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL;
      t = term_l_15;
      t = get_options_0_0(t);
      t = oncetd_1_0(v_2, t);
      t = term_m_15;
      t_36 = t;
      t = (ATerm) ATinsert(ATempty, term_q_15);
      u_36 = t;
      t = SSL_printnl(t_36, u_36);
      t = term_r_8;
      s_36 = t;
      t = SSL_exit(s_36);
      t = (ATerm) ATinsert(ATempty, term_q_15);
      LocalPopChoice(j_15);
    }
  else
    {
      t = h_15;
      {
        ATerm w_36 = NULL,x_36 = NULL;
        t = term_m_15;
        w_36 = t;
        t = (ATerm) ATinsert(ATempty, term_s_15);
        x_36 = t;
        t = SSL_printnl(w_36, x_36);
        t = (ATerm) ATinsert(ATempty, term_s_15);
      }
    }
  return(t);
}
static ATerm p_5 (ATerm k_37, ATerm l_37, ATerm t)
{
  t = SSL_mkterm(k_37, l_37);
  return(t);
}
static ATerm q_5 (ATerm u_105 (ATerm), ATerm u_55, ATerm t)
{
  ATerm h_37 = NULL,m_37 = NULL;
  t = term_d_3;
  t = u_105(t);
  h_37 = t;
  t = (ATerm) ATinsert(ATempty, u_55);
  m_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_37, (ATerm) ATinsert(ATempty, u_55));
  t = p_5(h_37, m_37, t);
  return(t);
}
ATerm InOutId_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL;
  g_38 = t;
  if(match_cons(t, sym__2))
    {
      h_38 = ATgetArgument(t, 0);
      i_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_15 = t;
    int w_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_17 = NULL,g_17 = NULL,m_9 = NULL;
        t = SSLgetAnnotations(g_38);
        g_17 = t;
        t = h_38;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("out-type", 0, ATtrue)))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_38, i_38);
        m_9 = t;
        t = SSLsetAnnotations(m_9, g_17);
        if(match_cons(t, sym__2))
          {
            ATerm z_15 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) z_15) != ATmakeSymbol("out-type", 0, ATtrue)))
              _fail(t);
            f_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_5(l_0, f_17, t);
        LocalPopChoice(w_15);
      }
    else
      {
        t = v_15;
        {
          ATerm w_17 = NULL,x_17 = NULL,g_18 = NULL,h_18 = NULL,q_9 = NULL;
          t = SSLgetAnnotations(g_38);
          x_17 = t;
          t = h_38;
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("in-type", 0, ATtrue)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, h_38, i_38);
          q_9 = t;
          t = SSLsetAnnotations(q_9, x_17);
          if(match_cons(t, sym__2))
            {
              ATerm a_16 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) a_16) != ATmakeSymbol("in-type", 0, ATtrue)))
                _fail(t);
              w_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSL_explode_term(w_17);
          if(match_cons(t, sym__2))
            {
              h_18 = ATgetArgument(t, 0);
              {
                ATerm c_16 = ATgetArgument(t, 1);
                if(((ATgetType(c_16) == AT_LIST) && !(ATisEmpty(c_16))))
                  {
                    g_18 = ATgetFirst((ATermList) c_16);
                    {
                      ATerm e_16 = (ATerm) ATgetNext((ATermList) c_16);
                      if(((ATgetType(e_16) != AT_LIST) || !(ATisEmpty(e_16))))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = h_18;
          {
            ATerm g_16 = t;
            int h_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = k_0(t);
                LocalPopChoice(h_16);
              }
            else
              {
                t = g_16;
                t = type_failure_0_0(t);
              }
          }
          t = g_18;
        }
      }
  }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL;
  l_38 = t;
  t = term_d_3;
  t = whoami_0_0(t);
  m_38 = t;
  t = term_m_15;
  o_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_16), m_38), term_i_16);
  p_38 = t;
  t = SSL_printnl(o_38, p_38);
  t = term_r_8;
  n_38 = t;
  t = SSL_exit(n_38);
  t = l_38;
  return(t);
}
static ATerm v_5 (ATerm z_36, ATerm a_37, ATerm t)
{
  ATerm q_38 = NULL;
  t = SSL_fputc(z_36, a_37);
  q_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_38);
  return(t);
}
static ATerm w_5 (ATerm h_22, ATerm i_22, ATerm t)
{
  ATerm r_38 = NULL;
  t = SSL_write_term_to_stream_text(h_22, i_22);
  r_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_38);
  return(t);
}
static ATerm y_5 (ATerm w_81 (ATerm), ATerm o_165, ATerm l_22, ATerm t)
{
  ATerm s_38 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_165, term_m_16);
  t = b_6(t);
  s_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_38, l_22);
  t = w_81(t);
  t = fclose_0_0(t);
  t = l_22;
  return(t);
}
static ATerm x_5 (ATerm d_22, ATerm e_22, ATerm t)
{
  ATerm t_38 = NULL;
  t = SSL_write_term_to_stream_baf(d_22, e_22);
  t_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_38);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_16 = ATgetArgument(t, 0);
      if(match_cons(n_16, sym_Stream_1))
        {
          u_18 = ATgetArgument(n_16, 0);
        }
      else
        _fail(t);
      v_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_5(u_18, v_18, t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_16 = ATgetArgument(t, 0);
      if(match_cons(q_16, sym_Stream_1))
        {
          n_19 = ATgetArgument(q_16, 0);
        }
      else
        _fail(t);
      o_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_5(n_19, o_19, t);
  k_19 = t;
  t = term_s_16;
  l_19 = t;
  t = k_19;
  if(match_cons(t, sym_Stream_1))
    {
      m_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_s_16, k_19);
  t = v_5(l_19, m_19, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL,j_40 = NULL,k_40 = NULL,v_9 = NULL,u_9 = NULL;
  y_38 = t;
  if(match_cons(t, sym__2))
    {
      f_39 = ATgetArgument(t, 0);
      g_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_38);
  e_39 = t;
  t = f_39;
  {
    ATerm x_16 = t;
    int y_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm w_2 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((x_38 != NULL) && (x_38 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                x_38 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(w_2, t);
        LocalPopChoice(y_16);
      }
    else
      {
        t = x_16;
        t = term_z_16;
        x_38 = t;
      }
  }
  h_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_39, g_39);
  u_9 = t;
  t = SSLsetAnnotations(u_9, e_39);
  t = y_38;
  if(match_cons(t, sym__2))
    {
      a_39 = ATgetArgument(t, 0);
      b_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_38);
  z_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_39, (ATerm) ATmakeAppl(sym__2, not_null(x_38), b_39));
  v_9 = t;
  t = SSLsetAnnotations(v_9, z_38);
  d_39 = t;
  if(match_cons(t, sym__2))
    {
      j_40 = ATgetArgument(t, 0);
      k_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_17 = t;
    int c_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,x_9 = NULL;
        t = SSLgetAnnotations(d_39);
        n_18 = t;
        t = j_40;
        t = fetch_1_0(x_2, t);
        q_18 = t;
        t = k_40;
        if(match_cons(t, sym__2))
          {
            s_18 = ATgetArgument(t, 0);
            t_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_5(f_3, s_18, t_18, t);
        r_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_18, r_18);
        x_9 = t;
        t = SSLsetAnnotations(x_9, n_18);
        LocalPopChoice(c_17);
      }
    else
      {
        t = a_17;
        {
          ATerm c_19 = NULL,f_19 = NULL,g_19 = NULL,i_19 = NULL,c_10 = NULL;
          t = SSLgetAnnotations(d_39);
          c_19 = t;
          t = k_40;
          if(match_cons(t, sym__2))
            {
              g_19 = ATgetArgument(t, 0);
              i_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_5(g_3, g_19, i_19, t);
          f_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_40, f_19);
          c_10 = t;
          t = SSLsetAnnotations(c_10, c_19);
        }
      }
  }
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm m_98 (ATerm), ATerm t)
{
  ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL;
  r_40 = t;
  t = dtime_0_0(t);
  t = r_40;
  t = m_98(t);
  q_40 = t;
  t = dtime_0_0(t);
  n_40 = t;
  t = q_40;
  if(match_cons(t, sym__2))
    {
      o_40 = ATgetArgument(t, 0);
      p_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_40), (ATerm) ATmakeAppl(sym_Runtime_1, n_40)), p_40);
  return(t);
}
static ATerm g_41 (ATerm z_40, ATerm t)
{
  t = SSL_fclose(z_40);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_41 = NULL,e_41 = NULL;
  e_41 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_41 = ATgetArgument(t, 0);
      {
        ATerm d_17 = t;
        int e_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_41);
            LocalPopChoice(e_17);
          }
        else
          {
            t = d_17;
            t = g_41(e_41, t);
          }
      }
    }
  else
    {
      t = g_41(e_41, t);
    }
  return(t);
}
static ATerm z_5 (ATerm j_22, ATerm t)
{
  t = SSL_read_term_from_stream(j_22);
  return(t);
}
static ATerm a_6 (ATerm b_37, ATerm c_37, ATerm t)
{
  ATerm h_41 = NULL;
  t = SSL_fopen(b_37, c_37);
  h_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_41);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_41 = NULL;
  t = SSL_stdin_stream();
  i_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_41);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_41 = NULL;
  t = SSL_stdout_stream();
  j_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_41);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_41 = NULL;
  t = SSL_stderr_stream();
  k_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_41);
  return(t);
}
static ATerm r_42 (ATerm q_41, ATerm t)
{
  ATerm r_41 = NULL;
  t = SSL_explode_term(q_41);
  if(match_cons(t, sym__2))
    {
      ATerm h_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_17 = ATgetArgument(t, 1);
        if(((ATgetType(i_17) == AT_LIST) && !(ATisEmpty(i_17))))
          {
            r_41 = ATgetFirst((ATermList) i_17);
            {
              ATerm j_17 = (ATerm) ATgetNext((ATermList) i_17);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_41;
  if(match_cons(t, sym_stderr_0))
    {
      t = r_41;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = r_41;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_41;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm s_42 (ATerm u_41, ATerm v_41, ATerm w_41, ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL,c_42 = NULL,w_11 = NULL;
  t = SSLgetAnnotations(w_41);
  z_41 = t;
  t = u_41;
  if(match_cons(t, sym_Path_1))
    {
      c_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_42, v_41);
  w_11 = t;
  t = SSLsetAnnotations(w_11, z_41);
  if(match_cons(t, sym__2))
    {
      x_41 = ATgetArgument(t, 0);
      y_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_6(x_41, y_41, t);
  return(t);
}
static ATerm t_42 (ATerm e_42, ATerm f_42, ATerm g_42, ATerm t)
{
  ATerm h_42 = NULL,i_42 = NULL,j_42 = NULL,m_42 = NULL,c_12 = NULL;
  t = SSLgetAnnotations(g_42);
  j_42 = t;
  t = SSL_is_string(e_42);
  m_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_42, f_42);
  c_12 = t;
  t = SSLsetAnnotations(c_12, j_42);
  if(match_cons(t, sym__2))
    {
      h_42 = ATgetArgument(t, 0);
      i_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_6(h_42, i_42, t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL;
  o_42 = t;
  if(match_cons(t, sym__2))
    {
      p_42 = ATgetArgument(t, 0);
      q_42 = ATgetArgument(t, 1);
      {
        ATerm k_17 = t;
        int l_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_42(o_42, t);
            LocalPopChoice(l_17);
          }
        else
          {
            t = k_17;
            {
              ATerm p_17 = t;
              int r_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_42(p_42, q_42, o_42, t);
                  LocalPopChoice(r_17);
                }
              else
                {
                  t = p_17;
                  t = t_42(p_42, q_42, o_42, t);
                }
            }
          }
      }
    }
  else
    {
      t = r_42(o_42, t);
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_s_17;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL;
  ATerm t_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_42 = NULL;
      x_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_42, term_v_17);
      t = b_6(t);
      LocalPopChoice(u_17);
    }
  else
    {
      t = t_17;
      t = debug_1_0(h_3, t);
      _fail(t);
    }
  v_42 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_5(w_42, t);
  u_42 = t;
  t = v_42;
  t = fclose_0_0(t);
  t = u_42;
  return(t);
}
ATerm fetch_1_0 (ATerm p_82 (ATerm), ATerm t)
{
  static ATerm v_43 (ATerm t)
  {
    ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL;
    s_43 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_43 = ATgetFirst((ATermList) t);
        u_43 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm y_17 = t;
      int z_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_20 = NULL,p_20 = NULL,w_14 = NULL;
          t = SSLgetAnnotations(s_43);
          l_20 = t;
          t = t_43;
          t = p_82(t);
          p_20 = t;
          t = (ATerm) ATinsert(CheckATermList(u_43), p_20);
          w_14 = t;
          t = SSLsetAnnotations(w_14, l_20);
          LocalPopChoice(z_17);
        }
      else
        {
          t = y_17;
          {
            ATerm d_21 = NULL,g_21 = NULL,x_14 = NULL;
            t = SSLgetAnnotations(s_43);
            d_21 = t;
            t = u_43;
            t = v_43(t);
            g_21 = t;
            t = (ATerm) ATinsert(CheckATermList(g_21), t_43);
            x_14 = t;
            t = SSLsetAnnotations(x_14, d_21);
          }
        }
    }
    return(t);
  }
  t = v_43(t);
  return(t);
}
static ATerm u_5 (ATerm s_35, ATerm t_35, ATerm t)
{
  t = SSL_strcat(s_35, t_35);
  return(t);
}
ATerm debug_1_0 (ATerm u_81 (ATerm), ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL;
  y_43 = t;
  t = u_81(t);
  z_43 = t;
  t = term_m_15;
  a_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_43), z_43);
  b_44 = t;
  t = SSL_printnl(a_44, b_44);
  t = y_43;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm a_18 = t;
  int c_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(c_18);
    }
  else
    {
      t = a_18;
    }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_d_18;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm e_18 = t;
  int f_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_44 = NULL;
      i_44 = t;
      t = SSL_is_string(i_44);
      LocalPopChoice(f_18);
    }
  else
    {
      t = e_18;
      {
        ATerm i_18 = t;
        int j_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(k_3, t);
            LocalPopChoice(j_18);
          }
        else
          {
            t = i_18;
            {
              ATerm o_44 = NULL,p_44 = NULL,q_44 = NULL;
              o_44 = t;
              if(match_cons(t, sym_Path_1))
                {
                  p_44 = ATgetArgument(t, 0);
                  t = p_44;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      p_44 = ATgetArgument(t, 0);
                      t = p_44;
                      {
                        ATerm k_18 = t;
                        int l_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(l_18);
                          }
                        else
                          {
                            t = k_18;
                            t = debug_1_0(n_3, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm u_44 = NULL,v_44 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          p_44 = ATgetArgument(t, 0);
                          q_44 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = p_44;
                      t = eval_config_0_0(t);
                      u_44 = t;
                      t = q_44;
                      t = eval_config_0_0(t);
                      v_44 = t;
                      t = (ATerm) ATmakeAppl(sym__2, u_44, v_44);
                      t = u_5(u_44, v_44, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL;
  z_44 = t;
  t = term_m_18;
  a_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_18, z_44);
  t = f_6(a_45, z_44, t);
  {
    ATerm o_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_45 = NULL,c_45 = NULL;
        t = eval_config_0_0(t);
        b_45 = t;
        t = term_m_18;
        c_45 = t;
        t = SSL_table_put(c_45, z_44, b_45);
        t = b_45;
        LocalPopChoice(p_18);
      }
    else
      {
        t = o_18;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm v_96 (ATerm), ATerm t)
{
  ATerm g_45 = NULL;
  g_45 = t;
  {
    ATerm w_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_45 = NULL;
        t = term_a_19;
        t = get_config_0_0(t);
        i_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_45, term_b_19);
        t = geq_0_0(t);
        t = g_45;
        t = v_96(t);
        LocalPopChoice(x_18);
      }
    else
      {
        t = w_18;
        t = g_45;
      }
  }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm l_45 = NULL;
  l_45 = t;
  if(match_string(t, "-k"))
    {
      t = l_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = l_45;
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm m_45 = NULL,n_45 = NULL,o_45 = NULL;
  m_45 = t;
  t = SSL_string_to_int(m_45);
  n_45 = t;
  t = term_d_19;
  o_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_19, n_45);
  t = h_6(o_45, n_45, t);
  t = m_45;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_e_19;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_3, s_3, t_3, t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm q_45 = NULL;
  q_45 = t;
  if(match_string(t, "-S"))
    {
      t = q_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = q_45;
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm r_45 = NULL,s_45 = NULL;
  t = term_a_19;
  r_45 = t;
  t = term_j_19;
  s_45 = t;
  t = term_p_19;
  t = h_6(r_45, s_45, t);
  t = term_q_19;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_r_19;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL,x_45 = NULL;
  t_45 = t;
  t = SSL_string_to_int(t_45);
  u_45 = t;
  t = term_a_19;
  x_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_19, u_45);
  t = h_6(x_45, u_45, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, t_45);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_s_19;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm y_45 = NULL,z_45 = NULL;
  t = term_t_19;
  y_45 = t;
  t = term_d_3;
  z_45 = t;
  t = term_u_19;
  t = h_6(y_45, z_45, t);
  t = term_v_19;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_x_19;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_3, v_3, w_3, t);
      LocalPopChoice(z_19);
    }
  else
    {
      t = y_19;
      {
        ATerm a_20 = t;
        int b_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_4, c_4, g_4, t);
            LocalPopChoice(b_20);
          }
        else
          {
            t = a_20;
            t = Option_3_0(h_4, j_4, l_4, t);
          }
      }
    }
  return(t);
}
static ATerm h_6 (ATerm v_45, ATerm w_45, ATerm t)
{
  ATerm a_46 = NULL;
  t = term_m_18;
  a_46 = t;
  t = SSL_table_put(a_46, v_45, w_45);
  t = (ATerm) ATmakeAppl(sym__3, term_m_18, v_45, w_45);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm c_46 = NULL;
  c_46 = t;
  if(match_string(t, "-o"))
    {
      t = c_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = c_46;
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm d_46 = NULL,j_46 = NULL;
  d_46 = t;
  t = term_c_20;
  j_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_20, d_46);
  t = h_6(j_46, d_46, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, d_46);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_d_20;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_4, p_4, q_4, t);
  return(t);
}
static ATerm c_6 (ATerm v_50, ATerm w_50, ATerm u_50, ATerm t)
{
  ATerm l_46 = NULL,m_46 = NULL,n_46 = NULL;
  l_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_50, w_50);
  {
    ATerm e_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_20 = ATgetArgument(t, 0);
            ATerm h_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_50, w_50);
        t = f_6(v_50, w_50, t);
        LocalPopChoice(f_20);
      }
    else
      {
        t = e_20;
        t = (ATerm) ATempty;
      }
  }
  m_46 = t;
  t = (ATerm) ATinsert(CheckATermList(m_46), u_50);
  n_46 = t;
  t = SSL_table_put(v_50, w_50, n_46);
  t = l_46;
  return(t);
}
ATerm ArgOption_3_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_46 = NULL,z_46 = NULL,a_47 = NULL;
      t = term_d_3;
      t = i_0(t);
      y_46 = t;
      t = term_p_6;
      z_46 = t;
      t = term_r_7;
      a_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_6, term_r_7, y_46);
      t = c_6(z_46, a_47, y_46, t);
      _fail(t);
    }
  else
    {
      ATerm e_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_46 = ATgetFirst((ATermList) t);
          v_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_46;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_46 = ATgetFirst((ATermList) t);
          x_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_46;
      t = e_0(t);
      t = w_46;
      t = g_0(t);
      e_47 = t;
      t = (ATerm) ATinsert(CheckATermList(x_46), e_47);
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm g_47 = NULL;
  g_47 = t;
  if(match_string(t, "-i"))
    {
      t = g_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_47;
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm h_47 = NULL,i_47 = NULL;
  h_47 = t;
  t = term_i_20;
  i_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_20, h_47);
  t = h_6(i_47, h_47, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_47);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_j_20;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_4, t_4, u_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_3;
  t = whoami_0_0(t);
  j_47 = t;
  t = term_m_15;
  l_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_20), j_47);
  m_47 = t;
  t = SSL_printnl(l_47, m_47);
  t = term_r_8;
  k_47 = t;
  t = SSL_exit(k_47);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_m_20;
  t = get_config_0_0(t);
  return(t);
}
static ATerm d_6 (ATerm u_39, ATerm v_39, ATerm t)
{
  ATerm n_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(u_39, v_39);
      LocalPopChoice(o_20);
    }
  else
    {
      t = n_20;
      t = SSL_addr(u_39, v_39);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_88 (ATerm), ATerm j_88 (ATerm), ATerm t)
{
  ATerm s_47 = NULL,t_47 = NULL,u_47 = NULL;
  s_47 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_47;
      t = i_88(t);
    }
  else
    {
      ATerm x_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_47 = ATgetFirst((ATermList) t);
          u_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_47;
      t = foldr_2_0(i_88, j_88, t);
      x_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_47, x_47);
      t = j_88(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_j_19;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm b_22 = NULL,c_22 = NULL;
  if(match_cons(t, sym__2))
    {
      b_22 = ATgetArgument(t, 0);
      c_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(b_22, c_22, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_48 = NULL,x_21 = NULL,y_21 = NULL;
  t = times_0_0(t);
  y_21 = t;
  t = SSL_explode_term(y_21);
  if(match_cons(t, sym__2))
    {
      ATerm q_20 = ATgetArgument(t, 0);
      x_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_21;
  t = foldr_2_0(w_4, b_5, t);
  a_48 = t;
  t = SSL_TicksToSeconds(a_48);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_48 = NULL,m_48 = NULL,n_48 = NULL;
  l_48 = t;
  if(match_cons(t, sym__2))
    {
      m_48 = ATgetArgument(t, 0);
      n_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_48;
        if((m_48 != t))
          {
            _fail(t);
          }
        t = l_48;
        LocalPopChoice(s_20);
      }
    else
      {
        t = r_20;
        t = (ATerm) ATmakeAppl(sym__2, m_48, n_48);
        {
          ATerm t_20 = t;
          int u_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_48, n_48);
              LocalPopChoice(u_20);
            }
          else
            {
              t = t_20;
              t = SSL_gtr(m_48, n_48);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, m_48, n_48);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm u_96 (ATerm), ATerm t)
{
  ATerm r_48 = NULL;
  r_48 = t;
  {
    ATerm v_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_48 = NULL;
        t = term_a_19;
        t = get_config_0_0(t);
        t_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_48, term_r_8);
        t = geq_0_0(t);
        t = r_48;
        t = u_96(t);
        LocalPopChoice(w_20);
      }
    else
      {
        t = v_20;
        t = r_48;
      }
  }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL,y_48 = NULL,z_48 = NULL;
  t = run_time_0_0(t);
  v_48 = t;
  t = term_d_3;
  t = whoami_0_0(t);
  w_48 = t;
  t = term_m_15;
  y_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_20), v_48), term_x_20), w_48);
  z_48 = t;
  t = SSL_printnl(y_48, z_48);
  t = (ATerm) ATmakeAppl(sym__2, term_m_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_20), v_48), term_x_20), w_48));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm a_49 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_19;
  a_49 = t;
  t = SSL_exit(a_49);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm i_49 = NULL,j_49 = NULL;
  j_49 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = j_49;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          i_49 = ATgetArgument(t, 0);
          {
            ATerm c_23 = NULL,a_15 = NULL;
            t = SSLgetAnnotations(j_49);
            c_23 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, i_49);
            a_15 = t;
            t = SSLsetAnnotations(a_15, c_23);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = j_49;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm k_99 (ATerm), ATerm t)
{
  ATerm z_20 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_21;
      t = get_config_0_0(t);
      LocalPopChoice(c_21);
    }
  else
    {
      t = z_20;
      t = fetch_1_0(d_5, t);
    }
  t = k_99(t);
  return(t);
}
ATerm map_1_0 (ATerm f_82 (ATerm), ATerm t)
{
  static ATerm z_49 (ATerm t)
  {
    ATerm w_49 = NULL,x_49 = NULL,y_49 = NULL;
    w_49 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_49;
      }
    else
      {
        ATerm n_23 = NULL,t_23 = NULL,a_24 = NULL,c_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_49 = ATgetFirst((ATermList) t);
            y_49 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_49);
        n_23 = t;
        t = x_49;
        t = f_82(t);
        t_23 = t;
        t = y_49;
        t = z_49(t);
        a_24 = t;
        t = (ATerm) ATinsert(CheckATermList(a_24), t_23);
        c_15 = t;
        t = SSLsetAnnotations(c_15, n_23);
      }
    return(t);
  }
  t = z_49(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm c_50 = NULL,i_50 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_50 = ATgetFirst((ATermList) t);
      i_50 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_50 = NULL,n_50 = NULL;
        static ATerm g_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(m_50)), not_null(n_50));
          return(t);
        }
        t = i_50;
        t = d_0(t);
        if(((m_50 != NULL) && (m_50 != t)))
          _fail(t);
        else
          m_50 = t;
        t = c_50;
        t = c_0(t);
        if(((n_50 != NULL) && (n_50 != t)))
          _fail(t);
        else
          n_50 = t;
        t = i_50;
        t = reverse_acc_2_0(c_0, g_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_3;
      t = d_0(t);
    }
  return(t);
}
static ATerm f_6 (ATerm m_52, ATerm n_52, ATerm t)
{
  t = SSL_table_get(m_52, n_52);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm r_50 = NULL,t_50 = NULL,x_50 = NULL,e_15 = NULL;
  x_50 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_50);
  r_50 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_50);
  e_15 = t;
  t = SSLsetAnnotations(e_15, r_50);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm z_50 = NULL;
  z_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_50), term_f_21);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_50 = NULL,q_50 = NULL;
  ATerm i_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_20;
      t = get_config_0_0(t);
      LocalPopChoice(j_21);
    }
  else
    {
      t = i_21;
      t = fetch_1_0(h_5, t);
    }
  t = term_k_21;
  t = echo_0_0(t);
  t = term_p_6;
  p_50 = t;
  t = term_r_7;
  q_50 = t;
  t = term_l_21;
  t = f_6(p_50, q_50, t);
  t = reverse_acc_2_0(_id, i_5, t);
  t = map_1_0(j_5, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL;
  b_51 = t;
  {
    ATerm m_21 = t;
    int n_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_51;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm o_21 = ATgetFirst((ATermList) t);
                ATerm p_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_51;
          }
        LocalPopChoice(n_21);
      }
    else
      {
        t = m_21;
        t = (ATerm) ATinsert(ATempty, b_51);
      }
  }
  c_51 = t;
  t = term_z_16;
  d_51 = t;
  t = SSL_printnl(d_51, c_51);
  t = b_51;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_m_20;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm h_51 = NULL,i_51 = NULL;
  t = term_q_21;
  h_51 = t;
  t = term_d_3;
  i_51 = t;
  t = term_r_21;
  t = h_6(h_51, i_51, t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = term_s_21;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm j_51 = NULL,k_51 = NULL,l_51 = NULL,m_51 = NULL;
  t = term_q_21;
  l_51 = t;
  t = term_d_3;
  m_51 = t;
  t = term_r_21;
  t = h_6(l_51, m_51, t);
  t = term_t_21;
  j_51 = t;
  t = term_d_3;
  k_51 = t;
  t = term_u_21;
  t = h_6(j_51, k_51, t);
  t = term_v_21;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_w_21;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_21 = t;
  int a_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_5, l_5, m_5, t);
      LocalPopChoice(a_22);
    }
  else
    {
      t = z_21;
      t = Option_3_0(n_5, r_5, s_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_59 (ATerm), ATerm o_59 (ATerm), ATerm t)
{
  ATerm n_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL,r_51 = NULL,s_51 = NULL,g_15 = NULL;
  s_51 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_51 = ATgetFirst((ATermList) t);
      p_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_51);
  n_51 = t;
  t = o_51;
  t = n_59(t);
  q_51 = t;
  t = p_51;
  t = o_59(t);
  r_51 = t;
  t = (ATerm) ATinsert(CheckATermList(r_51), q_51);
  g_15 = t;
  t = SSLsetAnnotations(g_15, n_51);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_101 (ATerm), ATerm t)
{
  ATerm x_51 = NULL,y_51 = NULL,z_51 = NULL,a_52 = NULL,c_52 = NULL,d_52 = NULL,k_15 = NULL;
  x_51 = t;
  {
    ATerm f_22 = t;
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_22;
        t = n_101(t);
        LocalPopChoice(k_22);
      }
    else
      {
        t = f_22;
      }
  }
  t = x_51;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_51 = ATgetFirst((ATermList) t);
      a_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_51);
  y_51 = t;
  t = term_m_20;
  d_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_20, z_51);
  t = h_6(d_52, z_51, t);
  t = a_52;
  {
    static ATerm p_52 (ATerm t)
    {
      ATerm n_22 = t;
      int o_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_22 = t;
          int q_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_52 = NULL;
              g_52 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = g_52;
              LocalPopChoice(q_22);
            }
          else
            {
              t = p_22;
              t = n_101(t);
              t = Cons_2_0(_id, p_52, t);
            }
          LocalPopChoice(o_22);
        }
      else
        {
          t = n_22;
          {
            ATerm j_52 = NULL,k_52 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_52 = ATgetFirst((ATermList) t);
                k_52 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(k_52), (ATerm) ATmakeAppl(sym_Undefined_1, j_52));
          }
        }
      return(t);
    }
    t = p_52(t);
  }
  c_52 = t;
  t = (ATerm) ATinsert(CheckATermList(c_52), (ATerm) ATmakeAppl(sym_Program_1, z_51));
  k_15 = t;
  t = SSLsetAnnotations(k_15, y_51);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm b_53 = NULL;
  b_53 = t;
  if(match_string(t, "--help"))
    {
      t = b_53;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = b_53;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = b_53;
        }
    }
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm c_53 = NULL,d_53 = NULL;
  t = term_e_21;
  c_53 = t;
  t = term_d_3;
  d_53 = t;
  t = term_r_22;
  t = h_6(c_53, d_53, t);
  t = term_s_22;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_t_22;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm m_101 (ATerm), ATerm t)
{
  ATerm u_52 = NULL,v_52 = NULL,w_52 = NULL,x_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL;
  w_52 = t;
  t = term_p_6;
  y_52 = t;
  t = term_r_7;
  z_52 = t;
  t = (ATerm) ATempty;
  a_53 = t;
  t = SSL_table_put(y_52, z_52, a_53);
  t = w_52;
  {
    static ATerm e_6 (ATerm t)
    {
      ATerm u_22 = t;
      int v_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_101(t);
          LocalPopChoice(v_22);
        }
      else
        {
          t = u_22;
          {
            ATerm w_22 = t;
            int x_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(g_6, i_6, j_6, t);
                LocalPopChoice(x_22);
              }
            else
              {
                t = w_22;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_6, t);
  }
  {
    ATerm y_22 = t;
    int z_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_53 = NULL;
        k_53 = t;
        {
          ATerm a_23 = t;
          int b_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_24 = NULL;
              t = k_53;
              {
                ATerm d_23 = t;
                int e_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_e_21;
                    t = get_config_0_0(t);
                    LocalPopChoice(e_23);
                  }
                else
                  {
                    t = d_23;
                    t = fetch_1_0(k_6, t);
                  }
              }
              t = k_53;
              t = default_system_usage_0_0(t);
              t = term_j_19;
              r_24 = t;
              t = SSL_exit(r_24);
              LocalPopChoice(b_23);
            }
          else
            {
              t = a_23;
              {
                ATerm z_24 = NULL;
                t = term_q_21;
                t = get_config_0_0(t);
                t = k_53;
                t = default_system_about_0_0(t);
                t = term_j_19;
                z_24 = t;
                t = SSL_exit(z_24);
              }
            }
        }
        LocalPopChoice(z_22);
      }
    else
      {
        t = y_22;
        {
          ATerm f_23 = t;
          int g_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_53 = NULL,m_53 = NULL,n_53 = NULL;
              static ATerm l_6 (ATerm t)
              {
                ATerm o_53 = NULL,p_53 = NULL,q_53 = NULL,d_16 = NULL;
                q_53 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    p_53 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(q_53);
                o_53 = t;
                t = p_53;
                if(((u_52 != NULL) && (u_52 != t)))
                  _fail(t);
                else
                  u_52 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, p_53);
                d_16 = t;
                t = SSLsetAnnotations(d_16, o_53);
                return(t);
              }
              t = fetch_1_0(l_6, t);
              t = term_m_15;
              m_53 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_52)), term_h_23);
              n_53 = t;
              t = SSL_printnl(m_53, n_53);
              t = (ATerm) ATmakeAppl(sym__2, term_m_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_52)), term_h_23));
              t = default_system_usage_0_0(t);
              t = term_r_8;
              l_53 = t;
              t = SSL_exit(l_53);
              LocalPopChoice(g_23);
            }
          else
            {
              t = f_23;
            }
        }
      }
  }
  v_52 = t;
  t = term_p_6;
  x_52 = t;
  t = SSL_table_destroy(x_52);
  t = v_52;
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_99 (ATerm), ATerm n_99 (ATerm), ATerm o_99 (ATerm), ATerm p_99 (ATerm), ATerm t)
{
  ATerm v_53 = NULL,w_53 = NULL,x_53 = NULL,y_53 = NULL;
  t = parse_options_1_0(m_99, t);
  v_53 = t;
  t = term_b_15;
  y_53 = t;
  t = SSL_table_create(y_53);
  t = term_b_15;
  w_53 = t;
  t = term_d_15;
  x_53 = t;
  t = SSL_table_put(w_53, x_53, v_53);
  t = v_53;
  t = o_99(t);
  {
    ATerm i_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_99, t);
        LocalPopChoice(j_23);
      }
    else
      {
        t = i_23;
        {
          ATerm k_23 = t;
          int l_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_99(t);
              t = report_success_0_0(t);
              LocalPopChoice(l_23);
            }
          else
            {
              t = k_23;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = if_verbose2_1_0(u_6, t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm z_53 = NULL,a_54 = NULL;
  t = term_m_23;
  z_53 = t;
  t = term_d_3;
  a_54 = t;
  t = term_r_23;
  t = h_6(z_53, a_54, t);
  t = term_s_23;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_y_23;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm b_54 = NULL,c_54 = NULL,d_54 = NULL,e_54 = NULL;
  b_54 = t;
  t = term_m_20;
  t = get_config_0_0(t);
  c_54 = t;
  t = term_m_15;
  d_54 = t;
  t = (ATerm) ATinsert(ATempty, c_54);
  e_54 = t;
  t = SSL_printnl(d_54, e_54);
  t = b_54;
  return(t);
}
ATerm iowrap_3_0 (ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm x_98 (ATerm), ATerm t)
{
  static ATerm n_6 (ATerm t)
  {
    ATerm z_23 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_98(t);
        LocalPopChoice(b_24);
      }
    else
      {
        t = z_23;
        {
          ATerm c_24 = t;
          int d_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(d_24);
            }
          else
            {
              t = c_24;
              {
                ATerm f_24 = t;
                int g_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(g_24);
                  }
                else
                  {
                    t = f_24;
                    {
                      ATerm h_24 = t;
                      int i_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(r_6, s_6, t_6, t);
                          LocalPopChoice(i_24);
                        }
                      else
                        {
                          t = h_24;
                          {
                            ATerm j_24 = t;
                            int k_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(k_24);
                              }
                            else
                              {
                                t = j_24;
                                t = keep_option_0_0(t);
                              }
                          }
                        }
                    }
                  }
              }
            }
        }
      }
    return(t);
  }
  static ATerm q_6 (ATerm t)
  {
    ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL;
    g_54 = t;
    {
      ATerm l_24 = t;
      int s_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm w_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((f_54 != NULL) && (f_54 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  f_54 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(w_6, t);
          LocalPopChoice(s_24);
        }
      else
        {
          t = l_24;
          t = term_t_24;
          f_54 = t;
        }
    }
    t = not_null(f_54);
    t = ReadFromFile_0_0(t);
    h_54 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_54, h_54);
    t = apply_strategy_1_0(v_98, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(n_6, x_98, o_6, q_6, t);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--strict", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_l_15;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_u_24;
  return(t);
}
ATerm io_idwrap_3_0 (ATerm q_105 (ATerm), ATerm r_105 (ATerm), ATerm s_105 (ATerm), ATerm t)
{
  static ATerm x_6 (ATerm t)
  {
    ATerm u_54 = NULL,v_54 = NULL,w_54 = NULL,m_54 = NULL,n_54 = NULL,o_54 = NULL;
    o_54 = t;
    if(match_cons(t, sym__2))
      {
        m_54 = ATgetArgument(t, 0);
        n_54 = ATgetArgument(t, 1);
        {
          ATerm v_24 = t;
          int w_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_54 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, term_y_24, n_54);
              t = q_105(t);
              r_54 = t;
              t = (ATerm) ATmakeAppl(sym__2, m_54, r_54);
              LocalPopChoice(w_24);
            }
          else
            {
              t = v_24;
              t = o_54;
            }
        }
      }
    else
      {
        t = o_54;
      }
    t = r_105(t);
    w_54 = t;
    if(match_cons(t, sym__2))
      {
        u_54 = ATgetArgument(t, 0);
        v_54 = ATgetArgument(t, 1);
        {
          ATerm a_25 = t;
          int c_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_54 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, term_e_25, v_54);
              t = q_105(t);
              z_54 = t;
              t = (ATerm) ATmakeAppl(sym__2, u_54, z_54);
              LocalPopChoice(c_25);
            }
          else
            {
              t = a_25;
              t = w_54;
            }
        }
      }
    else
      {
        t = w_54;
      }
    return(t);
  }
  static ATerm y_6 (ATerm t)
  {
    ATerm f_25 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_105(t);
        LocalPopChoice(g_25);
      }
    else
      {
        t = f_25;
        t = Option_3_0(a_7, b_7, c_7, t);
      }
    return(t);
  }
  t = iowrap_3_0(x_6, y_6, default_usage_0_0, t);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = InOutId_2_0(h_7, i_7, t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm c_55 = NULL,d_55 = NULL,e_55 = NULL,f_55 = NULL,g_55 = NULL,l_16 = NULL;
  g_55 = t;
  if(match_cons(t, sym__2))
    {
      d_55 = ATgetArgument(t, 0);
      e_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_55);
  c_55 = t;
  t = e_55;
  t = ppgenerate_0_0(t);
  f_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_55, f_55);
  l_16 = t;
  t = SSLsetAnnotations(l_16, c_55);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = Option_3_0(j_7, k_7, p_7, t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("\"sdf-2.1\"", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = term_h_25;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-v", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_j_25;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_k_25;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_idwrap_3_0(d_7, f_7, g_7, t);
  return(t);
}
