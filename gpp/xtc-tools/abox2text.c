#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_WaitStatus_3;
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_FILE_1;
Symbol sym_TempFiles_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
static void init_module_constructors (void)
{
  sym_Tool_1 = ATmakeSymbol("Tool", 1, ATfalse);
  ATprotectSymbol(sym_Tool_1);
  sym_Repository_0 = ATmakeSymbol("Repository", 0, ATfalse);
  ATprotectSymbol(sym_Repository_0);
  sym_Import_0 = ATmakeSymbol("Import", 0, ATfalse);
  ATprotectSymbol(sym_Import_0);
  sym_Imported_1 = ATmakeSymbol("Imported", 1, ATfalse);
  ATprotectSymbol(sym_Imported_1);
  sym_XTC_0 = ATmakeSymbol("XTC", 0, ATfalse);
  ATprotectSymbol(sym_XTC_0);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
  ATprotectSymbol(sym_F__OK_0);
  sym_R__OK_0 = ATmakeSymbol("R_OK", 0, ATfalse);
  ATprotectSymbol(sym_R__OK_0);
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
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
  sym_Verbose_1 = ATmakeSymbol("Verbose", 1, ATfalse);
  ATprotectSymbol(sym_Verbose_1);
  sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
  ATprotectSymbol(sym_Version_0);
  sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
  ATprotectSymbol(sym_Input_1);
  sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
  ATprotectSymbol(sym_Output_1);
  sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
  ATprotectSymbol(sym_Statistics_0);
  sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
  ATprotectSymbol(sym_Help_0);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
}
ATerm term_x_30;
ATerm term_v_30;
ATerm term_p_30;
ATerm term_t_29;
ATerm term_q_29;
ATerm term_o_29;
ATerm term_h_29;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_n_28;
ATerm term_g_28;
ATerm term_s_27;
ATerm term_m_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_v_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_v_24;
ATerm term_t_24;
ATerm term_r_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_n_23;
ATerm term_h_23;
ATerm term_b_23;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_t_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_h_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_z_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_t_20;
ATerm term_e_20;
ATerm term_u_19;
ATerm term_q_19;
ATerm term_l_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_c_19;
ATerm term_y_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_p_18;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_t_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_x_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_j_14;
ATerm term_h_14;
ATerm term_b_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_w_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_k_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_o_10;
ATerm term_k_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_w_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_e_8;
ATerm term_a_8;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_u_7;
ATerm term_p_7;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_8, term_u_7, term_v_8);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_8, term_y_8, term_z_8);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_9, term_d_9, term_e_9);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_9, term_j_9, term_k_9);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_9, term_p_9, term_q_9);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_9, term_t_9, term_u_9);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_9, term_z_9, term_c_10);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_10, term_f_10, term_g_10);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_10, term_k_10, term_o_10);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_10, term_s_10, term_t_10);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_10, term_w_10, term_y_10);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_11, term_c_11, term_d_11);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_11, term_h_11, term_i_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_11, term_m_11, term_n_11);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_11, term_r_11, term_u_11);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_12, term_d_12, term_e_12);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_12, term_k_12, term_q_12);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_12, term_t_12, term_u_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_12, term_a_13, term_b_13);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_13, term_h_13, term_j_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_13, term_o_13, term_p_13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_13, term_w_13, term_x_13);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_14, term_j_14, term_q_14);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_14, term_a_15, term_b_15);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_15, term_k_15, term_l_15);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_15, term_r_15, term_t_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_16, term_d_16, term_e_16);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_16, term_h_16, term_i_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym__2, term_q_19, term_w_20);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym__2, term_q_19, term_u_19);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-text", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym__2, term_y_21, term_x_21);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym__2, term_p_7, term_e_24);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_24);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym__2, term_k_24, term_b_22);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym__2, term_s_23, term_w_23);
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym__2, term_q_28, term_b_22);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym__2, term_t_28, term_b_22);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym__2, term_d_27, term_b_22);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm at_end_1_0 (ATerm b_70 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm w_2 (ATerm z_1, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm x_5 (ATerm i_33, ATerm j_33, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm pass_width_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm y_5 (ATerm n_17, ATerm o_17, ATerm t);
static ATerm z_5 (ATerm v_64 (ATerm), ATerm q_166, ATerm v_17, ATerm t);
static ATerm m_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm q_82 (ATerm), ATerm r_82 (ATerm), ATerm t);
static ATerm a_6 (ATerm f_14, ATerm g_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm x_69 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm k_63 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm t_80 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm s_80 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm u_80 (ATerm), ATerm t);
static ATerm d_6 (ATerm s_73 (ATerm), ATerm t_73 (ATerm), ATerm q_24, ATerm p_24, ATerm t);
static ATerm e_6 (ATerm p_73 (ATerm), ATerm m_24, ATerm l_24, ATerm t);
static ATerm a_1 (ATerm t);
static ATerm f_6 (ATerm e_36, ATerm f_36, ATerm g_36, ATerm t);
static ATerm g_6 (ATerm w_80 (ATerm), ATerm o_36, ATerm n_36, ATerm t);
static ATerm k_6 (ATerm p_38, ATerm q_38, ATerm t);
static ATerm t_11 (ATerm g_11, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm h_6 (ATerm t_17, ATerm t);
static ATerm i_6 (ATerm y_38, ATerm z_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm y_13 (ATerm f_12, ATerm t);
static ATerm z_13 (ATerm j_12, ATerm l_12, ATerm m_12, ATerm t);
static ATerm a_14 (ATerm x_12, ATerm y_12, ATerm c_13, ATerm t);
static ATerm j_6 (ATerm t);
static ATerm d_1 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm w_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm h_77 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm q_67 (ATerm), ATerm r_67 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm z_18 (ATerm c_18, ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm r_83 (ATerm), ATerm t);
static ATerm l_6 (ATerm l_79 (ATerm), ATerm q_34, ATerm o_34, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm v_2 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm abox2text_0_0 (ATerm t);
static ATerm m_6 (ATerm n_14, ATerm o_14, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm n_6 (ATerm m_35, ATerm n_35, ATerm t);
ATerm end_scope_1_0 (ATerm i_79 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm h_79 (ATerm), ATerm t);
static ATerm g_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm d_83 (ATerm), ATerm t);
static ATerm v_3 (ATerm t);
ATerm xtc_io_1_0 (ATerm e_83 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm abox2text_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm o_6 (ATerm c_33, ATerm d_33, ATerm t);
ATerm foldr_2_0 (ATerm d_76 (ATerm), ATerm e_76 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm p_80 (ATerm), ATerm t);
static ATerm l_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm n_5 (ATerm t);
ATerm need_help_1_0 (ATerm t_84 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm v_69 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm r_6 (ATerm x_31, ATerm y_31, ATerm t);
ATerm debug_1_0 (ATerm t_64 (ATerm), ATerm t);
ATerm map_1_0 (ATerm l_69 (ATerm), ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm w_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm v_6 (ATerm h_37, ATerm i_37, ATerm t);
static ATerm s_6 (ATerm y_36, ATerm z_36, ATerm t);
static ATerm t_6 (ATerm h_35, ATerm i_35, ATerm g_35, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm l_56 (ATerm), ATerm m_56 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm r_86 (ATerm), ATerm t);
static ATerm y_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
ATerm parse_options_1_0 (ATerm q_86 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm v_84 (ATerm), ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm y_84 (ATerm), ATerm t);
static ATerm g_7 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm b_70 (ATerm), ATerm t)
{
  static ATerm u_1 (ATerm t)
  {
    ATerm p_1 = NULL,s_1 = NULL,t_1 = NULL;
    t_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_1 = ATgetFirst((ATermList) t);
        s_1 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm u_0 = NULL,x_0 = NULL,z_0 = NULL;
          t = SSLgetAnnotations(t_1);
          u_0 = t;
          t = s_1;
          t = u_1(t);
          x_0 = t;
          t = (ATerm) ATinsert(CheckATermList(x_0), p_1);
          z_0 = t;
          t = SSLsetAnnotations(z_0, u_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_1;
        t = b_70(t);
      }
    return(t);
  }
  t = u_1(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,j_0 = NULL;
  b_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_0;
    }
  else
    {
      static ATerm a_0 (ATerm t)
      {
        t = not_null(j_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_0 = ATgetFirst((ATermList) t);
          if(((j_0 != NULL) && (j_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            j_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_0;
      t = at_end_1_0(a_0, t);
    }
  return(t);
}
static ATerm w_2 (ATerm z_1, ATerm t)
{
  ATerm e_2 = NULL;
  t = SSL_explode_term(z_1);
  if(match_cons(t, sym__2))
    {
      ATerm t_0 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_0) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      e_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_2;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm o_2 = NULL,s_2 = NULL,t_2 = NULL;
  t_2 = t;
  if(match_cons(t, sym__2))
    {
      o_2 = ATgetArgument(t, 0);
      s_2 = ATgetArgument(t, 1);
      {
        ATerm h_7 = t;
        int i_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm h_0 (ATerm t)
            {
              t = s_2;
              return(t);
            }
            t = o_2;
            t = at_end_1_0(h_0, t);
            LocalPopChoice(i_7);
          }
        else
          {
            t = h_7;
            t = w_2(t_2, t);
          }
      }
    }
  else
    {
      t = w_2(t_2, t);
    }
  return(t);
}
static ATerm x_5 (ATerm i_33, ATerm j_33, ATerm t)
{
  ATerm k_7 = t;
  int n_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(i_33, j_33);
      LocalPopChoice(n_7);
    }
  else
    {
      t = k_7;
      t = SSL_subtr(i_33, j_33);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm x_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL;
  t = term_p_7;
  {
    ATerm r_7 = t;
    int t_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(t_7);
      }
    else
      {
        t = r_7;
        t = term_u_7;
      }
  }
  y_2 = t;
  t = term_u_7;
  a_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_2, term_u_7);
  t = x_5(y_2, a_3, t);
  z_2 = t;
  t = SSL_int_to_string(z_2);
  x_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_2), term_p_7);
  return(t);
}
ATerm pass_width_0_0 (ATerm t)
{
  ATerm v_7 = t;
  int w_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_7;
      t = get_config_0_0(t);
      LocalPopChoice(w_7);
      {
        ATerm b_3 = NULL;
        b_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, b_3), term_x_7);
      }
    }
  else
    {
      t = v_7;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm j_3 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_y_7;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm l_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          j_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_a_8);
      l_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_3, (ATerm) ATinsert(ATempty, term_a_8));
      t = k_6(j_3, l_3, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm y_5 (ATerm n_17, ATerm o_17, ATerm t)
{
  ATerm m_3 = NULL;
  t = SSL_write_term_to_stream_baf(n_17, o_17);
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_3);
  return(t);
}
static ATerm z_5 (ATerm v_64 (ATerm), ATerm q_166, ATerm v_17, ATerm t)
{
  ATerm o_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_166, term_e_8);
  t = j_6(t);
  o_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_3, v_17);
  t = v_64(t);
  t = fclose_0_0(t);
  t = v_17;
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_8 = ATgetArgument(t, 0);
      if(match_cons(f_8, sym_Stream_1))
        {
          s_3 = ATgetArgument(f_8, 0);
        }
      else
        _fail(t);
      t_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_5(s_3, t_3, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm q_82 (ATerm), ATerm r_82 (ATerm), ATerm t)
{
  ATerm p_3 = NULL,r_3 = NULL;
  r_3 = t;
  t = xtc_new_file_0_0(t);
  p_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_3, r_3);
  t = z_5(m_0, p_3, r_3, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, p_3);
  t = xtc_transform_file_2_0(q_82, r_82, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm a_6 (ATerm f_14, ATerm g_14, ATerm t)
{
  t = SSL_execvp(f_14, g_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL,z_4 = NULL;
  v_4 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      w_4 = ATgetArgument(t, 0);
      {
        ATerm n_1 = NULL,o_1 = NULL;
        t = SSL_int_to_string(w_4);
        n_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_8), n_1), term_g_8);
        o_1 = t;
        t = SSL_concat_strings(o_1);
      }
    }
  else
    {
      ATerm f_2 = NULL,g_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          w_4 = ATgetArgument(t, 0);
          x_4 = ATgetArgument(t, 1);
          z_4 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(x_4);
      f_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_4), term_k_8), f_2), term_j_8), w_4);
      g_2 = t;
      t = SSL_concat_strings(g_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm x_69 (ATerm), ATerm t)
{
  ATerm d_5 = NULL;
  static ATerm q_0 (ATerm t)
  {
    t = x_69(t);
    if(((d_5 != NULL) && (d_5 != t)))
      _fail(t);
    else
      d_5 = t;
    return(t);
  }
  t = fetch_1_0(q_0, t);
  t = not_null(d_5);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm e_5 = NULL;
  e_5 = t;
  {
    ATerm l_8 = t;
    int n_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm s_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm r_8 = ATgetArgument(t, 0);
              if((e_5 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm s_8 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_16), term_f_16), term_a_16), term_p_15), term_c_15), term_r_14), term_b_14), term_r_13), term_k_13), term_f_13), term_w_12), term_r_12), term_h_12), term_v_11), term_o_11), term_j_11), term_e_11), term_z_10), term_u_10), term_q_10), term_h_10), term_d_10), term_w_9), term_r_9), term_m_9), term_h_9), term_b_9), term_w_8);
        t = fetch_elem_1_0(s_0, t);
        LocalPopChoice(n_8);
      }
    else
      {
        t = l_8;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, e_5);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm j_5 = NULL,q_6 = NULL;
  j_5 = t;
  {
    ATerm k_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm m_16 = ATgetArgument(t, 0);
            q_6 = ATgetArgument(t, 1);
            {
              ATerm n_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(l_16);
        {
          ATerm o_16 = t;
          int p_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_2 = NULL,q_2 = NULL,r_2 = NULL;
              t = q_6;
              {
                ATerm q_16 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = q_16;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              m_2 = t;
              t = term_r_16;
              q_2 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, m_2), term_s_16);
              r_2 = t;
              t = SSL_printnl(q_2, r_2);
              t = (ATerm) ATmakeAppl(sym__2, term_r_16, (ATerm) ATinsert(ATinsert(ATempty, m_2), term_s_16));
              LocalPopChoice(p_16);
            }
          else
            {
              t = o_16;
              t = j_5;
            }
        }
      }
    else
      {
        t = k_16;
        t = j_5;
      }
  }
  t = j_5;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm k_63 (ATerm), ATerm t)
{
  ATerm d_7 = NULL,f_7 = NULL;
  f_7 = t;
  t = fork_0_0(t);
  d_7 = t;
  {
    ATerm t_16 = t;
    int u_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = f_7;
        t = k_63(t);
        LocalPopChoice(u_16);
      }
    else
      {
        t = t_16;
        t = SSL_waitpid(d_7);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm v_16 = ATgetArgument(t, 0);
            if(((ATgetType(v_16) != AT_INT) || (ATgetInt((ATermInt) v_16) != 0)))
              _fail(t);
            {
              ATerm w_16 = ATgetArgument(t, 1);
            }
            {
              ATerm x_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = f_7;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm j_7 = NULL;
  static ATerm v_0 (ATerm t)
  {
    ATerm l_7 = NULL,m_7 = NULL;
    l_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_7), l_7);
    t = s_6(not_null(j_7), l_7, t);
    m_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_7, m_7);
    return(t);
  }
  if(((j_7 != NULL) && (j_7 != t)))
    _fail(t);
  else
    j_7 = t;
  t = SSL_table_keys(j_7);
  t = map_1_0(v_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm t_80 (ATerm), ATerm t)
{
  ATerm q_7 = NULL;
  q_7 = t;
  {
    ATerm y_16 = t;
    int z_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_7 = NULL;
        t = term_p_7;
        t = get_config_0_0(t);
        s_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_7, term_k_15);
        t = geq_0_0(t);
        t = q_7;
        t = t_80(t);
        LocalPopChoice(z_16);
      }
    else
      {
        t = y_16;
        t = q_7;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm s_80 (ATerm), ATerm t)
{
  ATerm z_7 = NULL;
  z_7 = t;
  {
    ATerm a_17 = t;
    int b_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_8 = NULL;
        t = term_p_7;
        t = get_config_0_0(t);
        d_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_8, term_c_11);
        t = geq_0_0(t);
        t = z_7;
        t = s_80(t);
        LocalPopChoice(b_17);
      }
    else
      {
        t = a_17;
        t = z_7;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm u_80 (ATerm), ATerm t)
{
  ATerm i_8 = NULL;
  i_8 = t;
  {
    ATerm c_17 = t;
    int g_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_8 = NULL;
        t = term_p_7;
        t = get_config_0_0(t);
        m_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_8, term_j_9);
        t = geq_0_0(t);
        t = i_8;
        t = u_80(t);
        LocalPopChoice(g_17);
      }
    else
      {
        t = c_17;
        t = i_8;
      }
  }
  return(t);
}
static ATerm d_6 (ATerm s_73 (ATerm), ATerm t_73 (ATerm), ATerm q_24, ATerm p_24, ATerm t)
{
  t = t_73(t);
  {
    static ATerm w_0 (ATerm t)
    {
      ATerm o_8 = NULL;
      o_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_24, o_8);
      t = s_73(t);
      return(t);
    }
    t = fetch_1_0(w_0, t);
  }
  t = p_24;
  return(t);
}
static ATerm e_6 (ATerm p_73 (ATerm), ATerm m_24, ATerm l_24, ATerm t)
{
  static ATerm o_9 (ATerm t)
  {
    ATerm f_9 = NULL,g_9 = NULL,l_9 = NULL;
    f_9 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_9 = ATgetFirst((ATermList) t);
            l_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_17 = t;
          int i_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_9;
              {
                static ATerm y_0 (ATerm t)
                {
                  t = l_24;
                  return(t);
                }
                t = d_6(p_73, y_0, g_9, l_9, t);
              }
              t = o_9(t);
              LocalPopChoice(i_17);
            }
          else
            {
              t = h_17;
              {
                ATerm h_3 = NULL,q_3 = NULL,b_1 = NULL;
                t = SSLgetAnnotations(f_9);
                h_3 = t;
                t = l_9;
                t = o_9(t);
                q_3 = t;
                t = (ATerm) ATinsert(CheckATermList(q_3), g_9);
                b_1 = t;
                t = SSLsetAnnotations(b_1, h_3);
              }
            }
        }
      }
    return(t);
  }
  t = m_24;
  t = o_9(t);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm l_10 = NULL;
  if(match_cons(t, sym__2))
    {
      l_10 = ATgetArgument(t, 0);
      if((l_10 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm f_6 (ATerm e_36, ATerm f_36, ATerm g_36, ATerm t)
{
  ATerm x_9 = NULL,a_10 = NULL,b_10 = NULL;
  x_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_36, f_36);
  {
    ATerm j_17 = t;
    int m_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_17 = ATgetArgument(t, 0);
            ATerm y_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_36, f_36);
        t = s_6(e_36, f_36, t);
        LocalPopChoice(m_17);
      }
    else
      {
        t = j_17;
        t = (ATerm) ATempty;
      }
  }
  b_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_10, g_36);
  t = e_6(a_1, b_10, g_36, t);
  a_10 = t;
  t = SSL_table_put(e_36, f_36, a_10);
  t = x_9;
  return(t);
}
static ATerm g_6 (ATerm w_80 (ATerm), ATerm o_36, ATerm n_36, ATerm t)
{
  static ATerm c_1 (ATerm t)
  {
    ATerm m_10 = NULL,n_10 = NULL;
    if(match_cons(t, sym__2))
      {
        m_10 = ATgetArgument(t, 0);
        n_10 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, o_36, m_10, n_10);
    t = w_80(t);
    return(t);
  }
  t = n_36;
  t = map_1_0(c_1, t);
  return(t);
}
static ATerm k_6 (ATerm p_38, ATerm q_38, ATerm t)
{
  t = SSL_access(p_38, q_38);
  return(t);
}
static ATerm t_11 (ATerm g_11, ATerm t)
{
  t = SSL_fclose(g_11);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_11 = NULL,p_11 = NULL;
  p_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_11 = ATgetArgument(t, 0);
      {
        ATerm z_17 = t;
        int a_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_11);
            LocalPopChoice(a_18);
          }
        else
          {
            t = z_17;
            t = t_11(p_11, t);
          }
      }
    }
  else
    {
      t = t_11(p_11, t);
    }
  return(t);
}
static ATerm h_6 (ATerm t_17, ATerm t)
{
  t = SSL_read_term_from_stream(t_17);
  return(t);
}
static ATerm i_6 (ATerm y_38, ATerm z_38, ATerm t)
{
  ATerm w_11 = NULL;
  t = SSL_fopen(y_38, z_38);
  w_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_11);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_11 = NULL;
  t = SSL_stdin_stream();
  x_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_11);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_11 = NULL;
  t = SSL_stdout_stream();
  y_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_11);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_11 = NULL;
  t = SSL_stderr_stream();
  z_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_11);
  return(t);
}
static ATerm y_13 (ATerm f_12, ATerm t)
{
  ATerm g_12 = NULL;
  t = SSL_explode_term(f_12);
  if(match_cons(t, sym__2))
    {
      ATerm b_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_18 = ATgetArgument(t, 1);
        if(((ATgetType(d_18) == AT_LIST) && !(ATisEmpty(d_18))))
          {
            g_12 = ATgetFirst((ATermList) d_18);
            {
              ATerm e_18 = (ATerm) ATgetNext((ATermList) d_18);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_12;
  if(match_cons(t, sym_stderr_0))
    {
      t = g_12;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = g_12;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = g_12;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm z_13 (ATerm j_12, ATerm l_12, ATerm m_12, ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL,v_12 = NULL,g_1 = NULL;
  t = SSLgetAnnotations(m_12);
  p_12 = t;
  t = j_12;
  if(match_cons(t, sym_Path_1))
    {
      v_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_12, l_12);
  g_1 = t;
  t = SSLsetAnnotations(g_1, p_12);
  if(match_cons(t, sym__2))
    {
      n_12 = ATgetArgument(t, 0);
      o_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(n_12, o_12, t);
  return(t);
}
static ATerm a_14 (ATerm x_12, ATerm y_12, ATerm c_13, ATerm t)
{
  ATerm d_13 = NULL,e_13 = NULL,i_13 = NULL,m_13 = NULL,j_1 = NULL;
  t = SSLgetAnnotations(c_13);
  i_13 = t;
  t = SSL_is_string(x_12);
  m_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_13, y_12);
  j_1 = t;
  t = SSLsetAnnotations(j_1, i_13);
  if(match_cons(t, sym__2))
    {
      d_13 = ATgetArgument(t, 0);
      e_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(d_13, e_13, t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm q_13 = NULL,u_13 = NULL,v_13 = NULL;
  q_13 = t;
  if(match_cons(t, sym__2))
    {
      u_13 = ATgetArgument(t, 0);
      v_13 = ATgetArgument(t, 1);
      {
        ATerm i_18 = t;
        int m_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_13(q_13, t);
            LocalPopChoice(m_18);
          }
        else
          {
            t = i_18;
            {
              ATerm n_18 = t;
              int o_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_13(u_13, v_13, q_13, t);
                  LocalPopChoice(o_18);
                }
              else
                {
                  t = n_18;
                  t = a_14(u_13, v_13, q_13, t);
                }
            }
          }
      }
    }
  else
    {
      t = y_13(q_13, t);
    }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_p_18;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL;
  ATerm t_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_14 = NULL;
      i_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_14, term_v_18);
      t = j_6(t);
      LocalPopChoice(u_18);
    }
  else
    {
      t = t_18;
      t = debug_1_0(d_1, t);
      _fail(t);
    }
  d_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_6(e_14, t);
  c_14 = t;
  t = d_14;
  t = fclose_0_0(t);
  t = c_14;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_w_18;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_y_18;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm a_19 = t;
  int b_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_14 = NULL,l_14 = NULL;
      k_14 = t;
      t = (ATerm) ATinsert(ATempty, term_c_19);
      l_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_14, (ATerm) ATinsert(ATempty, term_c_19));
      t = k_6(k_14, l_14, t);
      LocalPopChoice(b_19);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = a_19;
      {
        ATerm e_19 = t;
        int f_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_19 = t;
            if((PushChoice() == 0))
              {
                ATerm m_14 = NULL,p_14 = NULL;
                m_14 = t;
                t = (ATerm) ATinsert(ATempty, term_a_8);
                p_14 = t;
                t = (ATerm) ATmakeAppl(sym__2, m_14, (ATerm) ATinsert(ATempty, term_a_8));
                t = k_6(m_14, p_14, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = g_19;
              }
            t = debug_1_0(e_1, t);
            LocalPopChoice(f_19);
          }
        else
          {
            t = e_19;
            t = debug_1_0(f_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = debug_1_0(i_1, t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_h_19;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = debug_1_0(l_1, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_i_19;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm j_15 = NULL,m_15 = NULL,n_15 = NULL;
  j_15 = t;
  t = term_r_16;
  m_15 = t;
  t = (ATerm) ATinsert(ATempty, term_j_19);
  n_15 = t;
  t = SSL_printnl(m_15, n_15);
  t = j_15;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm o_15 = NULL,s_15 = NULL,u_15 = NULL;
  if(match_cons(t, sym__3))
    {
      o_15 = ATgetArgument(t, 0);
      s_15 = ATgetArgument(t, 1);
      u_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = f_6(o_15, s_15, u_15, t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL;
  v_15 = t;
  t = term_r_16;
  w_15 = t;
  t = (ATerm) ATinsert(ATempty, term_l_19);
  x_15 = t;
  t = SSL_printnl(w_15, x_15);
  t = v_15;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL,c_16 = NULL;
  y_15 = t;
  t = term_r_16;
  z_15 = t;
  t = (ATerm) ATinsert(ATempty, term_j_19);
  c_16 = t;
  t = SSL_printnl(z_15, c_16);
  t = y_15;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,y_14 = NULL,z_14 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL;
  s_14 = t;
  t = if_verbose5_1_0(h_1, t);
  {
    ATerm n_19 = t;
    if((PushChoice() == 0))
      {
        ATerm h_15 = NULL,i_15 = NULL;
        t = term_q_19;
        h_15 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, s_14);
        i_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_q_19, (ATerm) ATmakeAppl(sym_Imported_1, s_14));
        t = s_6(h_15, i_15, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_19;
      }
  }
  u_14 = t;
  t = term_q_19;
  e_15 = t;
  t = term_u_19;
  f_15 = t;
  t = (ATerm) ATinsert(ATempty, s_14);
  g_15 = t;
  t = SSL_table_put(e_15, f_15, g_15);
  t = u_14;
  t = if_verbose4_1_0(k_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(m_1, t);
  t_14 = t;
  t = term_q_19;
  z_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_19, t_14);
  t = g_6(q_1, z_14, t_14, t);
  t = if_verbose6_1_0(r_1, t);
  t = term_q_19;
  v_14 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, s_14);
  w_14 = t;
  t = (ATerm) ATempty;
  y_14 = t;
  t = SSL_table_put(v_14, w_14, y_14);
  t = (ATerm) ATmakeAppl(sym__3, term_q_19, (ATerm)ATmakeAppl(sym_Imported_1, s_14), (ATerm) ATempty);
  t = if_verbose4_1_0(w_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm h_77 (ATerm), ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL;
  d_17 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_17;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_17 = ATgetFirst((ATermList) t);
          f_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm v_19 = t;
        int x_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_4 = NULL,g_5 = NULL,h_5 = NULL,v_1 = NULL;
            t = SSLgetAnnotations(d_17);
            y_4 = t;
            t = e_17;
            t = h_77(t);
            g_5 = t;
            t = f_17;
            t = filter_1_0(h_77, t);
            h_5 = t;
            t = (ATerm) ATinsert(CheckATermList(h_5), g_5);
            v_1 = t;
            t = SSLsetAnnotations(v_1, y_4);
            LocalPopChoice(x_19);
          }
        else
          {
            t = v_19;
            t = f_17;
            t = filter_1_0(h_77, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm q_67 (ATerm), ATerm r_67 (ATerm), ATerm t)
{
  static ATerm k_17 (ATerm t)
  {
    ATerm y_19 = t;
    int z_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_67(t);
        t = k_17(t);
        LocalPopChoice(z_19);
      }
    else
      {
        t = y_19;
        t = r_67(t);
      }
    return(t);
  }
  t = k_17(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm b_20 = t;
  int c_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_20;
      t = get_config_0_0(t);
      LocalPopChoice(c_20);
    }
  else
    {
      t = b_20;
      {
        ATerm m_20 = t;
        int r_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_17 = NULL;
            t = term_t_20;
            l_17 = t;
            t = SSL_getenv(l_17);
            LocalPopChoice(r_20);
          }
        else
          {
            t = m_20;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = debug_1_0(y_1, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_v_20;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm w_17 = NULL,x_17 = NULL;
  t = term_q_19;
  w_17 = t;
  t = term_w_20;
  x_17 = t;
  t = term_x_20;
  t = s_6(w_17, x_17, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm y_20 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_20;
      }
  }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = debug_1_0(c_2, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_z_20;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm p_17 = NULL;
  t = if_verbose5_1_0(x_1, t);
  p_17 = t;
  {
    ATerm a_21 = t;
    int b_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_17 = NULL,r_17 = NULL;
        t = term_q_19;
        q_17 = t;
        t = term_u_19;
        r_17 = t;
        t = term_c_21;
        t = s_6(q_17, r_17, t);
        LocalPopChoice(b_21);
      }
    else
      {
        t = a_21;
        {
          ATerm s_17 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          s_17 = t;
          t = repeat_2_0(a_2, _id, t);
          t = s_17;
        }
      }
  }
  t = p_17;
  t = if_verbose5_1_0(b_2, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_d_21;
  return(t);
}
static ATerm z_18 (ATerm c_18, ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL;
  t = term_q_19;
  g_18 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, c_18);
  h_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_19, (ATerm) ATmakeAppl(sym_Tool_1, c_18));
  t = s_6(g_18, h_18, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_21 = ATgetFirst((ATermList) t);
      if(match_cons(e_21, sym__2))
        {
          ATerm g_21 = ATgetArgument(e_21, 0);
          f_18 = ATgetArgument(e_21, 1);
        }
      else
        _fail(t);
      {
        ATerm f_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = f_18;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = debug_1_0(k_2, t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_d_21;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_q_19;
  t = table_getlist_0_0(t);
  t = debug_1_0(n_2, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_h_21;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm j_21 = t;
  int k_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL;
      t = if_verbose5_1_0(d_2, t);
      t = xtc_load_0_0(t);
      l_18 = t;
      if(match_cons(t, sym__2))
        {
          j_18 = ATgetArgument(t, 0);
          k_18 = ATgetArgument(t, 1);
          {
            ATerm n_21 = t;
            int o_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
                t = term_q_19;
                r_18 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, j_18);
                s_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_q_19, (ATerm) ATmakeAppl(sym_Tool_1, j_18));
                t = s_6(r_18, s_18, t);
                {
                  static ATerm i_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((k_18 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((q_18 != NULL) && (q_18 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          q_18 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(i_2, t);
                }
                t = not_null(q_18);
                LocalPopChoice(o_21);
              }
            else
              {
                t = n_21;
                t = z_18(l_18, t);
              }
          }
        }
      else
        {
          t = z_18(l_18, t);
        }
      t = if_verbose5_1_0(j_2, t);
      LocalPopChoice(k_21);
    }
  else
    {
      t = j_21;
      {
        ATerm x_18 = NULL,v_5 = NULL,w_5 = NULL;
        x_18 = t;
        t = term_r_16;
        v_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_21), x_18), term_q_21);
        w_5 = t;
        t = SSL_printnl(v_5, w_5);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_21), x_18), term_q_21);
        t = if_verbose5_1_0(l_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm r_83 (ATerm), ATerm t)
{
  ATerm d_19 = NULL,k_19 = NULL;
  k_19 = t;
  t = r_83(t);
  t = xtc_find_0_0(t);
  d_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_19, k_19);
  {
    static ATerm p_2 (ATerm t)
    {
      ATerm m_19 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, d_19, k_19);
      t = a_6(d_19, k_19, t);
      t = term_t_21;
      m_19 = t;
      t = SSL_exit(m_19);
      return(t);
    }
    t = fork_and_wait_1_0(p_2, t);
  }
  t = k_19;
  return(t);
}
static ATerm l_6 (ATerm l_79 (ATerm), ATerm q_34, ATerm o_34, ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL,w_19 = NULL;
  s_19 = t;
  t = l_79(t);
  o_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_19, q_34, o_34);
  t = t_6(o_19, q_34, o_34, t);
  {
    ATerm u_21 = t;
    int w_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_20 = NULL;
        t = term_x_21;
        a_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_19, term_x_21);
        t = s_6(o_19, a_20, t);
        LocalPopChoice(w_21);
      }
    else
      {
        t = u_21;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_19 = ATgetFirst((ATermList) t);
      r_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_x_21;
  t_19 = t;
  t = (ATerm) ATinsert(CheckATermList(r_19), (ATerm) ATinsert(CheckATermList(p_19), q_34));
  w_19 = t;
  t = SSL_table_put(o_19, t_19, w_19);
  t = s_19;
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_y_21;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm d_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL;
  t = P__tmpdir_0_0(t);
  h_20 = t;
  t = term_z_21;
  l_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_20, term_z_21);
  t = r_6(h_20, l_20, t);
  j_20 = t;
  t = term_a_22;
  k_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_20, term_a_22);
  t = r_6(j_20, k_20, t);
  i_20 = t;
  t = SSL_mkstemp(i_20);
  if(match_cons(t, sym__2))
    {
      f_20 = ATgetArgument(t, 0);
      d_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_b_22;
  g_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_20, term_b_22);
  t = l_6(u_2, f_20, g_20, t);
  t = SSL_close(d_20);
  t = f_20;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL;
  n_20 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm p_20 = NULL,q_20 = NULL;
      t = n_20;
      t = xtc_new_file_0_0(t);
      p_20 = t;
      t = r_0(t);
      q_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_20, (ATerm) ATinsert(ATinsert(ATempty, p_20), term_c_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, p_20);
    }
  else
    {
      ATerm s_20 = NULL,u_20 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          o_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_20;
      t = xtc_new_file_0_0(t);
      s_20 = t;
      t = r_0(t);
      u_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, s_20), term_c_22), o_20), term_d_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, s_20);
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_e_22;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm m_21 = NULL,p_21 = NULL;
  t = term_b_22;
  t = pass_width_0_0(t);
  m_21 = t;
  t = term_b_22;
  t = pass_verbose_0_0(t);
  p_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_21, p_21);
  t = conc_0_0(t);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_e_22;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm s_21 = NULL,v_21 = NULL;
  t = term_b_22;
  t = pass_width_0_0(t);
  s_21 = t;
  t = term_b_22;
  t = pass_verbose_0_0(t);
  v_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_21, v_21);
  t = conc_0_0(t);
  return(t);
}
ATerm abox2text_0_0 (ATerm t)
{
  ATerm f_22 = t;
  int g_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_21 = NULL,l_21 = NULL;
      l_21 = t;
      if(match_cons(t, sym_FILE_1))
        {
          i_21 = ATgetArgument(t, 0);
          {
            ATerm z_6 = NULL,b_4 = NULL;
            t = SSLgetAnnotations(l_21);
            z_6 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, i_21);
            b_4 = t;
            t = SSLsetAnnotations(b_4, z_6);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_21;
        }
      LocalPopChoice(g_22);
      t = xtc_transform_file_2_0(v_2, c_3, t);
    }
  else
    {
      t = f_22;
      t = xtc_transform_term_2_0(d_3, e_3, t);
    }
  return(t);
}
static ATerm m_6 (ATerm n_14, ATerm o_14, ATerm t)
{
  t = SSL_copy(n_14, o_14);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL;
  c_23 = t;
  if(match_cons(t, sym_FILE_1))
    {
      d_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm h_22 = t;
    int i_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_7 = NULL;
        t = c_23;
        t = o_0(t);
        o_7 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = o_7;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = o_7;
          }
        t = (ATerm) ATmakeAppl(sym__2, d_23, o_7);
        t = m_6(d_23, o_7, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, d_23);
        LocalPopChoice(i_22);
      }
    else
      {
        t = h_22;
        {
          ATerm j_22 = t;
          int k_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_8 = NULL;
              t = c_23;
              t = o_0(t);
              b_8 = t;
              {
                ATerm l_22 = t;
                if((PushChoice() == 0))
                  {
                    ATerm c_8 = NULL;
                    c_8 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = c_8;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = c_8;
                          }
                        else
                          {
                            t = c_8;
                            if((d_23 != t))
                              {
                                _fail(t);
                              }
                            t = c_8;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = l_22;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, d_23, b_8);
              t = m_6(d_23, b_8, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_23);
              LocalPopChoice(k_22);
            }
          else
            {
              t = j_22;
              t = c_23;
              t = o_0(t);
              if((d_23 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_23);
            }
        }
      }
  }
  return(t);
}
static ATerm n_6 (ATerm m_35, ATerm n_35, ATerm t)
{
  ATerm j_23 = NULL,k_23 = NULL;
  k_23 = t;
  {
    ATerm m_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_35, n_35);
        t = s_6(m_35, n_35, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_22 = ATgetFirst((ATermList) t);
            j_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(n_22);
        t = SSL_table_put(m_35, n_35, j_23);
        t = (ATerm) ATmakeAppl(sym__3, m_35, n_35, j_23);
      }
    else
      {
        t = m_22;
        t = SSL_table_remove(m_35, n_35);
        t = (ATerm) ATmakeAppl(sym__2, m_35, n_35);
      }
  }
  t = k_23;
  return(t);
}
ATerm end_scope_1_0 (ATerm i_79 (ATerm), ATerm t)
{
  ATerm l_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL,t_23 = NULL;
  q_23 = t;
  t = i_79(t);
  p_23 = t;
  {
    ATerm p_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_23 = NULL;
        t = term_x_21;
        u_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_23, term_x_21);
        t = s_6(p_23, u_23, t);
        LocalPopChoice(q_22);
      }
    else
      {
        t = p_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_23 = ATgetFirst((ATermList) t);
      l_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_x_21;
  t_23 = t;
  t = SSL_table_put(p_23, t_23, l_23);
  t = o_23;
  {
    static ATerm f_3 (ATerm t)
    {
      ATerm v_23 = NULL;
      v_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_23, v_23);
      t = n_6(p_23, v_23, t);
      return(t);
    }
    t = map_1_0(f_3, t);
  }
  t = q_23;
  return(t);
}
ATerm restore_always_2_0 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm t)
{
  ATerm r_22 = t;
  int s_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_80(t);
      t = e_80(t);
      LocalPopChoice(s_22);
    }
  else
    {
      t = r_22;
      t = e_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm h_79 (ATerm), ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL;
  z_23 = t;
  t = h_79(t);
  y_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_23, term_x_21);
  {
    ATerm t_22 = t;
    int u_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_24 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm v_22 = ATgetArgument(t, 0);
            ATerm w_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_x_21;
        g_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_23, term_x_21);
        t = s_6(y_23, g_24, t);
        LocalPopChoice(u_22);
      }
    else
      {
        t = t_22;
        t = (ATerm) ATempty;
      }
  }
  a_24 = t;
  t = term_x_21;
  b_24 = t;
  t = (ATerm) ATinsert(CheckATermList(a_24), (ATerm) ATempty);
  c_24 = t;
  t = SSL_table_put(y_23, b_24, c_24);
  t = z_23;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_y_21;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm x_24 = NULL;
  x_24 = t;
  {
    ATerm x_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(x_24);
        LocalPopChoice(y_22);
      }
    else
      {
        t = x_22;
        t = x_24;
      }
  }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_y_21;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm d_83 (ATerm), ATerm t)
{
  ATerm n_24 = NULL;
  static ATerm i_3 (ATerm t)
  {
    ATerm o_24 = NULL;
    o_24 = t;
    {
      ATerm z_22 = t;
      int a_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_24 = NULL,u_24 = NULL;
          t = term_y_21;
          s_24 = t;
          t = term_x_21;
          u_24 = t;
          t = term_b_23;
          t = s_6(s_24, u_24, t);
          LocalPopChoice(a_23);
        }
      else
        {
          t = z_22;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((n_24 != NULL) && (n_24 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          n_24 = ATgetFirst((ATermList) t);
        {
          ATerm e_23 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = n_24;
    t = map_1_0(k_3, t);
    t = o_24;
    t = end_scope_1_0(n_3, t);
    return(t);
  }
  t = begin_scope_1_0(g_3, t);
  t = restore_always_2_0(d_83, i_3, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm f_23 = t;
  int g_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_22;
      t = get_config_0_0(t);
      LocalPopChoice(g_23);
    }
  else
    {
      t = f_23;
      t = term_h_23;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm e_83 (ATerm), ATerm t)
{
  static ATerm u_3 (ATerm t)
  {
    ATerm i_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_25 = NULL;
        t = term_d_22;
        t = get_config_0_0(t);
        a_25 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, a_25);
        LocalPopChoice(m_23);
      }
    else
      {
        t = i_23;
        t = term_y_7;
      }
    t = e_83(t);
    t = copy_to_1_0(v_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(u_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,g_25 = NULL;
  b_25 = t;
  t = term_b_22;
  t = whoami_0_0(t);
  c_25 = t;
  t = term_r_16;
  e_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_23), c_25), term_n_23);
  g_25 = t;
  t = SSL_printnl(e_25, g_25);
  t = term_u_7;
  d_25 = t;
  t = SSL_exit(d_25);
  t = b_25;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL;
      t = term_b_22;
      t = n_0(t);
      q_25 = t;
      t = term_s_23;
      r_25 = t;
      t = term_w_23;
      s_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_23, term_w_23, q_25);
      t = t_6(r_25, s_25, q_25, t);
      _fail(t);
    }
  else
    {
      ATerm z_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_25 = ATgetFirst((ATermList) t);
          l_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_25;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_25 = ATgetFirst((ATermList) t);
          n_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_25;
      t = k_0(t);
      t = m_25;
      t = l_0(t);
      z_25 = t;
      t = (ATerm) ATinsert(CheckATermList(n_25), z_25);
    }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm c_26 = NULL;
  c_26 = t;
  if(match_string(t, "-k"))
    {
      t = c_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = c_26;
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm d_26 = NULL,f_26 = NULL,g_26 = NULL;
  d_26 = t;
  t = SSL_string_to_int(d_26);
  f_26 = t;
  t = term_x_23;
  g_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_23, f_26);
  t = v_6(g_26, f_26, t);
  t = d_26;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_d_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_3, x_3, y_3, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm j_26 = NULL;
  j_26 = t;
  if(match_string(t, "-S"))
    {
      t = j_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_26;
    }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm k_26 = NULL,r_26 = NULL;
  t = term_p_7;
  k_26 = t;
  t = term_e_24;
  r_26 = t;
  t = term_f_24;
  t = v_6(k_26, r_26, t);
  t = term_h_24;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_i_24;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL;
  s_26 = t;
  t = SSL_string_to_int(s_26);
  t_26 = t;
  t = term_p_7;
  u_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_7, t_26);
  t = v_6(u_26, t_26, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, s_26);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_j_24;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL;
  t = term_k_24;
  w_26 = t;
  t = term_b_22;
  x_26 = t;
  t = term_r_24;
  t = v_6(w_26, x_26, t);
  t = term_t_24;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_v_24;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm w_24 = t;
  int y_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_3, a_4, c_4, t);
      LocalPopChoice(y_24);
    }
  else
    {
      t = w_24;
      {
        ATerm z_24 = t;
        int f_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_4, f_4, h_4, t);
            LocalPopChoice(f_25);
          }
        else
          {
            t = z_24;
            t = Option_3_0(j_4, k_4, l_4, t);
          }
      }
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm z_26 = NULL;
  z_26 = t;
  if(match_string(t, "-o"))
    {
      t = z_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = z_26;
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL;
  b_27 = t;
  t = term_c_22;
  c_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_22, b_27);
  t = v_6(c_27, b_27, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, b_27);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_h_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_4, o_4, p_4, t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm g_27 = NULL;
  g_27 = t;
  if(match_string(t, "-i"))
    {
      t = g_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_27;
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL;
  h_27 = t;
  t = term_d_22;
  i_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_22, h_27);
  t = v_6(i_27, h_27, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_27);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_i_25;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_4, t_4, u_4, t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm k_27 = NULL;
  k_27 = t;
  if(match_string(t, "-w"))
    {
      t = k_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = k_27;
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm l_27 = NULL,n_27 = NULL;
  l_27 = t;
  t = term_x_7;
  n_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_7, l_27);
  t = v_6(n_27, l_27, t);
  t = l_27;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_j_25;
  return(t);
}
ATerm abox2text_options_0_0 (ATerm t)
{
  ATerm o_25 = t;
  int p_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(p_25);
    }
  else
    {
      t = o_25;
      {
        ATerm t_25 = t;
        int u_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(u_25);
          }
        else
          {
            t = t_25;
            {
              ATerm v_25 = t;
              int w_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  LocalPopChoice(w_25);
                }
              else
                {
                  t = v_25;
                  {
                    ATerm x_25 = t;
                    int y_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = keep_option_0_0(t);
                        LocalPopChoice(y_25);
                      }
                    else
                      {
                        t = x_25;
                        t = ArgOption_3_0(a_5, b_5, f_5, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_22;
  t = whoami_0_0(t);
  o_27 = t;
  t = term_r_16;
  q_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_26), o_27);
  r_27 = t;
  t = SSL_printnl(q_27, r_27);
  t = term_u_7;
  p_27 = t;
  t = SSL_exit(p_27);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_b_26;
  t = get_config_0_0(t);
  return(t);
}
static ATerm o_6 (ATerm c_33, ATerm d_33, ATerm t)
{
  ATerm e_26 = t;
  int h_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_33, d_33);
      LocalPopChoice(h_26);
    }
  else
    {
      t = e_26;
      t = SSL_addr(c_33, d_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm d_76 (ATerm), ATerm e_76 (ATerm), ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL;
  t_27 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_27;
      t = d_76(t);
    }
  else
    {
      ATerm a_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_27 = ATgetFirst((ATermList) t);
          v_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_27;
      t = foldr_2_0(d_76, e_76, t);
      a_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_27, a_28);
      t = e_76(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = term_e_24;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm t_8 = NULL,a_9 = NULL;
  if(match_cons(t, sym__2))
    {
      t_8 = ATgetArgument(t, 0);
      a_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6(t_8, a_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_28 = NULL,p_8 = NULL,q_8 = NULL;
  t = times_0_0(t);
  q_8 = t;
  t = SSL_explode_term(q_8);
  if(match_cons(t, sym__2))
    {
      ATerm i_26 = ATgetArgument(t, 0);
      p_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_8;
  t = foldr_2_0(i_5, k_5, t);
  f_28 = t;
  t = SSL_TicksToSeconds(f_28);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_29 = NULL,f_29 = NULL,j_29 = NULL;
  b_29 = t;
  if(match_cons(t, sym__2))
    {
      f_29 = ATgetArgument(t, 0);
      j_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_29;
        if((f_29 != t))
          {
            _fail(t);
          }
        t = b_29;
        LocalPopChoice(m_26);
      }
    else
      {
        t = l_26;
        t = (ATerm) ATmakeAppl(sym__2, f_29, j_29);
        {
          ATerm n_26 = t;
          int o_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_29, j_29);
              LocalPopChoice(o_26);
            }
          else
            {
              t = n_26;
              t = SSL_gtr(f_29, j_29);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, f_29, j_29);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm p_80 (ATerm), ATerm t)
{
  ATerm n_29 = NULL;
  n_29 = t;
  {
    ATerm p_26 = t;
    int q_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_29 = NULL;
        t = term_p_7;
        t = get_config_0_0(t);
        p_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_29, term_u_7);
        t = geq_0_0(t);
        t = n_29;
        t = p_80(t);
        LocalPopChoice(q_26);
      }
    else
      {
        t = p_26;
        t = n_29;
      }
  }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL,u_29 = NULL,v_29 = NULL;
  t = run_time_0_0(t);
  r_29 = t;
  t = term_b_22;
  t = whoami_0_0(t);
  s_29 = t;
  t = term_r_16;
  u_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_26), r_29), term_j_8), s_29);
  v_29 = t;
  t = SSL_printnl(u_29, v_29);
  t = (ATerm) ATmakeAppl(sym__2, term_r_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_26), r_29), term_j_8), s_29));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(l_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm w_29 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_24;
  w_29 = t;
  t = SSL_exit(w_29);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm e_30 = NULL,f_30 = NULL;
  f_30 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = f_30;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          e_30 = ATgetArgument(t, 0);
          {
            ATerm v_9 = NULL,e_4 = NULL;
            t = SSLgetAnnotations(f_30);
            v_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, e_30);
            e_4 = t;
            t = SSLsetAnnotations(e_4, v_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = f_30;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm t_84 (ATerm), ATerm t)
{
  ATerm y_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_27;
      t = get_config_0_0(t);
      LocalPopChoice(a_27);
    }
  else
    {
      t = y_26;
      t = fetch_1_0(n_5, t);
    }
  t = t_84(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_30 = ATgetFirst((ATermList) t);
      j_30 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_30 = NULL,o_30 = NULL;
        static ATerm o_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(n_30)), not_null(o_30));
          return(t);
        }
        t = j_30;
        t = i_0(t);
        if(((n_30 != NULL) && (n_30 != t)))
          _fail(t);
        else
          n_30 = t;
        t = i_30;
        t = g_0(t);
        if(((o_30 != NULL) && (o_30 != t)))
          _fail(t);
        else
          o_30 = t;
        t = j_30;
        t = reverse_acc_2_0(g_0, o_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_22;
      t = i_0(t);
    }
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL,g_4 = NULL;
  u_30 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_30);
  s_30 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_30);
  g_4 = t;
  t = SSLsetAnnotations(g_4, s_30);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm w_30 = NULL;
  w_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_30), term_e_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL;
  ATerm f_27 = t;
  int j_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_26;
      t = get_config_0_0(t);
      LocalPopChoice(j_27);
    }
  else
    {
      t = f_27;
      t = fetch_1_0(p_5, t);
    }
  t = term_m_27;
  t = echo_0_0(t);
  t = term_s_23;
  q_30 = t;
  t = term_w_23;
  r_30 = t;
  t = term_s_27;
  t = s_6(q_30, r_30, t);
  t = reverse_acc_2_0(_id, q_5, t);
  t = map_1_0(r_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm v_69 (ATerm), ATerm t)
{
  static ATerm t_31 (ATerm t)
  {
    ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL;
    q_31 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_31 = ATgetFirst((ATermList) t);
        s_31 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_27 = t;
      int x_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_10 = NULL,p_10 = NULL,i_4 = NULL;
          t = SSLgetAnnotations(q_31);
          j_10 = t;
          t = r_31;
          t = v_69(t);
          p_10 = t;
          t = (ATerm) ATinsert(CheckATermList(s_31), p_10);
          i_4 = t;
          t = SSLsetAnnotations(i_4, j_10);
          LocalPopChoice(x_27);
        }
      else
        {
          t = w_27;
          {
            ATerm x_10 = NULL,a_11 = NULL,m_4 = NULL;
            t = SSLgetAnnotations(q_31);
            x_10 = t;
            t = s_31;
            t = t_31(t);
            a_11 = t;
            t = (ATerm) ATinsert(CheckATermList(a_11), r_31);
            m_4 = t;
            t = SSLsetAnnotations(m_4, x_10);
          }
        }
    }
    return(t);
  }
  t = t_31(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL;
  z_31 = t;
  {
    ATerm y_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_31;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_28 = ATgetFirst((ATermList) t);
                ATerm c_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_31;
          }
        LocalPopChoice(z_27);
      }
    else
      {
        t = y_27;
        t = (ATerm) ATinsert(ATempty, z_31);
      }
  }
  a_32 = t;
  t = term_h_23;
  b_32 = t;
  t = SSL_printnl(b_32, a_32);
  t = z_31;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_b_26;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm r_6 (ATerm x_31, ATerm y_31, ATerm t)
{
  t = SSL_strcat(x_31, y_31);
  return(t);
}
ATerm debug_1_0 (ATerm t_64 (ATerm), ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL;
  f_32 = t;
  t = t_64(t);
  g_32 = t;
  t = term_r_16;
  h_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_32), g_32);
  i_32 = t;
  t = SSL_printnl(h_32, i_32);
  t = f_32;
  return(t);
}
ATerm map_1_0 (ATerm l_69 (ATerm), ATerm t)
{
  static ATerm x_32 (ATerm t)
  {
    ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL;
    u_32 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_32;
      }
    else
      {
        ATerm s_11 = NULL,a_12 = NULL,b_12 = NULL,q_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_32 = ATgetFirst((ATermList) t);
            w_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_32);
        s_11 = t;
        t = v_32;
        t = l_69(t);
        a_12 = t;
        t = w_32;
        t = x_32(t);
        b_12 = t;
        t = (ATerm) ATinsert(CheckATermList(b_12), a_12);
        q_4 = t;
        t = SSLsetAnnotations(q_4, s_11);
      }
    return(t);
  }
  t = x_32(t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm d_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(e_28);
    }
  else
    {
      t = d_28;
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_g_28;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm h_28 = t;
  int i_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_33 = NULL;
      h_33 = t;
      t = SSL_is_string(h_33);
      LocalPopChoice(i_28);
    }
  else
    {
      t = h_28;
      {
        ATerm j_28 = t;
        int k_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(s_5, t);
            LocalPopChoice(k_28);
          }
        else
          {
            t = j_28;
            {
              ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL;
              p_33 = t;
              if(match_cons(t, sym_Path_1))
                {
                  q_33 = ATgetArgument(t, 0);
                  t = q_33;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      q_33 = ATgetArgument(t, 0);
                      t = q_33;
                      {
                        ATerm l_28 = t;
                        int m_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(m_28);
                          }
                        else
                          {
                            t = l_28;
                            t = debug_1_0(t_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm v_33 = NULL,w_33 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          q_33 = ATgetArgument(t, 0);
                          r_33 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = q_33;
                      t = eval_config_0_0(t);
                      v_33 = t;
                      t = r_33;
                      t = eval_config_0_0(t);
                      w_33 = t;
                      t = (ATerm) ATmakeAppl(sym__2, v_33, w_33);
                      t = r_6(v_33, w_33, t);
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
  ATerm a_34 = NULL,b_34 = NULL;
  a_34 = t;
  t = term_n_28;
  b_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_28, a_34);
  t = s_6(b_34, a_34, t);
  {
    ATerm o_28 = t;
    int p_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_34 = NULL,d_34 = NULL;
        t = eval_config_0_0(t);
        c_34 = t;
        t = term_n_28;
        d_34 = t;
        t = SSL_table_put(d_34, a_34, c_34);
        t = c_34;
        LocalPopChoice(p_28);
      }
    else
      {
        t = o_28;
      }
  }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL;
  t = term_q_28;
  g_34 = t;
  t = term_b_22;
  h_34 = t;
  t = term_r_28;
  t = v_6(g_34, h_34, t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_s_28;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL;
  t = term_q_28;
  v_34 = t;
  t = term_b_22;
  w_34 = t;
  t = term_r_28;
  t = v_6(v_34, w_34, t);
  t = term_t_28;
  t_34 = t;
  t = term_b_22;
  u_34 = t;
  t = term_u_28;
  t = v_6(t_34, u_34, t);
  t = term_v_28;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_w_28;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_28 = t;
  int y_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_5, b_6, c_6, t);
      LocalPopChoice(y_28);
    }
  else
    {
      t = x_28;
      t = Option_3_0(p_6, u_6, w_6, t);
    }
  return(t);
}
static ATerm v_6 (ATerm h_37, ATerm i_37, ATerm t)
{
  ATerm x_34 = NULL;
  t = term_n_28;
  x_34 = t;
  t = SSL_table_put(x_34, h_37, i_37);
  t = (ATerm) ATmakeAppl(sym__3, term_n_28, h_37, i_37);
  return(t);
}
static ATerm s_6 (ATerm y_36, ATerm z_36, ATerm t)
{
  t = SSL_table_get(y_36, z_36);
  return(t);
}
static ATerm t_6 (ATerm h_35, ATerm i_35, ATerm g_35, ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,j_35 = NULL;
  a_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_35, i_35);
  {
    ATerm z_28 = t;
    int a_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_29 = ATgetArgument(t, 0);
            ATerm d_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_35, i_35);
        t = s_6(h_35, i_35, t);
        LocalPopChoice(a_29);
      }
    else
      {
        t = z_28;
        t = (ATerm) ATempty;
      }
  }
  b_35 = t;
  t = (ATerm) ATinsert(CheckATermList(b_35), g_35);
  j_35 = t;
  t = SSL_table_put(h_35, i_35, j_35);
  t = a_35;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL;
      t = term_b_22;
      t = e_0(t);
      u_35 = t;
      t = term_s_23;
      v_35 = t;
      t = term_w_23;
      w_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_23, term_w_23, u_35);
      t = t_6(v_35, w_35, u_35, t);
      _fail(t);
    }
  else
    {
      ATerm z_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_35 = ATgetFirst((ATermList) t);
          t_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_35;
      t = c_0(t);
      t = term_b_22;
      t = d_0(t);
      z_35 = t;
      t = (ATerm) ATinsert(CheckATermList(t_35), z_35);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm l_56 (ATerm), ATerm m_56 (ATerm), ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,j_36 = NULL,k_36 = NULL,s_4 = NULL;
  k_36 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_36 = ATgetFirst((ATermList) t);
      c_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_36);
  a_36 = t;
  t = b_36;
  t = l_56(t);
  d_36 = t;
  t = c_36;
  t = m_56(t);
  j_36 = t;
  t = (ATerm) ATinsert(CheckATermList(j_36), d_36);
  s_4 = t;
  t = SSLsetAnnotations(s_4, a_36);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm r_86 (ATerm), ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL,a_37 = NULL,b_37 = NULL,c_5 = NULL;
  t_36 = t;
  {
    ATerm e_29 = t;
    int g_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_29;
        t = r_86(t);
        LocalPopChoice(g_29);
      }
    else
      {
        t = e_29;
      }
  }
  t = t_36;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_36 = ATgetFirst((ATermList) t);
      w_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_36);
  u_36 = t;
  t = term_b_26;
  b_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_26, v_36);
  t = v_6(b_37, v_36, t);
  t = w_36;
  {
    static ATerm n_37 (ATerm t)
    {
      ATerm i_29 = t;
      int k_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_29 = t;
          int m_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_37 = NULL;
              e_37 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = e_37;
              LocalPopChoice(m_29);
            }
          else
            {
              t = l_29;
              t = r_86(t);
              t = Cons_2_0(_id, n_37, t);
            }
          LocalPopChoice(k_29);
        }
      else
        {
          t = i_29;
          {
            ATerm j_37 = NULL,k_37 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_37 = ATgetFirst((ATermList) t);
                k_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(k_37), (ATerm) ATmakeAppl(sym_Undefined_1, j_37));
          }
        }
      return(t);
    }
    t = n_37(t);
  }
  a_37 = t;
  t = (ATerm) ATinsert(CheckATermList(a_37), (ATerm) ATmakeAppl(sym_Program_1, v_36));
  c_5 = t;
  t = SSLsetAnnotations(c_5, u_36);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm e_38 = NULL;
  e_38 = t;
  if(match_string(t, "--help"))
    {
      t = e_38;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_38;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_38;
        }
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL;
  t = term_d_27;
  f_38 = t;
  t = term_b_22;
  g_38 = t;
  t = term_o_29;
  t = v_6(f_38, g_38, t);
  t = term_q_29;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_t_29;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm q_86 (ATerm), ATerm t)
{
  ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL;
  z_37 = t;
  t = term_s_23;
  b_38 = t;
  t = term_w_23;
  c_38 = t;
  t = (ATerm) ATempty;
  d_38 = t;
  t = SSL_table_put(b_38, c_38, d_38);
  t = z_37;
  {
    static ATerm x_6 (ATerm t)
    {
      ATerm x_29 = t;
      int y_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_86(t);
          LocalPopChoice(y_29);
        }
      else
        {
          t = x_29;
          {
            ATerm z_29 = t;
            int a_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(y_6, a_7, b_7, t);
                LocalPopChoice(a_30);
              }
            else
              {
                t = z_29;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_6, t);
  }
  {
    ATerm b_30 = t;
    int c_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_38 = NULL;
        n_38 = t;
        {
          ATerm d_30 = t;
          int g_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_13 = NULL;
              t = n_38;
              {
                ATerm h_30 = t;
                int k_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_d_27;
                    t = get_config_0_0(t);
                    LocalPopChoice(k_30);
                  }
                else
                  {
                    t = h_30;
                    t = fetch_1_0(c_7, t);
                  }
              }
              t = n_38;
              t = default_system_usage_0_0(t);
              t = term_e_24;
              n_13 = t;
              t = SSL_exit(n_13);
              LocalPopChoice(g_30);
            }
          else
            {
              t = d_30;
              {
                ATerm t_13 = NULL;
                t = term_q_28;
                t = get_config_0_0(t);
                t = n_38;
                t = default_system_about_0_0(t);
                t = term_e_24;
                t_13 = t;
                t = SSL_exit(t_13);
              }
            }
        }
        LocalPopChoice(c_30);
      }
    else
      {
        t = b_30;
        {
          ATerm l_30 = t;
          int m_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_38 = NULL,r_38 = NULL,s_38 = NULL;
              static ATerm e_7 (ATerm t)
              {
                ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL,m_5 = NULL;
                v_38 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    u_38 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(v_38);
                t_38 = t;
                t = u_38;
                if(((x_37 != NULL) && (x_37 != t)))
                  _fail(t);
                else
                  x_37 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, u_38);
                m_5 = t;
                t = SSLsetAnnotations(m_5, t_38);
                return(t);
              }
              t = fetch_1_0(e_7, t);
              t = term_r_16;
              r_38 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_37)), term_p_30);
              s_38 = t;
              t = SSL_printnl(r_38, s_38);
              t = (ATerm) ATmakeAppl(sym__2, term_r_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_37)), term_p_30));
              t = default_system_usage_0_0(t);
              t = term_u_7;
              o_38 = t;
              t = SSL_exit(o_38);
              LocalPopChoice(m_30);
            }
          else
            {
              t = l_30;
            }
        }
      }
  }
  y_37 = t;
  t = term_s_23;
  a_38 = t;
  t = SSL_table_destroy(a_38);
  t = y_37;
  return(t);
}
ATerm option_wrap_4_0 (ATerm v_84 (ATerm), ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm y_84 (ATerm), ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL;
  t = parse_options_1_0(v_84, t);
  e_39 = t;
  t = term_v_30;
  h_39 = t;
  t = SSL_table_create(h_39);
  t = term_v_30;
  f_39 = t;
  t = term_x_30;
  g_39 = t;
  t = SSL_table_put(f_39, g_39, e_39);
  t = e_39;
  t = x_84(t);
  {
    ATerm y_30 = t;
    int z_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(w_84, t);
        LocalPopChoice(z_30);
      }
    else
      {
        t = y_30;
        {
          ATerm a_31 = t;
          int b_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_84(t);
              t = report_success_0_0(t);
              LocalPopChoice(b_31);
            }
          else
            {
              t = a_31;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = xtc_io_1_0(abox2text_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(abox2text_options_0_0, default_usage_0_0, _id, g_7, t);
  return(t);
}
