#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Meta_1;
static Symbol sym_Syntax_1;
static Symbol sym_TopSort_1;
static Symbol sym_HeuristicFilters_1;
static Symbol sym_Off_0;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_FILE_1;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Specification_1;
static Symbol sym_Module_2;
static void init_module_constructors (void)
{
  sym_Meta_1 = ATmakeSymbol("Meta", 1, ATfalse);
  ATprotectSymbol(sym_Meta_1);
  sym_Syntax_1 = ATmakeSymbol("Syntax", 1, ATfalse);
  ATprotectSymbol(sym_Syntax_1);
  sym_TopSort_1 = ATmakeSymbol("TopSort", 1, ATfalse);
  ATprotectSymbol(sym_TopSort_1);
  sym_HeuristicFilters_1 = ATmakeSymbol("HeuristicFilters", 1, ATfalse);
  ATprotectSymbol(sym_HeuristicFilters_1);
  sym_Off_0 = ATmakeSymbol("Off", 0, ATfalse);
  ATprotectSymbol(sym_Off_0);
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
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Module_2 = ATmakeSymbol("Module", 2, ATfalse);
  ATprotectSymbol(sym_Module_2);
}
static ATerm term_h_9;
static ATerm term_g_9;
static ATerm term_v_8;
static ATerm term_u_8;
static ATerm term_t_8;
static ATerm term_s_8;
static ATerm term_r_8;
static ATerm term_q_8;
static ATerm term_p_8;
static ATerm term_o_8;
static ATerm term_n_8;
static ATerm term_m_8;
static ATerm term_l_8;
static ATerm term_k_8;
static ATerm term_h_8;
static ATerm term_g_8;
static ATerm term_d_8;
static ATerm term_c_8;
static ATerm term_b_8;
static ATerm term_x_7;
static ATerm term_w_7;
static ATerm term_v_7;
static ATerm term_s_7;
static ATerm term_r_7;
static ATerm term_q_7;
static ATerm term_o_7;
static ATerm term_n_7;
static ATerm term_m_7;
static ATerm term_i_7;
static ATerm term_h_7;
static ATerm term_g_7;
static ATerm term_a_7;
static ATerm term_z_6;
static ATerm term_y_6;
static ATerm term_x_6;
static ATerm term_w_6;
static ATerm term_r_6;
static ATerm term_q_6;
static ATerm term_n_6;
static ATerm term_i_6;
static ATerm term_h_6;
static ATerm term_g_6;
static ATerm term_f_6;
static ATerm term_c_6;
static ATerm term_z_5;
static ATerm term_y_5;
static ATerm term_x_5;
static ATerm term_w_5;
static ATerm term_v_5;
static ATerm term_u_5;
static ATerm term_t_5;
static ATerm term_s_5;
static ATerm term_p_5;
static ATerm term_o_5;
static ATerm term_n_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" ** Warning: Mismatch between basename of input file (", 0, ATtrue));
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(ATmakeSymbol(") and module name (", 0, ATtrue));
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(ATmakeSymbol(") specified", 0, ATtrue));
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--start", 0, ATtrue));
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition: ", 0, ATtrue));
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("def", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax definition: ", 0, ATtrue));
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("creating syntax definition", 0, ATtrue));
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("get-parse-table: ", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("using parse table: ", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("creating parse table", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax: ", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax: ", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--default-syntax", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("get-meta: ", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("meta", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("syn", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("** Warning: Meta data ", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" for module ", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" not valid.", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATempty);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-module: ", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("sglri", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("sglri arguments: ", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("atree", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("meta-explode", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-desugar", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--concrete", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-heuristic-filters", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--desugaring", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax syn        use syntax syn", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--default-syntax syn        use syntax syn as default", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_q_8);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent ", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym__2, term_v_7, term_t_8);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--desugaring on/off : turn desugaring on or off (default: on)", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("./", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm pass_verbose_0_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm l_6 (ATerm), ATerm m_6 (ATerm), ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm concat_strings_0_0 (ATerm t);
ATerm get_filename_0_0 (ATerm t);
ATerm check_module_name_0_1 (ATerm b_0, ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm if_not_silent_1_0 (ATerm l_121 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm guarantee_extension_1_0 (ATerm u_112 (ATerm), ATerm t);
ATerm copy_to_1_0 (ATerm p_6 (ATerm), ATerm t);
ATerm if_keep1_1_0 (ATerm w_119 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm c_101 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm z_118 (ATerm), ATerm t);
ATerm is_string_0_0 (ATerm t);
ATerm pass_sort_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm w_101 (ATerm), ATerm t);
ATerm rename_to_1_0 (ATerm o_6 (ATerm), ATerm t);
ATerm map_1_0 (ATerm m_101 (ATerm), ATerm t);
static ATerm e_0 (ATerm t);
static ATerm f_0 (ATerm t);
static ATerm g_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm k_0 (ATerm t);
static ATerm l_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm n_0 (ATerm t);
ATerm get_syntax_definition_0_0 (ATerm t);
ATerm say_1_0 (ATerm q_100 (ATerm), ATerm t);
ATerm find_in_path_0_0 (ATerm t);
ATerm find_in_includes_1_0 (ATerm b_27 (ATerm), ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm r_1 (ATerm t);
ATerm get_parse_table_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm v_118 (ATerm), ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
ATerm get_syntax_0_0 (ATerm t);
ATerm error_0_0 (ATerm t);
ATerm is_list_0_0 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm l_2 (ATerm t);
ATerm get_meta_0_0 (ATerm t);
ATerm basename_0_0 (ATerm t);
ATerm FILE_1_0 (ATerm q_4 (ATerm), ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm w_3 (ATerm t);
ATerm parse_module_0_0 (ATerm t);
ATerm extend_config_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
ATerm set_config_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm g_4 (ATerm), ATerm h_4 (ATerm), ATerm i_4 (ATerm), ATerm t);
ATerm Option_3_0 (ATerm j_4 (ATerm), ATerm k_4 (ATerm), ATerm l_4 (ATerm), ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm parse_stratego_options_0_0 (ATerm t);
ATerm xtc_iowrap_2_0 (ATerm d_6 (ATerm), ATerm e_6 (ATerm), ATerm t);
static ATerm f_5 (ATerm t);
ATerm parse_stratego_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm check_module_name_0_1 (ATerm b_0, ATerm t)
{
  ATerm z_0 = NULL,a_1 = NULL;
  z_0 = t;
  {
    ATerm g_5 = t;
    int h_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Specification_1))
          {
            ATerm i_5 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(h_5);
        t = z_0;
      }
    else
      {
        t = g_5;
        if(match_cons(t, sym_Module_2))
          {
            a_1 = ATgetArgument(t, 0);
            {
              ATerm j_5 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = z_0;
        {
          ATerm k_5 = t;
          int l_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_5 = t;
              if((PushChoice() == 0))
                {
                  t = b_0;
                  t = get_filename_0_0(t);
                  if((a_1 != t))
                    {
                      _fail(t);
                    }
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = m_5;
                }
              t = z_0;
              LocalPopChoice(l_5);
              {
                static ATerm a_0 (ATerm t);
                static ATerm a_0 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_5), a_1), term_o_5), b_0), term_n_5);
                  t = concat_strings_0_0(t);
                  return(t);
                }
                t = say_1_0(a_0, t);
              }
            }
          else
            {
              t = k_5;
            }
        }
      }
  }
  return(t);
}
ATerm pass_sort_0_0 (ATerm t)
{
  ATerm d_1 = NULL;
  ATerm q_5 = t;
  int r_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_1 = NULL,g_1 = NULL;
      f_1 = t;
      if(match_cons(t, sym_Meta_1))
        {
          g_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_1;
      {
        static ATerm c_0 (ATerm t);
        static ATerm c_0 (ATerm t)
        {
          if(match_cons(t, sym_TopSort_1))
            {
              if(((d_1 != NULL) && (d_1 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                d_1 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_elem_1_0(c_0, t);
      }
      t = f_1;
      LocalPopChoice(r_5);
      {
        ATerm h_1 = NULL;
        t = not_null(d_1);
        t = is_string_0_0(t);
        h_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, h_1), term_s_5);
      }
    }
  else
    {
      t = q_5;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm e_0 (ATerm t)
{
  t = debug_1_0(f_0, t);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = term_t_5;
  return(t);
}
static ATerm g_0 (ATerm t)
{
  t = term_u_5;
  return(t);
}
static ATerm h_0 (ATerm t)
{
  t = term_v_5;
  return(t);
}
static ATerm i_0 (ATerm t)
{
  t = say_1_0(j_0, t);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = term_w_5;
  return(t);
}
static ATerm k_0 (ATerm t)
{
  t = term_x_5;
  return(t);
}
static ATerm l_0 (ATerm t)
{
  t = term_y_5;
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = term_z_5;
  t = get_config_0_0(t);
  t = map_1_0(n_0, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm q_1 = NULL;
  q_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_1), term_z_5);
  return(t);
}
ATerm get_syntax_definition_0_0 (ATerm t)
{
  ATerm k_1 = NULL,l_1 = NULL;
  t = if_verbose6_1_0(e_0, t);
  l_1 = t;
  t = guarantee_extension_1_0(g_0, t);
  k_1 = t;
  t = l_1;
  {
    ATerm a_6 = t;
    int b_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_1 = NULL;
        t = k_1;
        t = find_in_includes_1_0(h_0, t);
        m_1 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, m_1);
        LocalPopChoice(b_6);
      }
    else
      {
        t = a_6;
        {
          ATerm o_1 = NULL;
          static ATerm u_0 (ATerm t);
          static ATerm u_0 (ATerm t)
          {
            t = k_1;
            return(t);
          }
          t = if_verbose2_1_0(i_0, t);
          t = guarantee_extension_1_0(k_0, t);
          o_1 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, o_1);
          t = xtc_transform_2_0(l_0, m_0, t);
          t = rename_to_1_0(u_0, t);
        }
      }
  }
  return(t);
}
ATerm find_in_includes_1_0 (ATerm b_27 (ATerm), ATerm t)
{
  ATerm u_1 = NULL,w_1 = NULL;
  static ATerm v_0 (ATerm t);
  static ATerm v_0 (ATerm t)
  {
    t = debug_1_0(b_27, t);
    return(t);
  }
  w_1 = t;
  t = term_z_5;
  t = get_config_0_0(t);
  u_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_1, u_1);
  t = find_in_path_0_0(t);
  t = if_verbose2_1_0(v_0, t);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = debug_1_0(x_0, t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = term_c_6;
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_f_6;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_g_6;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = say_1_0(e_1, t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_h_6;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_i_6;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = debug_1_0(r_1, t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_g_6;
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm z_1 = NULL,d_2 = NULL;
  t = if_verbose6_1_0(w_0, t);
  z_1 = t;
  t = guarantee_extension_1_0(y_0, t);
  d_2 = t;
  {
    ATerm j_6 = t;
    int k_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_2 = NULL;
        t = find_in_includes_1_0(b_1, t);
        e_2 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, e_2);
        LocalPopChoice(k_6);
      }
    else
      {
        t = j_6;
        {
          static ATerm n_1 (ATerm t);
          static ATerm n_1 (ATerm t)
          {
            t = d_2;
            return(t);
          }
          t = if_verbose2_1_0(c_1, t);
          t = z_1;
          t = get_syntax_definition_0_0(t);
          {
            static ATerm j_1 (ATerm t);
            static ATerm j_1 (ATerm t)
            {
              t = (ATerm) ATinsert(ATinsert(ATempty, z_1), term_n_6);
              return(t);
            }
            t = xtc_transform_2_0(i_1, j_1, t);
          }
          t = rename_to_1_0(n_1, t);
        }
      }
  }
  t = if_verbose6_1_0(p_1, t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = debug_1_0(t_1, t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_q_6;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm k_2 = NULL;
  if(match_cons(t, sym_Syntax_1))
    {
      k_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_2;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = debug_1_0(y_1, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_r_6;
  return(t);
}
ATerm get_syntax_0_0 (ATerm t)
{
  t = if_verbose6_1_0(s_1, t);
  {
    ATerm s_6 = t;
    int t_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_2 = NULL;
        if(match_cons(t, sym_Meta_1))
          {
            i_2 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = i_2;
        t = fetch_elem_1_0(v_1, t);
        LocalPopChoice(t_6);
      }
    else
      {
        t = s_6;
        {
          ATerm u_6 = t;
          int v_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_w_6;
              t = get_config_0_0(t);
              LocalPopChoice(v_6);
            }
          else
            {
              t = u_6;
              t = term_x_6;
            }
        }
      }
  }
  t = if_verbose2_1_0(x_1, t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = debug_1_0(b_2, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_y_6;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = guarantee_extension_1_0(f_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_z_6;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = guarantee_extension_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_a_7;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = debug_1_0(l_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_y_6;
  return(t);
}
ATerm get_meta_0_0 (ATerm t)
{
  ATerm p_2 = NULL;
  t = if_verbose6_1_0(a_2, t);
  {
    ATerm b_7 = t;
    int c_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_2 = NULL,a_3 = NULL;
        z_2 = t;
        if(match_cons(t, sym_FILE_1))
          {
            a_3 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = z_2;
        t = FILE_1_0(c_2, t);
        t = read_from_0_0(t);
        {
          ATerm d_7 = t;
          int e_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_0 = NULL;
              o_0 = t;
              {
                ATerm f_7 = t;
                if((PushChoice() == 0))
                  {
                    ATerm p_0 = NULL,q_0 = NULL,r_0 = NULL,s_0 = NULL,d_0 = NULL;
                    s_0 = t;
                    if(match_cons(t, sym_Meta_1))
                      {
                        q_0 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(s_0);
                    p_0 = t;
                    t = q_0;
                    t = is_list_0_0(t);
                    r_0 = t;
                    t = (ATerm) ATmakeAppl(sym_Meta_1, r_0);
                    d_0 = t;
                    t = SSLsetAnnotations(d_0, p_0);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = f_7;
                  }
              }
              t = o_0;
              LocalPopChoice(e_7);
              {
                ATerm t_0 = NULL;
                t_0 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_7), a_3), term_h_7), t_0), term_g_7);
                t = error_0_0(t);
                _fail(t);
              }
            }
          else
            {
              t = d_7;
            }
        }
        LocalPopChoice(c_7);
      }
    else
      {
        t = b_7;
        {
          ATerm j_7 = t;
          int k_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_3 = NULL;
              t = FILE_1_0(g_2, t);
              t = read_from_0_0(t);
              b_3 = t;
              t = SSL_explode_term(b_3);
              if(match_cons(t, sym__2))
                {
                  p_2 = ATgetArgument(t, 0);
                  {
                    ATerm l_7 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Syntax_1, p_2)));
              LocalPopChoice(k_7);
            }
          else
            {
              t = j_7;
              t = term_m_7;
            }
        }
      }
  }
  t = if_verbose6_1_0(j_2, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = debug_1_0(n_2, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_n_7;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_o_7;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  if(match_cons(t, sym_HeuristicFilters_1))
    {
      ATerm p_7 = ATgetArgument(t, 0);
      if(!(match_cons(p_7, sym_Off_0)))
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = debug_1_0(u_2, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_q_7;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_r_7;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_s_7;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL;
  r_3 = t;
  t = pass_verbose_0_0(t);
  s_3 = t;
  t = r_3;
  {
    ATerm t_7 = t;
    int u_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_7;
        t = get_config_0_0(t);
        t = r_3;
        LocalPopChoice(u_7);
        t = (ATerm) ATinsert(ATempty, term_v_7);
      }
    else
      {
        t = t_7;
        t = (ATerm) ATempty;
      }
  }
  t_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_3), s_3);
  t = concat_0_0(t);
  q_3 = t;
  t = (ATerm) ATinsert(CheckATermList(q_3), term_w_7);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_x_7;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm v_3 = NULL;
  t = pass_verbose_0_0(t);
  v_3 = t;
  t = (ATerm) ATinsert(CheckATermList(v_3), term_w_7);
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm e_3 = NULL,f_3 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL;
  t = if_verbose6_1_0(m_2, t);
  e_3 = t;
  if(match_cons(t, sym_FILE_1))
    {
      ATerm y_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_3;
  {
    static ATerm o_2 (ATerm t);
    static ATerm o_2 (ATerm t)
    {
      t = basename_0_0(t);
      if(((h_3 != NULL) && (h_3 != t)))
        _fail(t);
      else
        h_3 = t;
      return(t);
    }
    t = FILE_1_0(o_2, t);
  }
  t = e_3;
  t = get_meta_0_0(t);
  g_3 = t;
  t = get_syntax_0_0(t);
  t = get_parse_table_0_0(t);
  if(match_cons(t, sym_FILE_1))
    {
      f_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_3;
  {
    static ATerm r_2 (ATerm t);
    static ATerm r_2 (ATerm t)
    {
      ATerm j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL;
      k_3 = t;
      {
        ATerm z_7 = t;
        int a_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_v_7;
            t = get_config_0_0(t);
            t = k_3;
            LocalPopChoice(a_8);
            t = (ATerm) ATinsert(ATinsert(ATempty, term_c_8), term_b_8);
          }
        else
          {
            t = z_7;
            t = (ATerm) ATempty;
          }
      }
      l_3 = t;
      t = term_d_8;
      t = pass_verbose_0_0(t);
      m_3 = t;
      t = g_3;
      {
        ATerm e_8 = t;
        int f_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_3 = NULL;
            if(match_cons(t, sym_Meta_1))
              {
                p_3 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = p_3;
            t = fetch_elem_1_0(s_2, t);
            t = g_3;
            LocalPopChoice(f_8);
            t = (ATerm) ATinsert(ATempty, term_g_8);
          }
        else
          {
            t = e_8;
            t = (ATerm) ATempty;
          }
      }
      n_3 = t;
      t = g_3;
      t = pass_sort_0_0(t);
      o_3 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_3), o_3), n_3), m_3);
      t = concat_0_0(t);
      j_3 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(j_3), f_3), term_h_8), term_w_7);
      t = if_verbose6_1_0(t_2, t);
      return(t);
    }
    t = xtc_transform_2_0(q_2, r_2, t);
  }
  {
    static ATerm v_2 (ATerm t);
    static ATerm v_2 (ATerm t)
    {
      static ATerm w_2 (ATerm t);
      static ATerm w_2 (ATerm t)
      {
        t = not_null(h_3);
        t = guarantee_extension_1_0(x_2, t);
        return(t);
      }
      t = copy_to_1_0(w_2, t);
      return(t);
    }
    t = if_keep1_1_0(v_2, t);
  }
  t = xtc_transform_2_0(y_2, c_3, t);
  i_3 = t;
  {
    static ATerm d_3 (ATerm t);
    static ATerm d_3 (ATerm t)
    {
      t = read_from_0_0(t);
      t = check_module_name_0_1(not_null(h_3), t);
      return(t);
    }
    t = if_not_silent_1_0(d_3, t);
  }
  t = i_3;
  {
    ATerm i_8 = t;
    int j_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_8;
        t = get_config_0_0(t);
        t = i_3;
        LocalPopChoice(j_8);
      }
    else
      {
        t = i_8;
        t = xtc_transform_2_0(u_3, w_3, t);
      }
  }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm x_3 = NULL;
  x_3 = t;
  if(match_string(t, "-I"))
    {
      t = x_3;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = x_3;
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm y_3 = NULL;
  y_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_5, (ATerm) ATinsert(ATempty, y_3));
  t = extend_config_0_0(t);
  t = y_3;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_l_8;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--syntax", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm z_3 = NULL;
  z_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_8, z_3);
  t = set_config_0_0(t);
  t = z_3;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_n_8;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--default-syntax", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm a_4 = NULL;
  a_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_6, a_4);
  t = set_config_0_0(t);
  t = a_4;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_o_8;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-silent", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm b_4 = NULL;
  b_4 = t;
  t = term_r_8;
  t = set_config_0_0(t);
  t = b_4;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_s_8;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm c_4 = NULL;
  c_4 = t;
  t = term_u_8;
  t = set_config_0_0(t);
  t = c_4;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_v_7;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--desugaring", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm d_4 = NULL;
  d_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_8, d_4);
  t = set_config_0_0(t);
  t = d_4;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_v_8;
  return(t);
}
ATerm parse_stratego_options_0_0 (ATerm t)
{
  ATerm w_8 = t;
  int x_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(m_4, n_4, o_4, t);
      LocalPopChoice(x_8);
    }
  else
    {
      t = w_8;
      {
        ATerm y_8 = t;
        int z_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_4, r_4, s_4, t);
            LocalPopChoice(z_8);
          }
        else
          {
            t = y_8;
            {
              ATerm a_9 = t;
              int b_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(t_4, u_4, v_4, t);
                  LocalPopChoice(b_9);
                }
              else
                {
                  t = a_9;
                  {
                    ATerm c_9 = t;
                    int d_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(w_4, x_4, y_4, t);
                        LocalPopChoice(d_9);
                      }
                    else
                      {
                        t = c_9;
                        {
                          ATerm e_9 = t;
                          int f_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(z_4, a_5, b_5, t);
                              LocalPopChoice(f_9);
                            }
                          else
                            {
                              t = e_9;
                              t = ArgOption_3_0(c_5, d_5, e_5, t);
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
static ATerm f_5 (ATerm t)
{
  ATerm e_4 = NULL,f_4 = NULL;
  e_4 = t;
  t = term_g_9;
  t = xtc_find_path_0_0(t);
  f_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_5, (ATerm) ATinsert(ATinsert(ATempty, f_4), term_h_9));
  t = extend_config_0_0(t);
  t = e_4;
  t = parse_module_0_0(t);
  return(t);
}
ATerm parse_stratego_0_0 (ATerm t)
{
  t = xtc_iowrap_2_0(parse_stratego_options_0_0, f_5, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = parse_stratego_0_0(t);
  return(t);
}
