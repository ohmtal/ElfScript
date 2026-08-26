/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         CMDparse
#define yylex           CMDlex
#define yyerror         CMDerror
#define yydebug         CMDdebug
#define yynerrs         CMDnerrs
#define yylval          CMDlval
#define yychar          CMDchar
#define yylloc          CMDlloc

/* First part of user prologue.  */
#line 6 "CMDgram.y"


// bison -d -v -p CMD -o CMDgram.cpp -HCMDgram.h CMDgram.y
// OLD: bison --defines=cmdgram.h --verbose -o cmdgram.cpp -p CMD CMDgram.y

// Make sure we don't get gram.h twice.
#define _CMDGRAM_H_

#include <stdlib.h>
#include <stdio.h>
#include "console/console.h"
#include "console/torquescript/compiler.h"
#include "console/consoleInternal.h"
#include "core/strings/stringFunctions.h"

#ifndef YYDEBUG
#define YYDEBUG 0
#endif

#define YYSSIZE 350

int outtext(char *fmt, ...);
extern int serrors;
extern Vector<String> lines;

#define nil 0
#undef YY_ARGS
#define YY_ARGS(x)   x

int CMDlex();
void CMDerror(const char *, ...);


#ifdef alloca
#undef alloca
#endif
#define alloca dMalloc

template< typename T >
struct Token
{
   T value;
//    U32 lineNumber;
   S32 lineNumber;
};

#line 54 "CMDgram.y"

   /* Reserved word token definitions */
#line 73 "CMDgram.y"

   /* Constant and identifier token definitions */
#line 88 "CMDgram.y"

   /* Operator token definitions */

#line 136 "CMDgram.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "CMDgram.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_rwDEFINE = 3,                   /* rwDEFINE  */
  YYSYMBOL_rwENDDEF = 4,                   /* rwENDDEF  */
  YYSYMBOL_rwDECLARE = 5,                  /* rwDECLARE  */
  YYSYMBOL_rwDECLARESINGLETON = 6,         /* rwDECLARESINGLETON  */
  YYSYMBOL_rwBREAK = 7,                    /* rwBREAK  */
  YYSYMBOL_rwELSE = 8,                     /* rwELSE  */
  YYSYMBOL_rwCONTINUE = 9,                 /* rwCONTINUE  */
  YYSYMBOL_rwGLOBAL = 10,                  /* rwGLOBAL  */
  YYSYMBOL_rwIF = 11,                      /* rwIF  */
  YYSYMBOL_rwNIL = 12,                     /* rwNIL  */
  YYSYMBOL_rwRETURN = 13,                  /* rwRETURN  */
  YYSYMBOL_rwWHILE = 14,                   /* rwWHILE  */
  YYSYMBOL_rwDO = 15,                      /* rwDO  */
  YYSYMBOL_rwENDIF = 16,                   /* rwENDIF  */
  YYSYMBOL_rwENDWHILE = 17,                /* rwENDWHILE  */
  YYSYMBOL_rwENDFOR = 18,                  /* rwENDFOR  */
  YYSYMBOL_rwDEFAULT = 19,                 /* rwDEFAULT  */
  YYSYMBOL_rwFOR = 20,                     /* rwFOR  */
  YYSYMBOL_rwFOREACH = 21,                 /* rwFOREACH  */
  YYSYMBOL_rwFOREACHSTR = 22,              /* rwFOREACHSTR  */
  YYSYMBOL_rwIN = 23,                      /* rwIN  */
  YYSYMBOL_rwDATABLOCK = 24,               /* rwDATABLOCK  */
  YYSYMBOL_rwSWITCH = 25,                  /* rwSWITCH  */
  YYSYMBOL_rwCASE = 26,                    /* rwCASE  */
  YYSYMBOL_rwSWITCHSTR = 27,               /* rwSWITCHSTR  */
  YYSYMBOL_rwCASEOR = 28,                  /* rwCASEOR  */
  YYSYMBOL_rwPACKAGE = 29,                 /* rwPACKAGE  */
  YYSYMBOL_rwASSERT = 30,                  /* rwASSERT  */
  YYSYMBOL_ILLEGAL_TOKEN = 31,             /* ILLEGAL_TOKEN  */
  YYSYMBOL_CHRCONST = 32,                  /* CHRCONST  */
  YYSYMBOL_INTCONST = 33,                  /* INTCONST  */
  YYSYMBOL_TTAG = 34,                      /* TTAG  */
  YYSYMBOL_VAR = 35,                       /* VAR  */
  YYSYMBOL_IDENT = 36,                     /* IDENT  */
  YYSYMBOL_TYPEIDENT = 37,                 /* TYPEIDENT  */
  YYSYMBOL_DOCBLOCK = 38,                  /* DOCBLOCK  */
  YYSYMBOL_STRATOM = 39,                   /* STRATOM  */
  YYSYMBOL_TAGATOM = 40,                   /* TAGATOM  */
  YYSYMBOL_FLTCONST = 41,                  /* FLTCONST  */
  YYSYMBOL_42_ = 42,                       /* '+'  */
  YYSYMBOL_43_ = 43,                       /* '-'  */
  YYSYMBOL_44_ = 44,                       /* '*'  */
  YYSYMBOL_45_ = 45,                       /* '/'  */
  YYSYMBOL_46_ = 46,                       /* '<'  */
  YYSYMBOL_47_ = 47,                       /* '>'  */
  YYSYMBOL_48_ = 48,                       /* '='  */
  YYSYMBOL_49_ = 49,                       /* '.'  */
  YYSYMBOL_50_ = 50,                       /* '|'  */
  YYSYMBOL_51_ = 51,                       /* '&'  */
  YYSYMBOL_52_ = 52,                       /* '%'  */
  YYSYMBOL_53_ = 53,                       /* '('  */
  YYSYMBOL_54_ = 54,                       /* ')'  */
  YYSYMBOL_55_ = 55,                       /* ','  */
  YYSYMBOL_56_ = 56,                       /* ':'  */
  YYSYMBOL_57_ = 57,                       /* ';'  */
  YYSYMBOL_58_ = 58,                       /* '{'  */
  YYSYMBOL_59_ = 59,                       /* '}'  */
  YYSYMBOL_60_ = 60,                       /* '^'  */
  YYSYMBOL_61_ = 61,                       /* '~'  */
  YYSYMBOL_62_ = 62,                       /* '!'  */
  YYSYMBOL_63_ = 63,                       /* '@'  */
  YYSYMBOL_opINTNAME = 64,                 /* opINTNAME  */
  YYSYMBOL_opINTNAMER = 65,                /* opINTNAMER  */
  YYSYMBOL_opMINUSMINUS = 66,              /* opMINUSMINUS  */
  YYSYMBOL_opPLUSPLUS = 67,                /* opPLUSPLUS  */
  YYSYMBOL_opSHL = 68,                     /* opSHL  */
  YYSYMBOL_opSHR = 69,                     /* opSHR  */
  YYSYMBOL_opPLASN = 70,                   /* opPLASN  */
  YYSYMBOL_opMIASN = 71,                   /* opMIASN  */
  YYSYMBOL_opMLASN = 72,                   /* opMLASN  */
  YYSYMBOL_opDVASN = 73,                   /* opDVASN  */
  YYSYMBOL_opMODASN = 74,                  /* opMODASN  */
  YYSYMBOL_opANDASN = 75,                  /* opANDASN  */
  YYSYMBOL_opXORASN = 76,                  /* opXORASN  */
  YYSYMBOL_opORASN = 77,                   /* opORASN  */
  YYSYMBOL_opSLASN = 78,                   /* opSLASN  */
  YYSYMBOL_opSRASN = 79,                   /* opSRASN  */
  YYSYMBOL_opCAT = 80,                     /* opCAT  */
  YYSYMBOL_opEQ = 81,                      /* opEQ  */
  YYSYMBOL_opNE = 82,                      /* opNE  */
  YYSYMBOL_opGE = 83,                      /* opGE  */
  YYSYMBOL_opLE = 84,                      /* opLE  */
  YYSYMBOL_opAND = 85,                     /* opAND  */
  YYSYMBOL_opOR = 86,                      /* opOR  */
  YYSYMBOL_opSTREQ = 87,                   /* opSTREQ  */
  YYSYMBOL_opSTRNE = 88,                   /* opSTRNE  */
  YYSYMBOL_opCOLONCOLON = 89,              /* opCOLONCOLON  */
  YYSYMBOL_opDOTDOT = 90,                  /* opDOTDOT  */
  YYSYMBOL_rwRANGE = 91,                   /* rwRANGE  */
  YYSYMBOL_rwSTEP = 92,                    /* rwSTEP  */
  YYSYMBOL_rwPRINT = 93,                   /* rwPRINT  */
  YYSYMBOL_rwPRINTF = 94,                  /* rwPRINTF  */
  YYSYMBOL_rwSPRINTF = 95,                 /* rwSPRINTF  */
  YYSYMBOL_rwRANDOMF = 96,                 /* rwRANDOMF  */
  YYSYMBOL_rwFLOOR = 97,                   /* rwFLOOR  */
  YYSYMBOL_rwCEIL = 98,                    /* rwCEIL  */
  YYSYMBOL_rwFABS = 99,                    /* rwFABS  */
  YYSYMBOL_rwSIN = 100,                    /* rwSIN  */
  YYSYMBOL_rwCOS = 101,                    /* rwCOS  */
  YYSYMBOL_rwATAN = 102,                   /* rwATAN  */
  YYSYMBOL_rwTANH = 103,                   /* rwTANH  */
  YYSYMBOL_rwSQRT = 104,                   /* rwSQRT  */
  YYSYMBOL_rwISZERO = 105,                 /* rwISZERO  */
  YYSYMBOL_rwFMOD = 106,                   /* rwFMOD  */
  YYSYMBOL_rwMIN = 107,                    /* rwMIN  */
  YYSYMBOL_rwMAX = 108,                    /* rwMAX  */
  YYSYMBOL_rwATAN2 = 109,                  /* rwATAN2  */
  YYSYMBOL_rwPOW = 110,                    /* rwPOW  */
  YYSYMBOL_rwCLAMPF = 111,                 /* rwCLAMPF  */
  YYSYMBOL_rwLERP = 112,                   /* rwLERP  */
  YYSYMBOL_rwSMOOTHSTEP = 113,             /* rwSMOOTHSTEP  */
  YYSYMBOL_114_ = 114,                     /* '['  */
  YYSYMBOL_115_ = 115,                     /* '?'  */
  YYSYMBOL_UNARY = 116,                    /* UNARY  */
  YYSYMBOL_117_ = 117,                     /* ']'  */
  YYSYMBOL_YYACCEPT = 118,                 /* $accept  */
  YYSYMBOL_start = 119,                    /* start  */
  YYSYMBOL_decl_list = 120,                /* decl_list  */
  YYSYMBOL_decl = 121,                     /* decl  */
  YYSYMBOL_package_decl = 122,             /* package_decl  */
  YYSYMBOL_fn_decl_list = 123,             /* fn_decl_list  */
  YYSYMBOL_statement_list = 124,           /* statement_list  */
  YYSYMBOL_stmt = 125,                     /* stmt  */
  YYSYMBOL_fn_decl_stmt = 126,             /* fn_decl_stmt  */
  YYSYMBOL_var_list_decl = 127,            /* var_list_decl  */
  YYSYMBOL_var_list = 128,                 /* var_list  */
  YYSYMBOL_param = 129,                    /* param  */
  YYSYMBOL_datablock_decl = 130,           /* datablock_decl  */
  YYSYMBOL_object_decl = 131,              /* object_decl  */
  YYSYMBOL_parent_block = 132,             /* parent_block  */
  YYSYMBOL_object_name = 133,              /* object_name  */
  YYSYMBOL_object_args = 134,              /* object_args  */
  YYSYMBOL_object_declare_block = 135,     /* object_declare_block  */
  YYSYMBOL_object_decl_list = 136,         /* object_decl_list  */
  YYSYMBOL_stmt_block = 137,               /* stmt_block  */
  YYSYMBOL_switch_stmt = 138,              /* switch_stmt  */
  YYSYMBOL_case_block = 139,               /* case_block  */
  YYSYMBOL_case_expr = 140,                /* case_expr  */
  YYSYMBOL_if_stmt = 141,                  /* if_stmt  */
  YYSYMBOL_while_stmt = 142,               /* while_stmt  */
  YYSYMBOL_for_stmt = 143,                 /* for_stmt  */
  YYSYMBOL_foreach_stmt = 144,             /* foreach_stmt  */
  YYSYMBOL_expression_stmt = 145,          /* expression_stmt  */
  YYSYMBOL_expr = 146,                     /* expr  */
  YYSYMBOL_slot_acc = 147,                 /* slot_acc  */
  YYSYMBOL_intslot_acc = 148,              /* intslot_acc  */
  YYSYMBOL_class_name_expr = 149,          /* class_name_expr  */
  YYSYMBOL_assign_op_struct = 150,         /* assign_op_struct  */
  YYSYMBOL_stmt_expr = 151,                /* stmt_expr  */
  YYSYMBOL_funcall_expr = 152,             /* funcall_expr  */
  YYSYMBOL_func_arg_item = 153,            /* func_arg_item  */
  YYSYMBOL_func_arg_list = 154,            /* func_arg_list  */
  YYSYMBOL_func_arg_list_decl = 155,       /* func_arg_list_decl  */
  YYSYMBOL_assert_expr = 156,              /* assert_expr  */
  YYSYMBOL_inline_command_expr = 157,      /* inline_command_expr  */
  YYSYMBOL_expr_list = 158,                /* expr_list  */
  YYSYMBOL_slot_assign_list_opt = 159,     /* slot_assign_list_opt  */
  YYSYMBOL_slot_assign_list = 160,         /* slot_assign_list  */
  YYSYMBOL_slot_assign = 161,              /* slot_assign  */
  YYSYMBOL_aidx_expr = 162                 /* aidx_expr  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5178

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  118
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  209
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  544

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   347


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    62,     2,     2,     2,    52,    51,     2,
      53,    54,    44,    42,    55,    43,    49,    45,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    56,    57,
      46,    48,    47,   115,    63,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   114,     2,   117,    60,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    58,    50,    59,    61,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   116
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   216,   216,   222,   223,   228,   230,   232,   237,   242,
     244,   250,   251,   256,   257,   258,   259,   260,   261,   262,
     264,   266,   268,   271,   281,   283,   285,   287,   293,   296,
     302,   303,   308,   310,   327,   329,   331,   333,   338,   343,
     345,   347,   349,   351,   353,   359,   360,   366,   367,   373,
     374,   380,   381,   383,   385,   390,   392,   397,   399,   404,
     406,   414,   416,   418,   423,   425,   430,   432,   437,   439,
     444,   446,   448,   450,   452,   454,   456,   458,   462,   465,
     468,   471,   474,   485,   488,   491,   494,   497,   500,   503,
     508,   513,   515,   517,   519,   521,   523,   525,   527,   529,
     531,   533,   535,   537,   539,   541,   543,   545,   547,   549,
     551,   553,   555,   557,   559,   561,   563,   571,   573,   575,
     577,   579,   581,   583,   585,   587,   589,   591,   593,   595,
     601,   603,   608,   610,   615,   617,   622,   624,   626,   628,
     630,   632,   634,   636,   638,   640,   642,   644,   650,   652,
     654,   656,   658,   662,   670,   674,   682,   684,   686,   688,
     690,   722,   725,   728,   734,   736,   748,   750,   756,   757,
     778,   780,   787,   789,   791,   793,   795,   797,   799,   801,
     803,   805,   807,   809,   811,   813,   815,   817,   819,   821,
     823,   825,   827,   829,   841,   843,   849,   850,   855,   857,
     863,   867,   878,   882,   893,   895,   899,   910,   933,   935
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  static const char *const yy_sname[] =
  {
  "end of file", "error", "invalid token", "rwDEFINE", "rwENDDEF",
  "rwDECLARE", "rwDECLARESINGLETON", "rwBREAK", "rwELSE", "rwCONTINUE",
  "rwGLOBAL", "rwIF", "rwNIL", "rwRETURN", "rwWHILE", "rwDO", "rwENDIF",
  "rwENDWHILE", "rwENDFOR", "rwDEFAULT", "rwFOR", "rwFOREACH",
  "rwFOREACHSTR", "rwIN", "rwDATABLOCK", "rwSWITCH", "rwCASE",
  "rwSWITCHSTR", "rwCASEOR", "rwPACKAGE", "rwASSERT", "ILLEGAL_TOKEN",
  "CHRCONST", "INTCONST", "TTAG", "VAR", "IDENT", "TYPEIDENT", "DOCBLOCK",
  "STRATOM", "TAGATOM", "FLTCONST", "'+'", "'-'", "'*'", "'/'", "'<'",
  "'>'", "'='", "'.'", "'|'", "'&'", "'%'", "'('", "')'", "','", "':'",
  "';'", "'{'", "'}'", "'^'", "'~'", "'!'", "'@'", "opINTNAME",
  "opINTNAMER", "opMINUSMINUS", "opPLUSPLUS", "opSHL", "opSHR", "opPLASN",
  "opMIASN", "opMLASN", "opDVASN", "opMODASN", "opANDASN", "opXORASN",
  "opORASN", "opSLASN", "opSRASN", "opCAT", "opEQ", "opNE", "opGE", "opLE",
  "opAND", "opOR", "opSTREQ", "opSTRNE", "opCOLONCOLON", "opDOTDOT",
  "rwRANGE", "rwSTEP", "rwPRINT", "rwPRINTF", "rwSPRINTF", "rwRANDOMF",
  "rwFLOOR", "rwCEIL", "rwFABS", "rwSIN", "rwCOS", "rwATAN", "rwTANH",
  "rwSQRT", "rwISZERO", "rwFMOD", "rwMIN", "rwMAX", "rwATAN2", "rwPOW",
  "rwCLAMPF", "rwLERP", "rwSMOOTHSTEP", "'['", "'?'", "UNARY", "']'",
  "$accept", "start", "decl_list", "decl", "package_decl", "fn_decl_list",
  "statement_list", "stmt", "fn_decl_stmt", "var_list_decl", "var_list",
  "param", "datablock_decl", "object_decl", "parent_block", "object_name",
  "object_args", "object_declare_block", "object_decl_list", "stmt_block",
  "switch_stmt", "case_block", "case_expr", "if_stmt", "while_stmt",
  "for_stmt", "foreach_stmt", "expression_stmt", "expr", "slot_acc",
  "intslot_acc", "class_name_expr", "assign_op_struct", "stmt_expr",
  "funcall_expr", "func_arg_item", "func_arg_list", "func_arg_list_decl",
  "assert_expr", "inline_command_expr", "expr_list",
  "slot_assign_list_opt", "slot_assign_list", "slot_assign", "aidx_expr", YY_NULLPTR
  };
  return yy_sname[yysymbol];
}
#endif

#define YYPACT_NINF (-413)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-91)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -413,    59,   222,  -413,    46,    24,    24,    33,    40,    73,
    1513,    86,   993,    94,   104,   107,    24,   125,   131,    76,
     143,  -413,   176,    58,    -3,  -413,  -413,  -413,  -413,  3075,
    3075,  3075,  3075,  3075,   177,   179,   186,   188,   192,   195,
     197,   206,   211,   219,   229,   242,   258,   261,   289,   295,
     296,   297,   298,   299,   300,  -413,  -413,  -413,  -413,  -413,
    -413,  -413,  -413,  -413,  -413,  -413,    64,  4995,   137,  -413,
      95,  -413,  -413,  -413,     0,  -413,  3075,   307,   309,  -413,
    -413,  3075,  -413,  -413,  -413,  3075,  3602,  -413,  3075,  -413,
    -413,   264,  1597,   250,   328,   313,  3075,  3075,   310,  3075,
    3075,  1681,  -413,  -413,  3075,  3075,  3075,  3075,  3075,  3075,
    3075,  3075,  3075,  3075,  3075,  -413,  1765,   329,    35,    35,
    3650,    35,    35,  3075,  3075,  3075,  1849,  3075,  3075,  3075,
    3075,  3075,  3075,  3075,  3075,  3075,  3075,  3075,  3075,  3075,
    3075,  3075,  3075,  3075,  -413,  3075,  3075,  3075,  3075,  3075,
    3075,   331,  3075,  3075,  3075,  3075,  3075,    24,    24,  3075,
    3075,  3075,  3075,  3075,  3075,  3075,  3075,  3075,  3075,  3075,
    1933,  -413,   334,   335,  3698,   883,  3075,  3746,  4995,    -4,
    -413,  3794,  1102,   317,    -9,  2017,  3842,   349,   350,  3075,
    3890,  3938,   371,  3147,  3195,  3075,  4995,  4995,  4995,  4995,
    4995,  4995,  4995,  4995,  4995,  4995,  4995,  4995,   -42,  3075,
    4995,  -413,   323,   332,   330,  -413,    41,   113,   120,  -413,
     132,   136,   138,   144,   146,   151,   163,   165,   167,   199,
     226,   232,   237,   245,   282,   284,   286,   290,    97,    97,
      35,    35,   225,   225,   -13,   996,  1105,    35,   751,   422,
    -413,  -413,   387,   387,   312,   312,   225,   225,   813,  5090,
     422,   422,  3986,  3075,  4995,   -36,   336,   327,  -413,   339,
    -413,  3075,   333,  4995,   333,   993,  3075,   340,   993,  -413,
    -413,  3075,  2101,  2210,  4034,  2294,  2378,  3075,  4082,   343,
     344,    39,  -413,  -413,   359,  3075,  -413,    19,  3075,   231,
      28,  1765,  -413,  1765,  -413,  -413,  -413,  -413,  -413,  -413,
    -413,  -413,  -413,  -413,  -413,  -413,  -413,  -413,  -413,  -413,
    -413,  -413,  -413,  -413,  -413,  1765,  3075,  3075,    60,  3075,
     355,   346,   334,   334,   271,   369,   351,   351,   401,  4995,
    -413,  -413,  4130,  3075,  4178,   993,  4227,  2487,  2571,  4275,
    3075,  3243,  4323,   356,   385,   385,   358,  -413,   362,  4371,
    -413,  4995,  2655,  -413,  -413,  -413,   363,   364,   -14,  5043,
    -413,  4995,  3075,  -413,  -413,   366,   333,  -413,  3075,   373,
     374,   993,  -413,  3292,  3075,  -413,   993,   993,  4419,   993,
    4467,  2739,  3341,   993,  3075,   993,   365,  3075,   354,   375,
    -413,  -413,  -413,  3075,  4995,  -413,  -413,  -413,  4995,  1211,
     367,   351,   378,   377,   380,  -413,   993,  3075,  3390,  -413,
    -413,   993,  -413,   993,   993,  4515,   993,  3075,  -413,  3443,
    -413,    56,    17,  4995,  -413,  -413,    68,  -413,  -413,   386,
     158,   158,  -413,  3496,   993,  3075,  -413,  -413,  -413,   993,
    -413,  3549,   993,  3075,   393,   -33,   407,   389,    56,  -413,
    3075,  -413,  -413,  1320,   388,   392,   394,   341,   158,   395,
     993,  3075,  -413,  4563,  -413,   993,  3075,  -413,  4611,  3075,
    2823,  3075,    -5,   398,  -413,  4995,   638,  -413,   158,  -413,
    -413,   406,   341,  -413,  -413,  4659,   993,  -413,  4707,   993,
    4755,  3075,  4803,    -7,  2907,  3075,  -413,   413,  -413,   411,
    -413,   993,  -413,   993,  -413,  -413,    99,  -413,   396,  3075,
    4851,    -6,  -413,  -413,  -413,  -413,   415,  2991,   111,  -413,
     397,  1429,  -413,  3075,  4899,   418,  3075,   118,  -413,  -413,
    4947,   419,  -413,  -413
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     2,     1,     0,     0,     0,   123,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   122,   103,   128,   126,    27,   127,   120,   121,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     7,     5,     6,    17,
     151,    18,    13,    14,    15,    16,     0,     0,   124,   125,
      91,   148,   149,   150,     0,   134,     0,     0,     0,    19,
      20,     0,   123,   103,    21,     0,     0,    91,     0,    11,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   137,   136,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   156,   168,     0,   101,   102,
       0,   119,   118,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   158,    30,     0,     0,    47,    47,     0,   194,     0,
      22,     0,     0,     0,   128,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   152,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   208,     0,     0,
     164,   166,   169,     0,     0,    92,     0,     0,     0,   175,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    97,    98,
      99,   100,   105,   106,   130,    96,    95,    94,    93,   117,
     132,   133,   112,   113,   109,   110,   107,   108,   114,   111,
     115,   116,     0,     0,   159,    34,     0,    31,    32,     0,
     135,    47,    45,    48,    45,     0,     0,     0,     0,    57,
      12,     0,     0,     0,     0,     0,     0,     0,    45,     0,
       0,     0,     9,   170,     0,     0,    25,     0,     0,   129,
       0,     0,   161,   168,   172,   173,   174,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   168,     0,     0,     0,     0,
      35,     0,     0,    30,     0,     0,    49,    49,    66,   195,
      23,    68,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,     0,     0,
     153,   209,     0,   157,   165,   167,     0,     0,     0,   104,
     160,    36,     0,    11,    33,     0,    45,    46,     0,     0,
       0,     0,    69,     0,     0,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       8,   171,    26,     0,   154,   162,   163,   131,    37,     0,
       0,    49,    50,    40,    44,    67,     0,     0,     0,    76,
      75,     0,    73,     0,     0,     0,     0,     0,    83,     0,
      84,   196,     0,    64,    59,    60,     0,    28,    11,     0,
      51,    51,    82,     0,     0,     0,    74,    72,    71,     0,
      89,     0,     0,     0,     0,     0,     0,     0,   197,   198,
       0,    11,   155,     0,    42,     0,     0,    53,    52,     0,
       0,     0,    78,     0,    70,     0,     0,    85,     0,     0,
       0,     0,     0,     0,   199,    65,    61,    29,    51,    55,
      39,     0,    54,    43,    79,     0,     0,    86,     0,     0,
       0,     0,     0,     0,     0,     0,    38,     0,    63,     0,
      56,     0,    80,     0,    87,   204,     0,   200,     0,     0,
       0,     0,    11,    41,    81,    88,     0,     0,     0,   202,
       0,    62,   201,     0,     0,     0,     0,     0,   205,   203,
       0,     0,   207,   206
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -413,  -413,  -413,  -413,  -413,  -413,  -367,    -1,  -184,   145,
    -413,   147,  -413,  -323,  -236,  -167,  -326,  -397,     9,  -273,
    -413,  -348,  -413,  -413,  -413,  -413,  -413,  -413,   427,  -413,
    -413,    31,   -65,    -2,  -413,   180,  -413,  -249,  -413,  -413,
    -107,  -413,    49,  -412,  -322
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,    55,    56,   291,   182,    90,    58,   266,
     267,   268,    59,    60,   336,   272,   379,   466,   467,    91,
      61,   398,   432,    62,    63,    64,    65,    66,    67,    68,
      69,    77,   115,    87,    71,   211,   212,   213,    72,    73,
     179,   457,   468,   459,   208
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      70,    57,   338,   171,   368,   341,   409,   399,   292,   274,
      70,   380,   329,   298,   282,   480,   216,   217,   218,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,    78,   337,   101,
     325,   298,     4,   504,   469,   460,   484,    95,   298,   298,
     116,   276,   353,   172,   366,   277,   484,   102,   103,     3,
      75,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   463,   385,   461,   276,   299,   367,    76,   360,   330,
     454,   481,    74,   276,   151,   439,   117,   364,   297,   173,
      79,   509,   455,   456,   486,   304,   276,    80,   356,   157,
     158,   326,   300,   407,   334,   114,   101,   357,   415,   505,
     518,   530,    98,   419,   420,   276,   422,   465,   465,   370,
     428,   144,   430,   276,   102,   103,    81,   462,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   508,    88,
     411,   147,   148,   442,   491,   465,   151,    92,   446,   154,
     447,   448,   -90,   450,   276,   531,   328,    93,   526,   503,
      94,   157,   158,     5,     6,   465,   276,   305,   276,   491,
     535,   472,   114,   276,   306,   276,   474,   541,    96,   477,
      70,   280,   454,   521,    97,   170,   307,   276,   250,   251,
     308,   276,   309,   276,   455,   456,    99,   494,   310,   276,
     311,   276,   497,   102,   103,   312,   276,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   313,   276,   314,
     276,   315,   276,   512,   100,     4,   514,     5,     6,     7,
     123,     8,   124,     9,   363,    10,    11,    12,   524,   125,
     525,   126,    13,    14,    15,   127,    16,    17,   128,    18,
     129,    19,    20,   316,   276,    21,    22,    23,    24,   130,
      25,    26,    27,    28,   131,    29,    30,   145,   146,   147,
     148,   412,   132,    70,   151,    31,    70,   154,   183,   362,
     317,   276,   133,    32,    33,   187,   318,   276,   156,   157,
     158,   319,   276,   159,   160,   134,   436,   102,   103,   320,
     276,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   135,   167,   168,   136,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,   321,   276,   322,   276,
     323,   276,   137,    70,   324,   276,     5,     6,   138,   139,
     140,   141,   142,   143,   145,   146,   147,   148,   149,   150,
     175,   151,   176,   188,   154,   214,   189,   244,   192,   265,
     281,   269,   286,   287,     4,   156,   157,   158,   301,    70,
     159,   160,   332,   303,    70,    70,   302,    70,   376,   335,
     331,    70,   333,    70,   516,   163,   164,   340,   358,   167,
     168,   354,   355,   372,   373,   377,   378,    70,   280,   381,
     396,   397,   528,   434,    70,   400,   401,   405,   406,    70,
     410,    70,    70,   431,    70,   438,   537,   413,   414,   145,
     146,   147,   148,   276,   435,   440,   151,    86,   441,   154,
     464,   479,    70,   482,   527,   536,   488,    70,   483,   489,
      70,   157,   158,   490,   493,   506,   118,   119,   120,   121,
     122,    70,   280,   510,   145,   146,   147,   148,    70,   522,
     523,   151,   532,    70,   154,   539,   543,   492,   375,   374,
     458,   365,     0,     0,    70,   280,   157,   158,     0,     0,
     159,   160,     0,     0,    70,     0,     0,    70,     0,     0,
       0,     0,     0,   174,     0,     0,     0,     0,   177,    70,
       0,    70,   178,     0,     0,   181,     0,     0,     0,   186,
       0,     0,     0,   190,   191,     0,   193,   194,   196,    70,
     280,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,     0,   210,     0,     0,     0,     0,     0,     0,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,     0,   238,   239,   240,   241,   242,   243,     0,   245,
     246,   247,   248,   249,     0,     0,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   264,     0,     0,
       0,     0,   273,   273,     0,     0,     0,     0,     0,     0,
       0,     0,   284,     0,     0,     0,   288,     0,     0,     0,
       0,     0,   178,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   178,     0,     0,     0,
       0,     0,     0,     5,     6,     7,     0,     8,     0,     9,
       0,    10,    11,    12,     0,     0,     0,   507,    13,    14,
      15,     0,    16,    17,   397,    18,     0,     0,    20,     0,
       0,    21,    22,    23,    24,     0,    25,    26,    27,    28,
       0,    29,    30,     0,     0,     0,     0,     0,     0,     0,
     178,    31,     0,     0,     0,     0,     0,     0,   273,    32,
      33,     0,     0,   339,     0,     0,     0,     0,   342,   344,
     346,     0,   349,   351,   352,     0,     0,     0,     0,     0,
       0,     0,   359,     0,     0,   361,     0,     0,   210,     0,
     210,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,   210,   207,   369,     0,   371,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     383,     0,     0,     0,   388,   390,     0,   392,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   404,
       0,     0,     0,   145,   146,   147,   148,   149,   150,   408,
     151,     0,   153,   154,     0,   178,     0,     0,     0,     0,
       0,   418,     0,     0,   156,   157,   158,     0,   425,   159,
     160,   429,     0,     0,   433,     0,     0,     0,     0,     0,
     178,     0,   161,   162,   163,   164,     0,     0,   167,   168,
       0,     0,     0,     0,   443,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   451,   145,   146,   147,   148,   149,
     150,     0,   151,   152,   153,   154,     0,     0,     0,     0,
       0,     0,   473,   155,     0,     0,   156,   157,   158,     0,
     478,   159,   160,     0,     0,     0,     0,   485,     5,     6,
      82,     0,     0,     0,   161,   162,   163,   164,   495,     0,
     167,   168,     0,   498,     0,     0,   500,   502,   207,     0,
       0,     0,     0,    20,     0,     0,    21,    83,    23,    24,
       0,     0,    26,    27,    28,     0,    29,    30,   178,     0,
       0,   520,   207,     0,     0,     0,    31,     0,     0,     0,
       0,     0,     0,     0,    32,    33,   178,     0,     0,     0,
       0,     0,     0,     0,   534,     0,     0,     0,     0,     0,
     178,     0,     0,   540,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,   271,     5,     6,
       7,     0,     8,     0,     9,     0,    10,    11,    12,     0,
       0,     0,     0,    13,    14,    15,     0,    16,    17,     0,
      18,     0,     0,    20,     0,     0,    21,    22,    23,    24,
       0,    25,    26,    27,    28,     0,    29,    30,   145,   146,
     147,   148,   149,   150,     0,   151,    31,   153,   154,     0,
       0,    89,     0,     0,    32,    33,   155,     0,     0,   156,
     157,   158,     0,     0,   159,   160,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   161,   162,   163,
     164,     0,     0,   167,   168,     0,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,     5,     6,     7,
       0,     8,     0,     9,     0,    10,    11,    12,     0,     0,
       0,     0,    13,    14,    15,     0,    16,    17,     0,    18,
       0,     0,    20,     0,     0,    21,    22,    23,    24,     0,
      25,    26,    27,    28,     0,    29,    30,   145,   146,   147,
     148,   149,   150,     0,   151,    31,     0,   154,     0,     0,
       0,   279,     0,    32,    33,     0,     0,     0,   156,   157,
     158,     0,     0,   159,   160,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   161,   162,   163,   164,
       0,     0,   167,   168,     0,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,     5,     6,     7,     0,
       8,     0,     9,     0,    10,    11,    12,     0,     0,     0,
       0,    13,    14,    15,     0,    16,    17,     0,    18,     0,
       0,    20,     0,     0,    21,    22,    23,    24,     0,    25,
      26,    27,    28,     0,    29,    30,     0,     0,     0,     0,
       0,     0,     0,     0,    31,     0,     0,     0,     0,     0,
     437,     0,    32,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,     5,     6,     7,     0,     8,
       0,     9,     0,    10,    11,    12,     0,     0,     0,     0,
      13,    14,    15,     0,    16,    17,     0,    18,     0,     0,
      20,     0,     0,    21,    22,    23,    24,     0,    25,    26,
      27,    28,     0,    29,    30,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     0,     0,     0,     0,   487,
       0,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     5,     6,     7,     0,     8,     0,
       9,     0,    10,    11,    12,     0,     0,     0,     0,    13,
      14,    15,     0,    16,    17,     0,    18,     0,     0,    20,
       0,     0,    21,    22,    23,    24,     0,    25,    26,    27,
      28,     0,    29,    30,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,     0,     0,     0,     0,     0,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
      82,     0,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    20,     0,     0,    21,    83,    23,    24,
       0,     0,    26,    27,    28,     0,    29,    30,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,     0,     0,
      84,    85,     0,     0,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     6,    82,     0,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    20,     0,     0,
      21,    83,   184,    24,     0,     0,    26,    27,    28,     0,
      29,    30,     0,     0,     0,     0,     0,     0,     0,     0,
      31,     0,     0,     0,   185,     0,     0,     0,    32,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     5,     6,    82,     0,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    20,     0,     0,    21,    83,    23,    24,     0,     0,
      26,    27,    28,     0,    29,    30,     0,     0,     0,     0,
       0,     0,     0,     0,    31,     0,     0,     0,     0,   195,
       0,     0,    32,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     6,    82,     0,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    20,     0,     0,    21,    83,
      23,    24,     0,     0,    26,    27,    28,     0,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
       0,     0,     0,   209,     0,     0,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,    82,     0,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    20,
       0,     0,    21,    83,    23,    24,     0,     0,    26,    27,
      28,     0,    29,    30,     0,     0,     0,     0,     0,     0,
       0,     0,    31,   219,     0,     0,     0,     0,     0,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
      82,     0,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    20,     0,     0,    21,    83,    23,    24,
       0,     0,    26,    27,    28,     0,    29,    30,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,     0,     0,
       0,   263,     0,     0,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     6,    82,     0,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    20,     0,     0,
      21,    83,    23,    24,     0,     0,    26,    27,    28,     0,
      29,    30,     0,     0,     0,     0,     0,     0,     0,     0,
      31,     0,     0,     0,   283,     0,     0,     0,    32,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     5,     6,    82,     0,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    20,     0,     0,    21,    83,    23,    24,     0,     0,
      26,    27,    28,     0,    29,    30,     0,     0,     0,     0,
       0,     0,     0,     0,    31,     0,     0,     0,     0,     0,
       0,     0,    32,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   343,     0,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,     5,     6,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      20,     0,     0,    21,    83,    23,    24,     0,     0,    26,
      27,    28,     0,    29,    30,     0,     0,     0,     0,     0,
       0,     0,     0,    31,   345,     0,     0,     0,     0,     0,
       0,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       6,    82,     0,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    20,     0,     0,    21,    83,    23,
      24,     0,     0,    26,    27,    28,     0,    29,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    31,     0,     0,
       0,   348,     0,     0,     0,    32,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     6,    82,     0,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    20,     0,
       0,    21,    83,    23,    24,     0,     0,    26,    27,    28,
       0,    29,    30,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     0,     0,     0,     0,     0,     0,     0,    32,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   350,
       0,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,     5,     6,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,     0,     0,
      21,    83,    23,    24,     0,     0,    26,    27,    28,     0,
      29,    30,     0,     0,     0,     0,     0,     0,     0,     0,
      31,   387,     0,     0,     0,     0,     0,     0,    32,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     5,     6,    82,     0,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    20,     0,     0,    21,    83,    23,    24,     0,     0,
      26,    27,    28,     0,    29,    30,     0,     0,     0,     0,
       0,     0,     0,     0,    31,   389,     0,     0,     0,     0,
       0,     0,    32,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     6,    82,     0,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    20,     0,     0,    21,    83,
      23,    24,     0,     0,    26,    27,    28,     0,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
       0,     0,     0,   403,     0,     0,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,    82,     0,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    20,
       0,     0,    21,    83,    23,    24,     0,     0,    26,    27,
      28,     0,    29,    30,     0,     0,     0,     0,     0,     0,
       0,     0,    31,   424,     0,     0,     0,     0,     0,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
      82,     0,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    20,     0,     0,    21,    83,    23,    24,
       0,     0,    26,    27,    28,     0,    29,    30,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,     0,     0,
       0,   501,     0,     0,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     6,    82,     0,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    20,     0,     0,
      21,    83,    23,    24,     0,     0,    26,    27,    28,     0,
      29,    30,     0,     0,     0,     0,     0,     0,     0,     0,
      31,     0,     0,     0,     0,   519,     0,     0,    32,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     5,     6,    82,     0,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    20,     0,     0,    21,    83,    23,    24,     0,     0,
      26,    27,    28,     0,    29,    30,     0,     0,     0,     0,
       0,     0,     0,     0,    31,     0,     0,     0,     0,   533,
       0,     0,    32,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     6,    82,     0,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    20,     0,     0,    21,    83,
      23,    24,     0,     0,    26,    27,    28,     0,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
       0,     0,     0,     0,     0,     0,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,   145,
     146,   147,   148,   149,   150,     0,   151,   152,   153,   154,
       0,   293,   294,     0,     0,     0,     0,   155,     0,     0,
     156,   157,   158,     0,     0,   159,   160,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   161,   162,
     163,   164,   165,   166,   167,   168,     0,   145,   146,   147,
     148,   149,   150,     0,   151,   152,   153,   154,     0,     0,
     295,     0,   296,     0,     0,   155,     0,     0,   156,   157,
     158,     0,   169,   159,   160,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   161,   162,   163,   164,
     165,   166,   167,   168,     0,   145,   146,   147,   148,   149,
     150,     0,   151,   152,   153,   154,     0,   393,     0,     0,
       0,     0,     0,   155,     0,     0,   156,   157,   158,     0,
     169,   159,   160,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   161,   162,   163,   164,   165,   166,
     167,   168,     0,   394,   145,   146,   147,   148,   149,   150,
       0,   151,   152,   153,   154,     0,   416,     0,     0,     0,
       0,     0,   155,     0,     0,   156,   157,   158,   169,     0,
     159,   160,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   161,   162,   163,   164,   165,   166,   167,
     168,     0,   417,   145,   146,   147,   148,   149,   150,     0,
     151,   152,   153,   154,     0,   426,     0,     0,     0,     0,
       0,   155,     0,     0,   156,   157,   158,   169,     0,   159,
     160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   161,   162,   163,   164,   165,   166,   167,   168,
       0,   427,   145,   146,   147,   148,   149,   150,     0,   151,
     152,   153,   154,     0,   444,     0,     0,     0,     0,     0,
     155,     0,     0,   156,   157,   158,   169,     0,   159,   160,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   161,   162,   163,   164,   165,   166,   167,   168,     0,
       0,     0,   445,     0,     0,   145,   146,   147,   148,   149,
     150,     0,   151,   152,   153,   154,     0,   452,     0,     0,
       0,     0,     0,   155,     0,   169,   156,   157,   158,     0,
       0,   159,   160,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   161,   162,   163,   164,   165,   166,
     167,   168,     0,     0,     0,   453,     0,     0,   145,   146,
     147,   148,   149,   150,     0,   151,   152,   153,   154,     0,
     470,     0,     0,     0,     0,     0,   155,     0,   169,   156,
     157,   158,     0,     0,   159,   160,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   161,   162,   163,
     164,   165,   166,   167,   168,     0,     0,     0,   471,     0,
       0,   145,   146,   147,   148,   149,   150,     0,   151,   152,
     153,   154,     0,   475,     0,     0,     0,     0,     0,   155,
       0,   169,   156,   157,   158,     0,     0,   159,   160,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     161,   162,   163,   164,   165,   166,   167,   168,     0,     0,
       0,   476,     0,     0,   145,   146,   147,   148,   149,   150,
       0,   151,   152,   153,   154,     0,     0,     0,     0,   180,
       0,     0,   155,     0,   169,   156,   157,   158,     0,     0,
     159,   160,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   161,   162,   163,   164,   165,   166,   167,
     168,     0,   145,   146,   147,   148,   149,   150,     0,   151,
     152,   153,   154,     0,   215,     0,     0,     0,     0,     0,
     155,     0,     0,   156,   157,   158,     0,   169,   159,   160,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   161,   162,   163,   164,   165,   166,   167,   168,     0,
     145,   146,   147,   148,   149,   150,     0,   151,   152,   153,
     154,     0,   270,     0,     0,     0,     0,     0,   155,     0,
       0,   156,   157,   158,     0,   169,   159,   160,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   161,
     162,   163,   164,   165,   166,   167,   168,     0,   145,   146,
     147,   148,   149,   150,     0,   151,   152,   153,   154,     0,
     275,     0,     0,     0,     0,     0,   155,     0,     0,   156,
     157,   158,     0,   169,   159,   160,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   161,   162,   163,
     164,   165,   166,   167,   168,     0,   145,   146,   147,   148,
     149,   150,     0,   151,   152,   153,   154,     0,   278,     0,
       0,     0,     0,     0,   155,     0,     0,   156,   157,   158,
       0,   169,   159,   160,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   161,   162,   163,   164,   165,
     166,   167,   168,     0,   145,   146,   147,   148,   149,   150,
       0,   151,   152,   153,   154,     0,     0,     0,     0,   285,
       0,     0,   155,     0,     0,   156,   157,   158,     0,   169,
     159,   160,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   161,   162,   163,   164,   165,   166,   167,
     168,     0,   145,   146,   147,   148,   149,   150,     0,   151,
     152,   153,   154,     0,   289,     0,     0,     0,     0,     0,
     155,     0,     0,   156,   157,   158,     0,   169,   159,   160,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   161,   162,   163,   164,   165,   166,   167,   168,     0,
     145,   146,   147,   148,   149,   150,     0,   151,   152,   153,
     154,     0,   290,     0,     0,     0,     0,     0,   155,     0,
       0,   156,   157,   158,     0,   169,   159,   160,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   161,
     162,   163,   164,   165,   166,   167,   168,     0,   145,   146,
     147,   148,   149,   150,     0,   151,   152,   153,   154,     0,
       0,     0,   327,     0,     0,     0,   155,     0,     0,   156,
     157,   158,     0,   169,   159,   160,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   161,   162,   163,
     164,   165,   166,   167,   168,     0,   145,   146,   147,   148,
     149,   150,     0,   151,   152,   153,   154,     0,     0,     0,
       0,   347,     0,     0,   155,     0,     0,   156,   157,   158,
       0,   169,   159,   160,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   161,   162,   163,   164,   165,
     166,   167,   168,     0,   145,   146,   147,   148,   149,   150,
       0,   151,   152,   153,   154,     0,     0,     0,   335,     0,
       0,     0,   155,     0,     0,   156,   157,   158,     0,   169,
     159,   160,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   161,   162,   163,   164,   165,   166,   167,
     168,     0,   145,   146,   147,   148,   149,   150,     0,   151,
     152,   153,   154,     0,   382,     0,     0,     0,     0,     0,
     155,     0,     0,   156,   157,   158,     0,   169,   159,   160,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   161,   162,   163,   164,   165,   166,   167,   168,     0,
     145,   146,   147,   148,   149,   150,     0,   151,   152,   153,
     154,     0,     0,     0,     0,     0,     0,     0,   155,     0,
       0,   156,   157,   158,     0,   169,   159,   160,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   161,
     162,   163,   164,   165,   166,   167,   168,     0,   384,   145,
     146,   147,   148,   149,   150,     0,   151,   152,   153,   154,
       0,   386,     0,     0,     0,     0,     0,   155,     0,     0,
     156,   157,   158,   169,     0,   159,   160,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   161,   162,
     163,   164,   165,   166,   167,   168,     0,   145,   146,   147,
     148,   149,   150,     0,   151,   152,   153,   154,     0,     0,
       0,     0,   391,     0,     0,   155,     0,     0,   156,   157,
     158,     0,   169,   159,   160,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   161,   162,   163,   164,
     165,   166,   167,   168,     0,   145,   146,   147,   148,   149,
     150,     0,   151,   152,   153,   154,     0,   395,     0,     0,
       0,     0,     0,   155,     0,     0,   156,   157,   158,     0,
     169,   159,   160,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   161,   162,   163,   164,   165,   166,
     167,   168,     0,   145,   146,   147,   148,   149,   150,     0,
     151,   152,   153,   154,     0,     0,     0,     0,   402,     0,
       0,   155,     0,     0,   156,   157,   158,     0,   169,   159,
     160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   161,   162,   163,   164,   165,   166,   167,   168,
       0,   145,   146,   147,   148,   149,   150,     0,   151,   152,
     153,   154,     0,   421,     0,     0,     0,     0,     0,   155,
       0,     0,   156,   157,   158,     0,   169,   159,   160,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     161,   162,   163,   164,   165,   166,   167,   168,     0,   145,
     146,   147,   148,   149,   150,     0,   151,   152,   153,   154,
       0,   423,     0,     0,     0,     0,     0,   155,     0,     0,
     156,   157,   158,     0,   169,   159,   160,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   161,   162,
     163,   164,   165,   166,   167,   168,     0,   145,   146,   147,
     148,   149,   150,     0,   151,   152,   153,   154,     0,   449,
       0,     0,     0,     0,     0,   155,     0,     0,   156,   157,
     158,     0,   169,   159,   160,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   161,   162,   163,   164,
     165,   166,   167,   168,     0,   145,   146,   147,   148,   149,
     150,     0,   151,   152,   153,   154,     0,   496,     0,     0,
       0,     0,     0,   155,     0,     0,   156,   157,   158,     0,
     169,   159,   160,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   161,   162,   163,   164,   165,   166,
     167,   168,     0,   145,   146,   147,   148,   149,   150,     0,
     151,   152,   153,   154,     0,   499,     0,     0,     0,     0,
       0,   155,     0,     0,   156,   157,   158,     0,   169,   159,
     160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   161,   162,   163,   164,   165,   166,   167,   168,
       0,   145,   146,   147,   148,   149,   150,     0,   151,   152,
     153,   154,     0,   511,     0,     0,     0,     0,     0,   155,
       0,     0,   156,   157,   158,     0,   169,   159,   160,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     161,   162,   163,   164,   165,   166,   167,   168,     0,   145,
     146,   147,   148,   149,   150,     0,   151,   152,   153,   154,
       0,   513,     0,     0,     0,     0,     0,   155,     0,     0,
     156,   157,   158,     0,   169,   159,   160,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   161,   162,
     163,   164,   165,   166,   167,   168,     0,   145,   146,   147,
     148,   149,   150,     0,   151,   152,   153,   154,     0,     0,
       0,     0,   515,     0,     0,   155,     0,     0,   156,   157,
     158,     0,   169,   159,   160,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   161,   162,   163,   164,
     165,   166,   167,   168,     0,   145,   146,   147,   148,   149,
     150,     0,   151,   152,   153,   154,     0,     0,     0,     0,
     517,     0,     0,   155,     0,     0,   156,   157,   158,     0,
     169,   159,   160,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   161,   162,   163,   164,   165,   166,
     167,   168,     0,   145,   146,   147,   148,   149,   150,     0,
     151,   152,   153,   154,     0,     0,     0,     0,   529,     0,
       0,   155,     0,     0,   156,   157,   158,     0,   169,   159,
     160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   161,   162,   163,   164,   165,   166,   167,   168,
       0,   145,   146,   147,   148,   149,   150,     0,   151,   152,
     153,   154,     0,     0,     0,     0,   538,     0,     0,   155,
       0,     0,   156,   157,   158,     0,   169,   159,   160,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     161,   162,   163,   164,   165,   166,   167,   168,     0,   145,
     146,   147,   148,   149,   150,     0,   151,   152,   153,   154,
       0,     0,     0,     0,   542,     0,     0,   155,     0,     0,
     156,   157,   158,     0,   169,   159,   160,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   161,   162,
     163,   164,   165,   166,   167,   168,     0,   145,   146,   147,
     148,   149,   150,     0,   151,   152,   153,   154,     0,     0,
       0,     0,     0,     0,     0,   155,     0,     0,   156,   157,
     158,     0,   169,   159,   160,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   161,   162,   163,   164,
     165,   166,   167,   168,     0,   145,   146,   147,   148,   149,
     150,     0,   151,   152,   153,   154,     0,     0,     0,     0,
       0,     0,     0,   155,     0,     0,   156,   157,   158,     0,
     169,   159,   160,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   161,   162,   163,   164,   165,   166,
     167,   168,   145,   146,   147,   148,   149,   150,     0,   151,
     152,   153,   154,     0,     0,     0,     0,     0,     0,     0,
     155,     0,     0,   156,   157,   158,     0,     0,   159,   160,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   161,   162,   163,   164,   165,     0,   167,   168
};

static const yytype_int16 yycheck[] =
{
       2,     2,   275,    68,   326,   278,   373,   355,   192,   176,
      12,   337,    48,    55,    23,    48,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,     6,   274,    48,
      53,    55,     3,    48,   441,    28,   458,    16,    55,    55,
      53,    55,   288,    53,   303,    59,   468,    66,    67,     0,
      36,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,   438,   345,    56,    55,   117,   325,    53,    59,   115,
      24,   114,    36,    55,    49,   411,    89,    59,   195,    89,
      57,   488,    36,    37,   461,    54,    55,    57,    59,    64,
      65,   114,   209,   117,   271,   114,    48,   291,   381,   114,
     117,   117,    36,   386,   387,    55,   389,   440,   441,    59,
     393,    57,   395,    55,    66,    67,    53,    59,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,   486,    53,
     376,    44,    45,   416,   467,   468,    49,    53,   421,    52,
     423,   424,    57,   426,    55,   522,   263,    53,    59,   481,
      53,    64,    65,     5,     6,   488,    55,    54,    55,   492,
      59,   444,   114,    55,    54,    55,   449,    59,    53,   452,
     182,   182,    24,   505,    53,    48,    54,    55,   157,   158,
      54,    55,    54,    55,    36,    37,    53,   470,    54,    55,
      54,    55,   475,    66,    67,    54,    55,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    54,    55,    54,
      55,    54,    55,   496,    48,     3,   499,     5,     6,     7,
      53,     9,    53,    11,   299,    13,    14,    15,   511,    53,
     513,    53,    20,    21,    22,    53,    24,    25,    53,    27,
      53,    29,    30,    54,    55,    33,    34,    35,    36,    53,
      38,    39,    40,    41,    53,    43,    44,    42,    43,    44,
      45,   378,    53,   275,    49,    53,   278,    52,    14,    48,
      54,    55,    53,    61,    62,    35,    54,    55,    63,    64,
      65,    54,    55,    68,    69,    53,   403,    66,    67,    54,
      55,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    53,    87,    88,    53,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    54,    55,    54,    55,
      54,    55,    53,   345,    54,    55,     5,     6,    53,    53,
      53,    53,    53,    53,    42,    43,    44,    45,    46,    47,
      53,    49,    53,    35,    52,    36,    53,    36,    58,    35,
      53,    36,    23,    23,     3,    63,    64,    65,    55,   381,
      68,    69,    55,    53,   386,   387,    54,   389,   117,    56,
      54,   393,    53,   395,   501,    83,    84,    57,    39,    87,
      88,    58,    58,    48,    58,    36,    55,   409,   409,     8,
      54,    26,   519,    59,   416,    57,    54,    54,    54,   421,
      54,   423,   424,    58,   426,    58,   533,    54,    54,    42,
      43,    44,    45,    55,    59,    58,    49,    10,    58,    52,
      54,    48,   444,    36,    48,    48,    58,   449,    59,    57,
     452,    64,    65,    59,    59,    57,    29,    30,    31,    32,
      33,   463,   463,    57,    42,    43,    44,    45,   470,    56,
      59,    49,    57,   475,    52,    57,    57,   468,   333,   332,
     431,   301,    -1,    -1,   486,   486,    64,    65,    -1,    -1,
      68,    69,    -1,    -1,   496,    -1,    -1,   499,    -1,    -1,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,   511,
      -1,   513,    85,    -1,    -1,    88,    -1,    -1,    -1,    92,
      -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,   531,
     531,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,    -1,   145,   146,   147,   148,   149,   150,    -1,   152,
     153,   154,   155,   156,    -1,    -1,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,    -1,    -1,
      -1,    -1,   175,   176,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   185,    -1,    -1,    -1,   189,    -1,    -1,    -1,
      -1,    -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   209,    -1,    -1,    -1,
      -1,    -1,    -1,     5,     6,     7,    -1,     9,    -1,    11,
      -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,    21,
      22,    -1,    24,    25,    26,    27,    -1,    -1,    30,    -1,
      -1,    33,    34,    35,    36,    -1,    38,    39,    40,    41,
      -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     263,    53,    -1,    -1,    -1,    -1,    -1,    -1,   271,    61,
      62,    -1,    -1,   276,    -1,    -1,    -1,    -1,   281,   282,
     283,    -1,   285,   286,   287,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   295,    -1,    -1,   298,    -1,    -1,   301,    -1,
     303,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   325,   326,   327,    -1,   329,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     343,    -1,    -1,    -1,   347,   348,    -1,   350,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   362,
      -1,    -1,    -1,    42,    43,    44,    45,    46,    47,   372,
      49,    -1,    51,    52,    -1,   378,    -1,    -1,    -1,    -1,
      -1,   384,    -1,    -1,    63,    64,    65,    -1,   391,    68,
      69,   394,    -1,    -1,   397,    -1,    -1,    -1,    -1,    -1,
     403,    -1,    81,    82,    83,    84,    -1,    -1,    87,    88,
      -1,    -1,    -1,    -1,   417,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   427,    42,    43,    44,    45,    46,
      47,    -1,    49,    50,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,   445,    60,    -1,    -1,    63,    64,    65,    -1,
     453,    68,    69,    -1,    -1,    -1,    -1,   460,     5,     6,
       7,    -1,    -1,    -1,    81,    82,    83,    84,   471,    -1,
      87,    88,    -1,   476,    -1,    -1,   479,   480,   481,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,    -1,    43,    44,   501,    -1,
      -1,   504,   505,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    62,   519,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   527,    -1,    -1,    -1,    -1,    -1,
     533,    -1,    -1,   536,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,     5,     6,
       7,    -1,     9,    -1,    11,    -1,    13,    14,    15,    -1,
      -1,    -1,    -1,    20,    21,    22,    -1,    24,    25,    -1,
      27,    -1,    -1,    30,    -1,    -1,    33,    34,    35,    36,
      -1,    38,    39,    40,    41,    -1,    43,    44,    42,    43,
      44,    45,    46,    47,    -1,    49,    53,    51,    52,    -1,
      -1,    58,    -1,    -1,    61,    62,    60,    -1,    -1,    63,
      64,    65,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    -1,    -1,    87,    88,    -1,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,     5,     6,     7,
      -1,     9,    -1,    11,    -1,    13,    14,    15,    -1,    -1,
      -1,    -1,    20,    21,    22,    -1,    24,    25,    -1,    27,
      -1,    -1,    30,    -1,    -1,    33,    34,    35,    36,    -1,
      38,    39,    40,    41,    -1,    43,    44,    42,    43,    44,
      45,    46,    47,    -1,    49,    53,    -1,    52,    -1,    -1,
      -1,    59,    -1,    61,    62,    -1,    -1,    -1,    63,    64,
      65,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      -1,    -1,    87,    88,    -1,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,     5,     6,     7,    -1,
       9,    -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    24,    25,    -1,    27,    -1,
      -1,    30,    -1,    -1,    33,    34,    35,    36,    -1,    38,
      39,    40,    41,    -1,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      59,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,     5,     6,     7,    -1,     9,
      -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    -1,
      20,    21,    22,    -1,    24,    25,    -1,    27,    -1,    -1,
      30,    -1,    -1,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    59,
      -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,     5,     6,     7,    -1,     9,    -1,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    -1,    20,
      21,    22,    -1,    24,    25,    -1,    27,    -1,    -1,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    38,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,    -1,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    30,    -1,    -1,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      57,    58,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,     6,     7,    -1,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    30,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,    -1,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    57,    -1,    -1,    -1,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,    -1,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,    30,    -1,    -1,    33,    34,    35,    36,    -1,    -1,
      39,    40,    41,    -1,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    58,
      -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,     7,    -1,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    30,    -1,    -1,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,     7,    -1,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,    -1,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    30,    -1,    -1,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,     6,     7,    -1,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    30,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,    -1,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    57,    -1,    -1,    -1,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,    -1,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,    30,    -1,    -1,    33,    34,    35,    36,    -1,    -1,
      39,    40,    41,    -1,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    -1,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,     5,     6,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
       6,     7,    -1,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    30,    -1,    -1,    33,    34,    35,
      36,    -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,     6,     7,    -1,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    30,    -1,
      -1,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
      -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,    -1,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,    -1,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,    30,    -1,    -1,    33,    34,    35,    36,    -1,    -1,
      39,    40,    41,    -1,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,     7,    -1,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    30,    -1,    -1,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,     7,    -1,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,    -1,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    30,    -1,    -1,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,     6,     7,    -1,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    30,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,    -1,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    58,    -1,    -1,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,    -1,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,    30,    -1,    -1,    33,    34,    35,    36,    -1,    -1,
      39,    40,    41,    -1,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    58,
      -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,     7,    -1,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    30,    -1,    -1,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,    42,
      43,    44,    45,    46,    47,    -1,    49,    50,    51,    52,
      -1,    54,    55,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      63,    64,    65,    -1,    -1,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    42,    43,    44,
      45,    46,    47,    -1,    49,    50,    51,    52,    -1,    -1,
      55,    -1,    57,    -1,    -1,    60,    -1,    -1,    63,    64,
      65,    -1,   115,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    42,    43,    44,    45,    46,
      47,    -1,    49,    50,    51,    52,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    60,    -1,    -1,    63,    64,    65,    -1,
     115,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    90,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    63,    64,    65,   115,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    90,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    51,    52,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    63,    64,    65,   115,    -1,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    90,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    63,    64,    65,   115,    -1,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      -1,    -1,    92,    -1,    -1,    42,    43,    44,    45,    46,
      47,    -1,    49,    50,    51,    52,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    60,    -1,   115,    63,    64,    65,    -1,
      -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    -1,    -1,    92,    -1,    -1,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    52,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    60,    -1,   115,    63,
      64,    65,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    -1,    -1,    92,    -1,
      -1,    42,    43,    44,    45,    46,    47,    -1,    49,    50,
      51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,
      -1,   115,    63,    64,    65,    -1,    -1,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    -1,
      -1,    92,    -1,    -1,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    60,    -1,   115,    63,    64,    65,    -1,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    63,    64,    65,    -1,   115,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    63,    64,    65,    -1,   115,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    52,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    63,
      64,    65,    -1,   115,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    51,    52,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    63,    64,    65,
      -1,   115,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    60,    -1,    -1,    63,    64,    65,    -1,   115,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    63,    64,    65,    -1,   115,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    63,    64,    65,    -1,   115,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    52,    -1,
      -1,    -1,    56,    -1,    -1,    -1,    60,    -1,    -1,    63,
      64,    65,    -1,   115,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    51,    52,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    60,    -1,    -1,    63,    64,    65,
      -1,   115,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    60,    -1,    -1,    63,    64,    65,    -1,   115,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    63,    64,    65,    -1,   115,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    63,    64,    65,    -1,   115,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    90,    42,
      43,    44,    45,    46,    47,    -1,    49,    50,    51,    52,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      63,    64,    65,   115,    -1,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    42,    43,    44,
      45,    46,    47,    -1,    49,    50,    51,    52,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    60,    -1,    -1,    63,    64,
      65,    -1,   115,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    42,    43,    44,    45,    46,
      47,    -1,    49,    50,    51,    52,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    60,    -1,    -1,    63,    64,    65,    -1,
     115,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    51,    52,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    60,    -1,    -1,    63,    64,    65,    -1,   115,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    42,    43,    44,    45,    46,    47,    -1,    49,    50,
      51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    63,    64,    65,    -1,   115,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    42,
      43,    44,    45,    46,    47,    -1,    49,    50,    51,    52,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      63,    64,    65,    -1,   115,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    42,    43,    44,
      45,    46,    47,    -1,    49,    50,    51,    52,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    63,    64,
      65,    -1,   115,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    42,    43,    44,    45,    46,
      47,    -1,    49,    50,    51,    52,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    60,    -1,    -1,    63,    64,    65,    -1,
     115,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    51,    52,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    63,    64,    65,    -1,   115,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    42,    43,    44,    45,    46,    47,    -1,    49,    50,
      51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    63,    64,    65,    -1,   115,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    42,
      43,    44,    45,    46,    47,    -1,    49,    50,    51,    52,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      63,    64,    65,    -1,   115,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    42,    43,    44,
      45,    46,    47,    -1,    49,    50,    51,    52,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    60,    -1,    -1,    63,    64,
      65,    -1,   115,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    42,    43,    44,    45,    46,
      47,    -1,    49,    50,    51,    52,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    60,    -1,    -1,    63,    64,    65,    -1,
     115,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    51,    52,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    60,    -1,    -1,    63,    64,    65,    -1,   115,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    42,    43,    44,    45,    46,    47,    -1,    49,    50,
      51,    52,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,
      -1,    -1,    63,    64,    65,    -1,   115,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    42,
      43,    44,    45,    46,    47,    -1,    49,    50,    51,    52,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    60,    -1,    -1,
      63,    64,    65,    -1,   115,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    42,    43,    44,
      45,    46,    47,    -1,    49,    50,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    63,    64,
      65,    -1,   115,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    42,    43,    44,    45,    46,
      47,    -1,    49,    50,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    -1,    -1,    63,    64,    65,    -1,
     115,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    63,    64,    65,    -1,    -1,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    -1,    87,    88
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   119,   120,     0,     3,     5,     6,     7,     9,    11,
      13,    14,    15,    20,    21,    22,    24,    25,    27,    29,
      30,    33,    34,    35,    36,    38,    39,    40,    41,    43,
      44,    53,    61,    62,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   121,   122,   125,   126,   130,
     131,   138,   141,   142,   143,   144,   145,   146,   147,   148,
     151,   152,   156,   157,    36,    36,    53,   149,   149,    57,
      57,    53,     7,    34,    57,    58,   146,   151,    53,    58,
     125,   137,    53,    53,    53,   149,    53,    53,    36,    53,
      48,    48,    66,    67,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,   114,   150,    53,    89,   146,   146,
     146,   146,   146,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    57,    42,    43,    44,    45,    46,
      47,    49,    50,    51,    52,    60,    63,    64,    65,    68,
      69,    81,    82,    83,    84,    85,    86,    87,    88,   115,
      48,   150,    53,    89,   146,    53,    53,   146,   146,   158,
      57,   146,   124,    14,    35,    57,   146,    35,    35,    53,
     146,   146,    58,   146,   146,    58,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   162,    58,
     146,   153,   154,   155,    36,    54,   158,   158,   158,    54,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   146,   146,
     146,   146,   146,   146,    36,   146,   146,   146,   146,   146,
     149,   149,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,    58,   146,    35,   127,   128,   129,    36,
      54,   114,   133,   146,   133,    54,    55,    59,    54,    59,
     125,    53,    23,    57,   146,    57,    23,    23,   146,    54,
      54,   123,   126,    54,    55,    55,    57,   158,    55,   117,
     158,    55,    54,    53,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    53,   114,    56,   158,    48,
     115,    54,    55,    53,   133,    56,   132,   132,   137,   146,
      57,   137,   146,    91,   146,    54,   146,    57,    57,   146,
      91,   146,   146,   132,    58,    58,    59,   126,    39,   146,
      59,   146,    48,   150,    59,   153,   155,   155,   162,   146,
      59,   146,    48,    58,   129,   127,   117,    36,    55,   134,
     134,     8,    54,   146,    90,   137,    54,    54,   146,    54,
     146,    57,   146,    54,    90,    54,    54,    26,   139,   139,
      57,    54,    57,    58,   146,    54,    54,   117,   146,   124,
      54,   132,   158,    54,    54,   137,    54,    90,   146,   137,
     137,    54,   137,    54,    54,   146,    54,    90,   137,   146,
     137,    58,   140,   146,    59,    59,   158,    59,    58,   134,
      58,    58,   137,   146,    54,    92,   137,   137,   137,    54,
     137,   146,    54,    92,    24,    36,    37,   159,   160,   161,
      28,    56,    59,   124,    54,   131,   135,   136,   160,   135,
      54,    92,   137,   146,   137,    54,    92,   137,   146,    48,
      48,   114,    36,    59,   161,   146,   124,    59,    58,    57,
      59,   131,   136,    59,   137,   146,    54,   137,   146,    54,
     146,    58,   146,   162,    48,   114,    57,    19,   139,   135,
      57,    54,   137,    54,   137,    57,   158,    57,   117,    58,
     146,   162,    56,    59,   137,   137,    59,    48,   158,    57,
     117,   124,    57,    58,   146,    59,    48,   158,    57,    57,
     146,    59,    57,    57
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   118,   119,   120,   120,   121,   121,   121,   122,   123,
     123,   124,   124,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   126,   126,
     127,   127,   128,   128,   129,   129,   129,   129,   130,   131,
     131,   131,   131,   131,   131,   132,   132,   133,   133,   134,
     134,   135,   135,   135,   135,   136,   136,   137,   137,   138,
     138,   139,   139,   139,   140,   140,   141,   141,   142,   142,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   144,   144,   144,   144,   144,   144,   144,
     145,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     147,   147,   148,   148,   149,   149,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   152,   152,   152,   153,   153,   154,   154,   155,   155,
     156,   156,   157,   157,   157,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   158,   158,   159,   159,   160,   160,
     161,   161,   161,   161,   161,   161,   161,   161,   162,   162
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     6,     1,
       2,     0,     2,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     3,     5,     2,     4,     6,     1,     8,    10,
       0,     1,     1,     3,     1,     2,     3,     4,    10,    10,
       7,    12,     9,    10,     7,     0,     2,     0,     1,     0,
       2,     0,     1,     1,     2,     2,     3,     3,     1,     7,
       7,     4,     7,     5,     1,     3,     5,     7,     5,     6,
       9,     8,     8,     7,     8,     7,     7,     6,     9,    10,
      11,    12,     8,     7,     7,     9,    10,    11,    12,     8,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     1,     5,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       3,     6,     3,     3,     1,     3,     1,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     1,
       1,     1,     3,     5,     6,     8,     2,     5,     2,     3,
       5,     4,     6,     6,     1,     3,     1,     3,     0,     1,
       4,     6,     4,     4,     4,     3,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     1,     3,     0,     1,     1,     2,
       4,     6,     5,     7,     4,     7,     9,     8,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




/* The kind of the lookahead of this context.  */
static yysymbol_kind_t
yypcontext_token (const yypcontext_t *yyctx) YY_ATTRIBUTE_UNUSED;

static yysymbol_kind_t
yypcontext_token (const yypcontext_t *yyctx)
{
  return yyctx->yytoken;
}

/* The location of the lookahead of this context.  */
static YYLTYPE *
yypcontext_location (const yypcontext_t *yyctx) YY_ATTRIBUTE_UNUSED;

static YYLTYPE *
yypcontext_location (const yypcontext_t *yyctx)
{
  return yyctx->yylloc;
}

/* User defined function to report a syntax error.  */
static int
yyreport_syntax_error (const yypcontext_t *yyctx);

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* start: decl_list  */
#line 217 "CMDgram.y"
      { }
#line 2754 "CMDgram.cpp"
    break;

  case 3: /* decl_list: %empty  */
#line 222 "CMDgram.y"
      { (yyval.stmt) = nil; }
#line 2760 "CMDgram.cpp"
    break;

  case 4: /* decl_list: decl_list decl  */
#line 224 "CMDgram.y"
      { if(!Script::gStatementList) { Script::gStatementList = (yyvsp[0].stmt); } else { Script::gStatementList->append((yyvsp[0].stmt)); } }
#line 2766 "CMDgram.cpp"
    break;

  case 5: /* decl: stmt  */
#line 229 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2772 "CMDgram.cpp"
    break;

  case 6: /* decl: fn_decl_stmt  */
#line 231 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2778 "CMDgram.cpp"
    break;

  case 7: /* decl: package_decl  */
#line 233 "CMDgram.y"
     { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2784 "CMDgram.cpp"
    break;

  case 8: /* package_decl: rwPACKAGE IDENT '{' fn_decl_list '}' ';'  */
#line 238 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-2].stmt); for(StmtNode *walk = ((yyvsp[-2].stmt));walk;walk = walk->getNext() ) walk->setPackage((yyvsp[-4].s).value); }
#line 2790 "CMDgram.cpp"
    break;

  case 9: /* fn_decl_list: fn_decl_stmt  */
#line 243 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2796 "CMDgram.cpp"
    break;

  case 10: /* fn_decl_list: fn_decl_list fn_decl_stmt  */
#line 245 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-1].stmt); ((yyvsp[-1].stmt))->append((yyvsp[0].stmt));  }
#line 2802 "CMDgram.cpp"
    break;

  case 11: /* statement_list: %empty  */
#line 250 "CMDgram.y"
      { (yyval.stmt) = nil; }
#line 2808 "CMDgram.cpp"
    break;

  case 12: /* statement_list: statement_list stmt  */
#line 252 "CMDgram.y"
      { if(!(yyvsp[-1].stmt)) { (yyval.stmt) = (yyvsp[0].stmt); } else { ((yyvsp[-1].stmt))->append((yyvsp[0].stmt)); (yyval.stmt) = (yyvsp[-1].stmt); } }
#line 2814 "CMDgram.cpp"
    break;

  case 19: /* stmt: rwBREAK ';'  */
#line 263 "CMDgram.y"
      { (yyval.stmt) = BreakStmtNode::alloc( (yyvsp[-1].i).lineNumber ); }
#line 2820 "CMDgram.cpp"
    break;

  case 20: /* stmt: rwCONTINUE ';'  */
#line 265 "CMDgram.y"
      { (yyval.stmt) = ContinueStmtNode::alloc( (yyvsp[-1].i).lineNumber ); }
#line 2826 "CMDgram.cpp"
    break;

  case 21: /* stmt: rwRETURN ';'  */
#line 267 "CMDgram.y"
      { (yyval.stmt) = ReturnStmtNode::alloc( (yyvsp[-1].i).lineNumber, NULL ); }
#line 2832 "CMDgram.cpp"
    break;

  case 22: /* stmt: rwRETURN expr ';'  */
#line 269 "CMDgram.y"
      { (yyval.stmt) = ReturnStmtNode::alloc( (yyvsp[-2].i).lineNumber, (yyvsp[-1].expr) ); }
#line 2838 "CMDgram.cpp"
    break;

  case 23: /* stmt: rwRETURN '{' expr_list '}' ';'  */
#line 272 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-4].i).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-2].expr);
//          for (ExprNode* expr = (ExprNode*)$3; expr; expr = (ExprNode*)(expr->next)) {
//             vecNode->elements.push_back(expr);
//          }
         (yyval.stmt) = ReturnStmtNode::alloc( (yyvsp[-4].i).lineNumber, vecNode );
      }
#line 2851 "CMDgram.cpp"
    break;

  case 24: /* stmt: expression_stmt ';'  */
#line 282 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-1].stmt); }
#line 2857 "CMDgram.cpp"
    break;

  case 25: /* stmt: TTAG '=' expr ';'  */
#line 284 "CMDgram.y"
      { (yyval.stmt) = TTagSetStmtNode::alloc( (yyvsp[-3].s).lineNumber, (yyvsp[-3].s).value, (yyvsp[-1].expr), NULL ); }
#line 2863 "CMDgram.cpp"
    break;

  case 26: /* stmt: TTAG '=' expr ',' expr ';'  */
#line 286 "CMDgram.y"
      { (yyval.stmt) = TTagSetStmtNode::alloc( (yyvsp[-5].s).lineNumber, (yyvsp[-5].s).value, (yyvsp[-3].expr), (yyvsp[-1].expr) ); }
#line 2869 "CMDgram.cpp"
    break;

  case 27: /* stmt: DOCBLOCK  */
#line 288 "CMDgram.y"
      { (yyval.stmt) = StrConstNode::alloc( (yyvsp[0].str).lineNumber, (yyvsp[0].str).value, false, true ); }
#line 2875 "CMDgram.cpp"
    break;

  case 28: /* fn_decl_stmt: rwDEFINE IDENT '(' var_list_decl ')' '{' statement_list '}'  */
#line 294 "CMDgram.y"
      { (yyval.stmt) = FunctionDeclStmtNode::alloc( (yyvsp[-7].i).lineNumber, (yyvsp[-6].s).value, NULL, (yyvsp[-4].var), (yyvsp[-1].stmt) ); }
#line 2881 "CMDgram.cpp"
    break;

  case 29: /* fn_decl_stmt: rwDEFINE IDENT opCOLONCOLON IDENT '(' var_list_decl ')' '{' statement_list '}'  */
#line 297 "CMDgram.y"
      { (yyval.stmt) = FunctionDeclStmtNode::alloc( (yyvsp[-9].i).lineNumber, (yyvsp[-6].s).value, (yyvsp[-8].s).value, (yyvsp[-4].var), (yyvsp[-1].stmt) ); }
#line 2887 "CMDgram.cpp"
    break;

  case 30: /* var_list_decl: %empty  */
#line 302 "CMDgram.y"
      { (yyval.var) = NULL; }
#line 2893 "CMDgram.cpp"
    break;

  case 31: /* var_list_decl: var_list  */
#line 304 "CMDgram.y"
      { (yyval.var) = (yyvsp[0].var); }
#line 2899 "CMDgram.cpp"
    break;

  case 32: /* var_list: param  */
#line 309 "CMDgram.y"
      { (yyval.var) = (yyvsp[0].var); }
#line 2905 "CMDgram.cpp"
    break;

  case 33: /* var_list: var_list ',' param  */
#line 311 "CMDgram.y"
      { (yyval.var) = (yyvsp[-2].var); ((StmtNode*)((yyvsp[-2].var)))->append((StmtNode*)(yyvsp[0].var) ); }
#line 2911 "CMDgram.cpp"
    break;

  case 34: /* param: VAR  */
#line 328 "CMDgram.y"
      { (yyval.var) = VarNode::allocParam((yyvsp[0].s).lineNumber, (yyvsp[0].s).value, NULL); }
#line 2917 "CMDgram.cpp"
    break;

  case 35: /* param: VAR '?'  */
#line 330 "CMDgram.y"
      { (yyval.var) = VarNode::allocParam((yyvsp[-1].s).lineNumber, (yyvsp[-1].s).value, NULL); }
#line 2923 "CMDgram.cpp"
    break;

  case 36: /* param: VAR '=' expr  */
#line 332 "CMDgram.y"
      { (yyval.var) = VarNode::allocParam((yyvsp[-2].s).lineNumber, (yyvsp[-2].s).value, (yyvsp[0].expr)); }
#line 2929 "CMDgram.cpp"
    break;

  case 37: /* param: VAR '?' '=' expr  */
#line 334 "CMDgram.y"
      { (yyval.var) = VarNode::allocParam((yyvsp[-3].s).lineNumber, (yyvsp[-3].s).value, (yyvsp[0].expr)); }
#line 2935 "CMDgram.cpp"
    break;

  case 38: /* datablock_decl: rwDATABLOCK class_name_expr '(' expr parent_block ')' '{' slot_assign_list_opt '}' ';'  */
#line 339 "CMDgram.y"
      { (yyval.stmt) = ObjectDeclNode::alloc( (yyvsp[-9].i).lineNumber, (yyvsp[-8].expr), (yyvsp[-6].expr), NULL, (yyvsp[-5].s).value, (yyvsp[-2].slist), NULL, true, false, false); }
#line 2941 "CMDgram.cpp"
    break;

  case 39: /* object_decl: rwDECLARE class_name_expr '(' object_name parent_block object_args ')' '{' object_declare_block '}'  */
#line 344 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-9].i).lineNumber, (yyvsp[-8].expr), (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-5].s).value, (yyvsp[-1].odcl).slots, (yyvsp[-1].odcl).decls, false, false, false); }
#line 2947 "CMDgram.cpp"
    break;

  case 40: /* object_decl: rwDECLARE class_name_expr '(' object_name parent_block object_args ')'  */
#line 346 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-6].i).lineNumber, (yyvsp[-5].expr), (yyvsp[-3].expr), (yyvsp[-1].expr), (yyvsp[-2].s).value, NULL, NULL, false, false, false); }
#line 2953 "CMDgram.cpp"
    break;

  case 41: /* object_decl: rwDECLARE class_name_expr '(' '[' object_name ']' parent_block object_args ')' '{' object_declare_block '}'  */
#line 348 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-11].i).lineNumber, (yyvsp[-10].expr), (yyvsp[-7].expr), (yyvsp[-4].expr), (yyvsp[-5].s).value, (yyvsp[-1].odcl).slots, (yyvsp[-1].odcl).decls, false, true, false); }
#line 2959 "CMDgram.cpp"
    break;

  case 42: /* object_decl: rwDECLARE class_name_expr '(' '[' object_name ']' parent_block object_args ')'  */
#line 350 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-8].i).lineNumber, (yyvsp[-7].expr), (yyvsp[-4].expr), (yyvsp[-1].expr), (yyvsp[-2].s).value, NULL, NULL, false, true, false); }
#line 2965 "CMDgram.cpp"
    break;

  case 43: /* object_decl: rwDECLARESINGLETON class_name_expr '(' object_name parent_block object_args ')' '{' object_declare_block '}'  */
#line 352 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-9].i).lineNumber, (yyvsp[-8].expr), (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-5].s).value, (yyvsp[-1].odcl).slots, (yyvsp[-1].odcl).decls, false, false, true); }
#line 2971 "CMDgram.cpp"
    break;

  case 44: /* object_decl: rwDECLARESINGLETON class_name_expr '(' object_name parent_block object_args ')'  */
#line 354 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-6].i).lineNumber, (yyvsp[-5].expr), (yyvsp[-3].expr), (yyvsp[-1].expr), (yyvsp[-2].s).value, NULL, NULL, false, false, true); }
#line 2977 "CMDgram.cpp"
    break;

  case 45: /* parent_block: %empty  */
#line 359 "CMDgram.y"
      { (yyval.s).value = NULL; }
#line 2983 "CMDgram.cpp"
    break;

  case 46: /* parent_block: ':' IDENT  */
#line 361 "CMDgram.y"
      { (yyval.s) = (yyvsp[0].s); }
#line 2989 "CMDgram.cpp"
    break;

  case 47: /* object_name: %empty  */
#line 366 "CMDgram.y"
      { (yyval.expr) = StrConstNode::alloc( CodeBlock::smCurrentParser->getCurrentLine(), "", false); }
#line 2995 "CMDgram.cpp"
    break;

  case 48: /* object_name: expr  */
#line 368 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3001 "CMDgram.cpp"
    break;

  case 49: /* object_args: %empty  */
#line 373 "CMDgram.y"
      { (yyval.expr) = NULL; }
#line 3007 "CMDgram.cpp"
    break;

  case 50: /* object_args: ',' expr_list  */
#line 375 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3013 "CMDgram.cpp"
    break;

  case 51: /* object_declare_block: %empty  */
#line 380 "CMDgram.y"
      { (yyval.odcl).slots = NULL; (yyval.odcl).decls = NULL; }
#line 3019 "CMDgram.cpp"
    break;

  case 52: /* object_declare_block: slot_assign_list  */
#line 382 "CMDgram.y"
      { (yyval.odcl).slots = (yyvsp[0].slist); (yyval.odcl).decls = NULL; }
#line 3025 "CMDgram.cpp"
    break;

  case 53: /* object_declare_block: object_decl_list  */
#line 384 "CMDgram.y"
      { (yyval.odcl).slots = NULL; (yyval.odcl).decls = (yyvsp[0].od); }
#line 3031 "CMDgram.cpp"
    break;

  case 54: /* object_declare_block: slot_assign_list object_decl_list  */
#line 386 "CMDgram.y"
      { (yyval.odcl).slots = (yyvsp[-1].slist); (yyval.odcl).decls = (yyvsp[0].od); }
#line 3037 "CMDgram.cpp"
    break;

  case 55: /* object_decl_list: object_decl ';'  */
#line 391 "CMDgram.y"
      { (yyval.od) = (yyvsp[-1].od); }
#line 3043 "CMDgram.cpp"
    break;

  case 56: /* object_decl_list: object_decl_list object_decl ';'  */
#line 393 "CMDgram.y"
      { (yyvsp[-2].od)->append((yyvsp[-1].od)); (yyval.od) = (yyvsp[-2].od); }
#line 3049 "CMDgram.cpp"
    break;

  case 57: /* stmt_block: '{' statement_list '}'  */
#line 398 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-1].stmt); }
#line 3055 "CMDgram.cpp"
    break;

  case 58: /* stmt_block: stmt  */
#line 400 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[0].stmt); }
#line 3061 "CMDgram.cpp"
    break;

  case 59: /* switch_stmt: rwSWITCH '(' expr ')' '{' case_block '}'  */
#line 405 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-1].ifnode); (yyvsp[-1].ifnode)->propagateSwitchExpr((yyvsp[-4].expr), false); }
#line 3067 "CMDgram.cpp"
    break;

  case 60: /* switch_stmt: rwSWITCHSTR '(' expr ')' '{' case_block '}'  */
#line 407 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-1].ifnode); (yyvsp[-1].ifnode)->propagateSwitchExpr((yyvsp[-4].expr), true); }
#line 3073 "CMDgram.cpp"
    break;

  case 61: /* case_block: rwCASE case_expr ':' statement_list  */
#line 415 "CMDgram.y"
      { (yyval.ifnode) = IfStmtNode::alloc( (yyvsp[-3].i).lineNumber, (yyvsp[-2].expr), (yyvsp[0].stmt), NULL, false); }
#line 3079 "CMDgram.cpp"
    break;

  case 62: /* case_block: rwCASE case_expr ':' statement_list rwDEFAULT ':' statement_list  */
#line 417 "CMDgram.y"
      { (yyval.ifnode) = IfStmtNode::alloc( (yyvsp[-6].i).lineNumber, (yyvsp[-5].expr), (yyvsp[-3].stmt), (yyvsp[0].stmt), false); }
#line 3085 "CMDgram.cpp"
    break;

  case 63: /* case_block: rwCASE case_expr ':' statement_list case_block  */
#line 419 "CMDgram.y"
      { (yyval.ifnode) = IfStmtNode::alloc( (yyvsp[-4].i).lineNumber, (yyvsp[-3].expr), (yyvsp[-1].stmt), (yyvsp[0].ifnode), true); }
#line 3091 "CMDgram.cpp"
    break;

  case 64: /* case_expr: expr  */
#line 424 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3097 "CMDgram.cpp"
    break;

  case 65: /* case_expr: case_expr rwCASEOR expr  */
#line 426 "CMDgram.y"
      { ((yyvsp[-2].expr))->append((yyvsp[0].expr)); (yyval.expr) = (yyvsp[-2].expr); }
#line 3103 "CMDgram.cpp"
    break;

  case 66: /* if_stmt: rwIF '(' expr ')' stmt_block  */
#line 431 "CMDgram.y"
      { (yyval.stmt) = IfStmtNode::alloc((yyvsp[-4].i).lineNumber, (yyvsp[-2].expr), (yyvsp[0].stmt), NULL, false); }
#line 3109 "CMDgram.cpp"
    break;

  case 67: /* if_stmt: rwIF '(' expr ')' stmt_block rwELSE stmt_block  */
#line 433 "CMDgram.y"
      { (yyval.stmt) = IfStmtNode::alloc((yyvsp[-6].i).lineNumber, (yyvsp[-4].expr), (yyvsp[-2].stmt), (yyvsp[0].stmt), false); }
#line 3115 "CMDgram.cpp"
    break;

  case 68: /* while_stmt: rwWHILE '(' expr ')' stmt_block  */
#line 438 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-4].i).lineNumber, nil, (yyvsp[-2].expr), nil, (yyvsp[0].stmt), false); }
#line 3121 "CMDgram.cpp"
    break;

  case 69: /* while_stmt: rwDO stmt_block rwWHILE '(' expr ')'  */
#line 440 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-3].i).lineNumber, nil, (yyvsp[-1].expr), nil, (yyvsp[-4].stmt), true); }
#line 3127 "CMDgram.cpp"
    break;

  case 70: /* for_stmt: rwFOR '(' expr ';' expr ';' expr ')' stmt_block  */
#line 445 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-8].i).lineNumber, (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), false); }
#line 3133 "CMDgram.cpp"
    break;

  case 71: /* for_stmt: rwFOR '(' expr ';' expr ';' ')' stmt_block  */
#line 447 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-7].i).lineNumber, (yyvsp[-5].expr), (yyvsp[-3].expr), NULL, (yyvsp[0].stmt), false); }
#line 3139 "CMDgram.cpp"
    break;

  case 72: /* for_stmt: rwFOR '(' expr ';' ';' expr ')' stmt_block  */
#line 449 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-7].i).lineNumber, (yyvsp[-5].expr), NULL, (yyvsp[-2].expr), (yyvsp[0].stmt), false); }
#line 3145 "CMDgram.cpp"
    break;

  case 73: /* for_stmt: rwFOR '(' expr ';' ';' ')' stmt_block  */
#line 451 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-6].i).lineNumber, (yyvsp[-4].expr), NULL, NULL, (yyvsp[0].stmt), false); }
#line 3151 "CMDgram.cpp"
    break;

  case 74: /* for_stmt: rwFOR '(' ';' expr ';' expr ')' stmt_block  */
#line 453 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-7].i).lineNumber, NULL, (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), false); }
#line 3157 "CMDgram.cpp"
    break;

  case 75: /* for_stmt: rwFOR '(' ';' expr ';' ')' stmt_block  */
#line 455 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-6].i).lineNumber, NULL, (yyvsp[-3].expr), NULL, (yyvsp[0].stmt), false); }
#line 3163 "CMDgram.cpp"
    break;

  case 76: /* for_stmt: rwFOR '(' ';' ';' expr ')' stmt_block  */
#line 457 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-6].i).lineNumber, NULL, NULL, (yyvsp[-2].expr), (yyvsp[0].stmt), false); }
#line 3169 "CMDgram.cpp"
    break;

  case 77: /* for_stmt: rwFOR '(' ';' ';' ')' stmt_block  */
#line 459 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-5].i).lineNumber, NULL, NULL, NULL, (yyvsp[0].stmt), false); }
#line 3175 "CMDgram.cpp"
    break;

  case 78: /* for_stmt: rwFOR '(' VAR rwIN expr opDOTDOT expr ')' stmt_block  */
#line 463 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-8].i).lineNumber, (yyvsp[-6].s).value, (yyvsp[-4].expr), (yyvsp[-2].expr), NULL, (yyvsp[0].stmt), 2 ); }
#line 3181 "CMDgram.cpp"
    break;

  case 79: /* for_stmt: rwFOR '(' VAR rwIN rwRANGE expr opDOTDOT expr ')' stmt_block  */
#line 466 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-9].i).lineNumber, (yyvsp[-7].s).value, (yyvsp[-4].expr), (yyvsp[-2].expr), NULL, (yyvsp[0].stmt), 102 ); }
#line 3187 "CMDgram.cpp"
    break;

  case 80: /* for_stmt: rwFOR '(' VAR rwIN expr opDOTDOT expr rwSTEP expr ')' stmt_block  */
#line 469 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-10].i).lineNumber, (yyvsp[-8].s).value, (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), 3 ); }
#line 3193 "CMDgram.cpp"
    break;

  case 81: /* for_stmt: rwFOR '(' VAR rwIN rwRANGE expr opDOTDOT expr rwSTEP expr ')' stmt_block  */
#line 472 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-11].i).lineNumber, (yyvsp[-9].s).value, (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), 103 ); }
#line 3199 "CMDgram.cpp"
    break;

  case 82: /* for_stmt: rwFOR '(' VAR rwIN rwRANGE expr ')' stmt_block  */
#line 475 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-7].i).lineNumber, (yyvsp[-5].s).value, (yyvsp[-2].expr), NULL, NULL, (yyvsp[0].stmt), 104 ); }
#line 3205 "CMDgram.cpp"
    break;

  case 83: /* foreach_stmt: rwFOREACH '(' VAR rwIN expr ')' stmt_block  */
#line 486 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc( (yyvsp[-6].i).lineNumber, (yyvsp[-4].s).value, (yyvsp[-2].expr), NULL,NULL, (yyvsp[0].stmt), 0 ); }
#line 3211 "CMDgram.cpp"
    break;

  case 84: /* foreach_stmt: rwFOREACHSTR '(' VAR rwIN expr ')' stmt_block  */
#line 489 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc( (yyvsp[-6].i).lineNumber, (yyvsp[-4].s).value, (yyvsp[-2].expr), NULL,NULL, (yyvsp[0].stmt), 1 ); }
#line 3217 "CMDgram.cpp"
    break;

  case 85: /* foreach_stmt: rwFOREACH '(' VAR rwIN expr opDOTDOT expr ')' stmt_block  */
#line 492 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-8].i).lineNumber, (yyvsp[-6].s).value, (yyvsp[-4].expr), (yyvsp[-2].expr), NULL, (yyvsp[0].stmt), 2 ); }
#line 3223 "CMDgram.cpp"
    break;

  case 86: /* foreach_stmt: rwFOREACH '(' VAR rwIN rwRANGE expr opDOTDOT expr ')' stmt_block  */
#line 495 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-9].i).lineNumber, (yyvsp[-7].s).value, (yyvsp[-4].expr), (yyvsp[-2].expr), NULL, (yyvsp[0].stmt), 102 ); }
#line 3229 "CMDgram.cpp"
    break;

  case 87: /* foreach_stmt: rwFOREACH '(' VAR rwIN expr opDOTDOT expr rwSTEP expr ')' stmt_block  */
#line 498 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-10].i).lineNumber, (yyvsp[-8].s).value, (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), 3 ); }
#line 3235 "CMDgram.cpp"
    break;

  case 88: /* foreach_stmt: rwFOREACH '(' VAR rwIN rwRANGE expr opDOTDOT expr rwSTEP expr ')' stmt_block  */
#line 501 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-11].i).lineNumber, (yyvsp[-9].s).value, (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), 103 ); }
#line 3241 "CMDgram.cpp"
    break;

  case 89: /* foreach_stmt: rwFOREACH '(' VAR rwIN rwRANGE expr ')' stmt_block  */
#line 504 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-7].i).lineNumber, (yyvsp[-5].s).value, (yyvsp[-2].expr), NULL, NULL, (yyvsp[0].stmt), 104 ); }
#line 3247 "CMDgram.cpp"
    break;

  case 90: /* expression_stmt: stmt_expr  */
#line 509 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[0].expr); }
#line 3253 "CMDgram.cpp"
    break;

  case 91: /* expr: stmt_expr  */
#line 514 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3259 "CMDgram.cpp"
    break;

  case 92: /* expr: '(' expr ')'  */
#line 516 "CMDgram.y"
      { (yyval.expr) = (yyvsp[-1].expr); }
#line 3265 "CMDgram.cpp"
    break;

  case 93: /* expr: expr '^' expr  */
#line 518 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3271 "CMDgram.cpp"
    break;

  case 94: /* expr: expr '%' expr  */
#line 520 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3277 "CMDgram.cpp"
    break;

  case 95: /* expr: expr '&' expr  */
#line 522 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3283 "CMDgram.cpp"
    break;

  case 96: /* expr: expr '|' expr  */
#line 524 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3289 "CMDgram.cpp"
    break;

  case 97: /* expr: expr '+' expr  */
#line 526 "CMDgram.y"
      { (yyval.expr) = FloatBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3295 "CMDgram.cpp"
    break;

  case 98: /* expr: expr '-' expr  */
#line 528 "CMDgram.y"
      { (yyval.expr) = FloatBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3301 "CMDgram.cpp"
    break;

  case 99: /* expr: expr '*' expr  */
#line 530 "CMDgram.y"
      { (yyval.expr) = FloatBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3307 "CMDgram.cpp"
    break;

  case 100: /* expr: expr '/' expr  */
#line 532 "CMDgram.y"
      { (yyval.expr) = FloatBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3313 "CMDgram.cpp"
    break;

  case 101: /* expr: '-' expr  */
#line 534 "CMDgram.y"
      { (yyval.expr) = FloatUnaryExprNode::alloc( (yyvsp[-1].i).lineNumber, (yyvsp[-1].i).value, (yyvsp[0].expr)); }
#line 3319 "CMDgram.cpp"
    break;

  case 102: /* expr: '*' expr  */
#line 536 "CMDgram.y"
      { (yyval.expr) = TTagDerefNode::alloc( (yyvsp[-1].i).lineNumber, (yyvsp[0].expr) ); }
#line 3325 "CMDgram.cpp"
    break;

  case 103: /* expr: TTAG  */
#line 538 "CMDgram.y"
      { (yyval.expr) = TTagExprNode::alloc( (yyvsp[0].s).lineNumber, (yyvsp[0].s).value ); }
#line 3331 "CMDgram.cpp"
    break;

  case 104: /* expr: expr '?' expr ':' expr  */
#line 540 "CMDgram.y"
      { (yyval.expr) = ConditionalExprNode::alloc( (yyvsp[-4].expr)->dbgLineNumber, (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3337 "CMDgram.cpp"
    break;

  case 105: /* expr: expr '<' expr  */
#line 542 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3343 "CMDgram.cpp"
    break;

  case 106: /* expr: expr '>' expr  */
#line 544 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3349 "CMDgram.cpp"
    break;

  case 107: /* expr: expr opGE expr  */
#line 546 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3355 "CMDgram.cpp"
    break;

  case 108: /* expr: expr opLE expr  */
#line 548 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3361 "CMDgram.cpp"
    break;

  case 109: /* expr: expr opEQ expr  */
#line 550 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3367 "CMDgram.cpp"
    break;

  case 110: /* expr: expr opNE expr  */
#line 552 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3373 "CMDgram.cpp"
    break;

  case 111: /* expr: expr opOR expr  */
#line 554 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3379 "CMDgram.cpp"
    break;

  case 112: /* expr: expr opSHL expr  */
#line 556 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3385 "CMDgram.cpp"
    break;

  case 113: /* expr: expr opSHR expr  */
#line 558 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3391 "CMDgram.cpp"
    break;

  case 114: /* expr: expr opAND expr  */
#line 560 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3397 "CMDgram.cpp"
    break;

  case 115: /* expr: expr opSTREQ expr  */
#line 562 "CMDgram.y"
      { (yyval.expr) = StreqExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-2].expr), (yyvsp[0].expr), true); }
#line 3403 "CMDgram.cpp"
    break;

  case 116: /* expr: expr opSTRNE expr  */
#line 564 "CMDgram.y"
      { (yyval.expr) = StreqExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-2].expr), (yyvsp[0].expr), false); }
#line 3409 "CMDgram.cpp"
    break;

  case 117: /* expr: expr '@' expr  */
#line 572 "CMDgram.y"
      { (yyval.expr) = StrcatExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-2].expr), (yyvsp[0].expr), (yyvsp[-1].i).value); }
#line 3415 "CMDgram.cpp"
    break;

  case 118: /* expr: '!' expr  */
#line 574 "CMDgram.y"
      { (yyval.expr) = IntUnaryExprNode::alloc((yyvsp[-1].i).lineNumber, (yyvsp[-1].i).value, (yyvsp[0].expr)); }
#line 3421 "CMDgram.cpp"
    break;

  case 119: /* expr: '~' expr  */
#line 576 "CMDgram.y"
      { (yyval.expr) = IntUnaryExprNode::alloc((yyvsp[-1].i).lineNumber, (yyvsp[-1].i).value, (yyvsp[0].expr)); }
#line 3427 "CMDgram.cpp"
    break;

  case 120: /* expr: TAGATOM  */
#line 578 "CMDgram.y"
      { (yyval.expr) = StrConstNode::alloc( (yyvsp[0].str).lineNumber, (yyvsp[0].str).value, true); }
#line 3433 "CMDgram.cpp"
    break;

  case 121: /* expr: FLTCONST  */
#line 580 "CMDgram.y"
      { (yyval.expr) = FloatNode::alloc( (yyvsp[0].f).lineNumber, (yyvsp[0].f).value ); }
#line 3439 "CMDgram.cpp"
    break;

  case 122: /* expr: INTCONST  */
#line 582 "CMDgram.y"
      { (yyval.expr) = IntNode::alloc( (yyvsp[0].i).lineNumber, (yyvsp[0].i).value ); }
#line 3445 "CMDgram.cpp"
    break;

  case 123: /* expr: rwBREAK  */
#line 584 "CMDgram.y"
      { (yyval.expr) = ConstantNode::alloc( (yyvsp[0].i).lineNumber, StringTable->insert("break")); }
#line 3451 "CMDgram.cpp"
    break;

  case 124: /* expr: slot_acc  */
#line 586 "CMDgram.y"
      { (yyval.expr) = SlotAccessNode::alloc( (yyvsp[0].slot).lineNumber, (yyvsp[0].slot).object, (yyvsp[0].slot).array, (yyvsp[0].slot).slotName ); }
#line 3457 "CMDgram.cpp"
    break;

  case 125: /* expr: intslot_acc  */
#line 588 "CMDgram.y"
      { (yyval.expr) = InternalSlotAccessNode::alloc( (yyvsp[0].intslot).lineNumber, (yyvsp[0].intslot).object, (yyvsp[0].intslot).slotExpr, (yyvsp[0].intslot).recurse); }
#line 3463 "CMDgram.cpp"
    break;

  case 126: /* expr: IDENT  */
#line 590 "CMDgram.y"
      { (yyval.expr) = ConstantNode::alloc( (yyvsp[0].s).lineNumber, (yyvsp[0].s).value ); }
#line 3469 "CMDgram.cpp"
    break;

  case 127: /* expr: STRATOM  */
#line 592 "CMDgram.y"
      { (yyval.expr) = StrConstNode::alloc( (yyvsp[0].str).lineNumber, (yyvsp[0].str).value, false); }
#line 3475 "CMDgram.cpp"
    break;

  case 128: /* expr: VAR  */
#line 594 "CMDgram.y"
      { (yyval.expr) = (ExprNode*)VarNode::alloc( (yyvsp[0].s).lineNumber, (yyvsp[0].s).value, NULL); }
#line 3481 "CMDgram.cpp"
    break;

  case 129: /* expr: VAR '[' aidx_expr ']'  */
#line 596 "CMDgram.y"
      { (yyval.expr) = (ExprNode*)VarNode::alloc( (yyvsp[-3].s).lineNumber, (yyvsp[-3].s).value, (yyvsp[-1].expr) ); }
#line 3487 "CMDgram.cpp"
    break;

  case 130: /* slot_acc: expr '.' IDENT  */
#line 602 "CMDgram.y"
      { (yyval.slot).lineNumber = (yyvsp[-2].expr)->dbgLineNumber; (yyval.slot).object = (yyvsp[-2].expr); (yyval.slot).slotName = (yyvsp[0].s).value; (yyval.slot).array = NULL; }
#line 3493 "CMDgram.cpp"
    break;

  case 131: /* slot_acc: expr '.' IDENT '[' aidx_expr ']'  */
#line 604 "CMDgram.y"
      { (yyval.slot).lineNumber = (yyvsp[-5].expr)->dbgLineNumber; (yyval.slot).object = (yyvsp[-5].expr); (yyval.slot).slotName = (yyvsp[-3].s).value; (yyval.slot).array = (yyvsp[-1].expr); }
#line 3499 "CMDgram.cpp"
    break;

  case 132: /* intslot_acc: expr opINTNAME class_name_expr  */
#line 609 "CMDgram.y"
      { (yyval.intslot).lineNumber = (yyvsp[-2].expr)->dbgLineNumber; (yyval.intslot).object = (yyvsp[-2].expr); (yyval.intslot).slotExpr = (yyvsp[0].expr); (yyval.intslot).recurse = false; }
#line 3505 "CMDgram.cpp"
    break;

  case 133: /* intslot_acc: expr opINTNAMER class_name_expr  */
#line 611 "CMDgram.y"
      { (yyval.intslot).lineNumber = (yyvsp[-2].expr)->dbgLineNumber; (yyval.intslot).object = (yyvsp[-2].expr); (yyval.intslot).slotExpr = (yyvsp[0].expr); (yyval.intslot).recurse = true; }
#line 3511 "CMDgram.cpp"
    break;

  case 134: /* class_name_expr: IDENT  */
#line 616 "CMDgram.y"
      { (yyval.expr) = ConstantNode::alloc( (yyvsp[0].s).lineNumber, (yyvsp[0].s).value ); }
#line 3517 "CMDgram.cpp"
    break;

  case 135: /* class_name_expr: '(' expr ')'  */
#line 618 "CMDgram.y"
      { (yyval.expr) = (yyvsp[-1].expr); }
#line 3523 "CMDgram.cpp"
    break;

  case 136: /* assign_op_struct: opPLUSPLUS  */
#line 623 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[0].i).lineNumber; (yyval.asn).token = opPLUSPLUS; (yyval.asn).expr = FloatNode::alloc( (yyvsp[0].i).lineNumber, 1 ); }
#line 3529 "CMDgram.cpp"
    break;

  case 137: /* assign_op_struct: opMINUSMINUS  */
#line 625 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[0].i).lineNumber; (yyval.asn).token = opMINUSMINUS; (yyval.asn).expr = FloatNode::alloc( (yyvsp[0].i).lineNumber, 1 ); }
#line 3535 "CMDgram.cpp"
    break;

  case 138: /* assign_op_struct: opPLASN expr  */
#line 627 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '+'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3541 "CMDgram.cpp"
    break;

  case 139: /* assign_op_struct: opMIASN expr  */
#line 629 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '-'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3547 "CMDgram.cpp"
    break;

  case 140: /* assign_op_struct: opMLASN expr  */
#line 631 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '*'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3553 "CMDgram.cpp"
    break;

  case 141: /* assign_op_struct: opDVASN expr  */
#line 633 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '/'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3559 "CMDgram.cpp"
    break;

  case 142: /* assign_op_struct: opMODASN expr  */
#line 635 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '%'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3565 "CMDgram.cpp"
    break;

  case 143: /* assign_op_struct: opANDASN expr  */
#line 637 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '&'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3571 "CMDgram.cpp"
    break;

  case 144: /* assign_op_struct: opXORASN expr  */
#line 639 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '^'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3577 "CMDgram.cpp"
    break;

  case 145: /* assign_op_struct: opORASN expr  */
#line 641 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '|'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3583 "CMDgram.cpp"
    break;

  case 146: /* assign_op_struct: opSLASN expr  */
#line 643 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = opSHL; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3589 "CMDgram.cpp"
    break;

  case 147: /* assign_op_struct: opSRASN expr  */
#line 645 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = opSHR; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3595 "CMDgram.cpp"
    break;

  case 148: /* stmt_expr: funcall_expr  */
#line 651 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3601 "CMDgram.cpp"
    break;

  case 149: /* stmt_expr: assert_expr  */
#line 653 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3607 "CMDgram.cpp"
    break;

  case 150: /* stmt_expr: inline_command_expr  */
#line 655 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3613 "CMDgram.cpp"
    break;

  case 151: /* stmt_expr: object_decl  */
#line 657 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].od); }
#line 3619 "CMDgram.cpp"
    break;

  case 152: /* stmt_expr: VAR '=' expr  */
#line 659 "CMDgram.y"
      { (yyval.expr) = AssignExprNode::alloc( (yyvsp[-2].s).lineNumber, (yyvsp[-2].s).value, NULL, (yyvsp[0].expr)); }
#line 3625 "CMDgram.cpp"
    break;

  case 153: /* stmt_expr: VAR '=' '{' expr_list '}'  */
#line 663 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-4].s).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-1].expr);
         (yyval.expr) = AssignExprNode::alloc( (yyvsp[-4].s).lineNumber, (yyvsp[-4].s).value, NULL, vecNode);
      }
#line 3635 "CMDgram.cpp"
    break;

  case 154: /* stmt_expr: VAR '[' aidx_expr ']' '=' expr  */
#line 671 "CMDgram.y"
      { (yyval.expr) = AssignExprNode::alloc( (yyvsp[-5].s).lineNumber, (yyvsp[-5].s).value, (yyvsp[-3].expr), (yyvsp[0].expr)); }
#line 3641 "CMDgram.cpp"
    break;

  case 155: /* stmt_expr: VAR '[' aidx_expr ']' '=' '{' expr_list '}'  */
#line 675 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-7].s).lineNumber);
          vecNode->argList = (ExprNode*)(yyvsp[-1].expr);
         (yyval.expr) = AssignExprNode::alloc( (yyvsp[-7].s).lineNumber, (yyvsp[-7].s).value, (yyvsp[-5].expr), vecNode);
      }
#line 3651 "CMDgram.cpp"
    break;

  case 156: /* stmt_expr: VAR assign_op_struct  */
#line 683 "CMDgram.y"
      { (yyval.expr) = AssignOpExprNode::alloc( (yyvsp[-1].s).lineNumber, (yyvsp[-1].s).value, NULL, (yyvsp[0].asn).expr, (yyvsp[0].asn).token); }
#line 3657 "CMDgram.cpp"
    break;

  case 157: /* stmt_expr: VAR '[' aidx_expr ']' assign_op_struct  */
#line 685 "CMDgram.y"
      { (yyval.expr) = AssignOpExprNode::alloc( (yyvsp[-4].s).lineNumber, (yyvsp[-4].s).value, (yyvsp[-2].expr), (yyvsp[0].asn).expr, (yyvsp[0].asn).token); }
#line 3663 "CMDgram.cpp"
    break;

  case 158: /* stmt_expr: slot_acc assign_op_struct  */
#line 687 "CMDgram.y"
      { (yyval.expr) = SlotAssignOpNode::alloc( (yyvsp[-1].slot).lineNumber, (yyvsp[-1].slot).object, (yyvsp[-1].slot).slotName, (yyvsp[-1].slot).array, (yyvsp[0].asn).token, (yyvsp[0].asn).expr); }
#line 3669 "CMDgram.cpp"
    break;

  case 159: /* stmt_expr: slot_acc '=' expr  */
#line 689 "CMDgram.y"
      { (yyval.expr) = SlotAssignNode::alloc( (yyvsp[-2].slot).lineNumber, (yyvsp[-2].slot).object, (yyvsp[-2].slot).array, (yyvsp[-2].slot).slotName, (yyvsp[0].expr)); }
#line 3675 "CMDgram.cpp"
    break;

  case 160: /* stmt_expr: slot_acc '=' '{' expr_list '}'  */
#line 691 "CMDgram.y"
      { (yyval.expr) = SlotAssignNode::alloc( (yyvsp[-4].slot).lineNumber, (yyvsp[-4].slot).object, (yyvsp[-4].slot).array, (yyvsp[-4].slot).slotName, (yyvsp[-1].expr)); }
#line 3681 "CMDgram.cpp"
    break;

  case 161: /* funcall_expr: IDENT '(' func_arg_list_decl ')'  */
#line 723 "CMDgram.y"
      { (yyval.expr) = FuncCallExprNode::alloc( (yyvsp[-3].s).lineNumber, (yyvsp[-3].s).value, NULL, (yyvsp[-1].expr), false); }
#line 3687 "CMDgram.cpp"
    break;

  case 162: /* funcall_expr: IDENT opCOLONCOLON IDENT '(' func_arg_list_decl ')'  */
#line 726 "CMDgram.y"
      { (yyval.expr) = FuncCallExprNode::alloc( (yyvsp[-5].s).lineNumber, (yyvsp[-3].s).value, (yyvsp[-5].s).value, (yyvsp[-1].expr), false); }
#line 3693 "CMDgram.cpp"
    break;

  case 163: /* funcall_expr: expr '.' IDENT '(' func_arg_list_decl ')'  */
#line 729 "CMDgram.y"
      { (yyvsp[-5].expr)->append((yyvsp[-1].expr)); (yyval.expr) = FuncCallExprNode::alloc( (yyvsp[-5].expr)->dbgLineNumber, (yyvsp[-3].s).value, NULL, (yyvsp[-5].expr), true); }
#line 3699 "CMDgram.cpp"
    break;

  case 164: /* func_arg_item: expr  */
#line 735 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3705 "CMDgram.cpp"
    break;

  case 165: /* func_arg_item: '{' expr_list '}'  */
#line 737 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-2].i).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-1].expr);
//          for (ExprNode* expr = (ExprNode*)$2; expr; expr = (ExprNode*)(expr->next)) {
//             vecNode->elements.push_back(expr);
//          }
         (yyval.expr) = vecNode;
      }
#line 3718 "CMDgram.cpp"
    break;

  case 166: /* func_arg_list: func_arg_item  */
#line 749 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3724 "CMDgram.cpp"
    break;

  case 167: /* func_arg_list: func_arg_list ',' func_arg_item  */
#line 751 "CMDgram.y"
      { ((yyvsp[-2].expr))->append((yyvsp[0].expr)); (yyval.expr) = (yyvsp[-2].expr); }
#line 3730 "CMDgram.cpp"
    break;

  case 168: /* func_arg_list_decl: %empty  */
#line 756 "CMDgram.y"
      { (yyval.expr) = NULL; }
#line 3736 "CMDgram.cpp"
    break;

  case 169: /* func_arg_list_decl: func_arg_list  */
#line 758 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3742 "CMDgram.cpp"
    break;

  case 170: /* assert_expr: rwASSERT '(' expr ')'  */
#line 779 "CMDgram.y"
      { (yyval.expr) = AssertCallExprNode::alloc( (yyvsp[-3].i).lineNumber, (yyvsp[-1].expr), NULL ); }
#line 3748 "CMDgram.cpp"
    break;

  case 171: /* assert_expr: rwASSERT '(' expr ',' STRATOM ')'  */
#line 781 "CMDgram.y"
      { (yyval.expr) = AssertCallExprNode::alloc( (yyvsp[-5].i).lineNumber, (yyvsp[-3].expr), (yyvsp[-1].str).value ); }
#line 3754 "CMDgram.cpp"
    break;

  case 172: /* inline_command_expr: rwPRINT '(' expr_list ')'  */
#line 788 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::PRINT, (yyvsp[-1].expr)); }
#line 3760 "CMDgram.cpp"
    break;

  case 173: /* inline_command_expr: rwPRINTF '(' expr_list ')'  */
#line 790 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::PRINTF, (yyvsp[-1].expr)); }
#line 3766 "CMDgram.cpp"
    break;

  case 174: /* inline_command_expr: rwSPRINTF '(' expr_list ')'  */
#line 792 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::SPRINTF, (yyvsp[-1].expr)); }
#line 3772 "CMDgram.cpp"
    break;

  case 175: /* inline_command_expr: rwRANDOMF '(' ')'  */
#line 794 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-2].i).lineNumber, CommandStmtNode::RANDOMF, NULL); }
#line 3778 "CMDgram.cpp"
    break;

  case 176: /* inline_command_expr: rwRANDOMF '(' expr_list ')'  */
#line 796 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::RANDOMF, (yyvsp[-1].expr)); }
#line 3784 "CMDgram.cpp"
    break;

  case 177: /* inline_command_expr: rwFLOOR '(' expr_list ')'  */
#line 798 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::FLOOR, (yyvsp[-1].expr)); }
#line 3790 "CMDgram.cpp"
    break;

  case 178: /* inline_command_expr: rwCEIL '(' expr_list ')'  */
#line 800 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::CEIL, (yyvsp[-1].expr)); }
#line 3796 "CMDgram.cpp"
    break;

  case 179: /* inline_command_expr: rwFABS '(' expr_list ')'  */
#line 802 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::FABS, (yyvsp[-1].expr)); }
#line 3802 "CMDgram.cpp"
    break;

  case 180: /* inline_command_expr: rwSIN '(' expr_list ')'  */
#line 804 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::SIN, (yyvsp[-1].expr)); }
#line 3808 "CMDgram.cpp"
    break;

  case 181: /* inline_command_expr: rwCOS '(' expr_list ')'  */
#line 806 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::COS, (yyvsp[-1].expr)); }
#line 3814 "CMDgram.cpp"
    break;

  case 182: /* inline_command_expr: rwATAN '(' expr_list ')'  */
#line 808 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::ATAN, (yyvsp[-1].expr)); }
#line 3820 "CMDgram.cpp"
    break;

  case 183: /* inline_command_expr: rwTANH '(' expr_list ')'  */
#line 810 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::TANH, (yyvsp[-1].expr)); }
#line 3826 "CMDgram.cpp"
    break;

  case 184: /* inline_command_expr: rwSQRT '(' expr_list ')'  */
#line 812 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::SQRT, (yyvsp[-1].expr)); }
#line 3832 "CMDgram.cpp"
    break;

  case 185: /* inline_command_expr: rwISZERO '(' expr_list ')'  */
#line 814 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::ISZERO, (yyvsp[-1].expr)); }
#line 3838 "CMDgram.cpp"
    break;

  case 186: /* inline_command_expr: rwFMOD '(' expr_list ')'  */
#line 816 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::FMOD, (yyvsp[-1].expr)); }
#line 3844 "CMDgram.cpp"
    break;

  case 187: /* inline_command_expr: rwMIN '(' expr_list ')'  */
#line 818 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::MIN, (yyvsp[-1].expr)); }
#line 3850 "CMDgram.cpp"
    break;

  case 188: /* inline_command_expr: rwMAX '(' expr_list ')'  */
#line 820 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::MAX, (yyvsp[-1].expr)); }
#line 3856 "CMDgram.cpp"
    break;

  case 189: /* inline_command_expr: rwATAN2 '(' expr_list ')'  */
#line 822 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::ATAN2, (yyvsp[-1].expr)); }
#line 3862 "CMDgram.cpp"
    break;

  case 190: /* inline_command_expr: rwPOW '(' expr_list ')'  */
#line 824 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::POW, (yyvsp[-1].expr)); }
#line 3868 "CMDgram.cpp"
    break;

  case 191: /* inline_command_expr: rwCLAMPF '(' expr_list ')'  */
#line 826 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::CLAMPF, (yyvsp[-1].expr)); }
#line 3874 "CMDgram.cpp"
    break;

  case 192: /* inline_command_expr: rwLERP '(' expr_list ')'  */
#line 828 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::LERP, (yyvsp[-1].expr)); }
#line 3880 "CMDgram.cpp"
    break;

  case 193: /* inline_command_expr: rwSMOOTHSTEP '(' expr_list ')'  */
#line 830 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::SMOOTHSTEP, (yyvsp[-1].expr)); }
#line 3886 "CMDgram.cpp"
    break;

  case 194: /* expr_list: expr  */
#line 842 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3892 "CMDgram.cpp"
    break;

  case 195: /* expr_list: expr_list ',' expr  */
#line 844 "CMDgram.y"
      { ((yyvsp[-2].expr))->append((yyvsp[0].expr)); (yyval.expr) = (yyvsp[-2].expr); }
#line 3898 "CMDgram.cpp"
    break;

  case 196: /* slot_assign_list_opt: %empty  */
#line 849 "CMDgram.y"
      { (yyval.slist) = NULL; }
#line 3904 "CMDgram.cpp"
    break;

  case 197: /* slot_assign_list_opt: slot_assign_list  */
#line 851 "CMDgram.y"
      { (yyval.slist) = (yyvsp[0].slist); }
#line 3910 "CMDgram.cpp"
    break;

  case 198: /* slot_assign_list: slot_assign  */
#line 856 "CMDgram.y"
      { (yyval.slist) = (yyvsp[0].slist); }
#line 3916 "CMDgram.cpp"
    break;

  case 199: /* slot_assign_list: slot_assign_list slot_assign  */
#line 858 "CMDgram.y"
      { (yyvsp[-1].slist)->append((yyvsp[0].slist)); (yyval.slist) = (yyvsp[-1].slist); }
#line 3922 "CMDgram.cpp"
    break;

  case 200: /* slot_assign: IDENT '=' expr ';'  */
#line 864 "CMDgram.y"
      { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-3].s).lineNumber, NULL, NULL, (yyvsp[-3].s).value, (yyvsp[-1].expr)); }
#line 3928 "CMDgram.cpp"
    break;

  case 201: /* slot_assign: IDENT '=' '{' expr_list '}' ';'  */
#line 868 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-5].s).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-2].expr);
//          for (ExprNode* expr = (ExprNode*)$4; expr; expr = (ExprNode*)(expr->next)) {
//             vecNode->elements.push_back(expr);
//          }
         (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-5].s).lineNumber, NULL, NULL, (yyvsp[-5].s).value, vecNode);
      }
#line 3941 "CMDgram.cpp"
    break;

  case 202: /* slot_assign: TYPEIDENT IDENT '=' expr ';'  */
#line 879 "CMDgram.y"
      { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-4].i).lineNumber, NULL, NULL, (yyvsp[-3].s).value, (yyvsp[-1].expr), (yyvsp[-4].i).value); }
#line 3947 "CMDgram.cpp"
    break;

  case 203: /* slot_assign: TYPEIDENT IDENT '=' '{' expr_list '}' ';'  */
#line 883 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-6].i).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-2].expr);
//          for (ExprNode* expr = (ExprNode*)$5; expr; expr = (ExprNode*)(expr->next)) {
//             vecNode->elements.push_back(expr);
//          }
         (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-6].i).lineNumber, NULL, NULL, (yyvsp[-5].s).value, vecNode, (yyvsp[-6].i).value);
      }
#line 3960 "CMDgram.cpp"
    break;

  case 204: /* slot_assign: rwDATABLOCK '=' expr ';'  */
#line 894 "CMDgram.y"
      { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-3].i).lineNumber, NULL, NULL, StringTable->insert("datablock"), (yyvsp[-1].expr)); }
#line 3966 "CMDgram.cpp"
    break;

  case 205: /* slot_assign: IDENT '[' aidx_expr ']' '=' expr ';'  */
#line 896 "CMDgram.y"
      { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-6].s).lineNumber, NULL, (yyvsp[-4].expr), (yyvsp[-6].s).value, (yyvsp[-1].expr)); }
#line 3972 "CMDgram.cpp"
    break;

  case 206: /* slot_assign: IDENT '[' aidx_expr ']' '=' '{' expr_list '}' ';'  */
#line 900 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-8].s).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-2].expr);
//          for (ExprNode* expr = (ExprNode*)$7; expr; expr = (ExprNode*)(expr->next)) {
//             vecNode->elements.push_back(expr);
//          }
         (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-8].s).lineNumber, NULL, (yyvsp[-6].expr), (yyvsp[-8].s).value, vecNode);
      }
#line 3985 "CMDgram.cpp"
    break;

  case 207: /* slot_assign: TYPEIDENT IDENT '[' aidx_expr ']' '=' expr ';'  */
#line 911 "CMDgram.y"
      { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-7].i).lineNumber, NULL, (yyvsp[-4].expr), (yyvsp[-6].s).value, (yyvsp[-1].expr), (yyvsp[-7].i).value); }
#line 3991 "CMDgram.cpp"
    break;

  case 208: /* aidx_expr: expr  */
#line 934 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3997 "CMDgram.cpp"
    break;

  case 209: /* aidx_expr: aidx_expr ',' expr  */
#line 936 "CMDgram.y"
      { (yyval.expr) = CommaCatExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4003 "CMDgram.cpp"
    break;


#line 4007 "CMDgram.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        if (yyreport_syntax_error (&yyctx) == 2)
          YYNOMEM;
      }
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 939 "CMDgram.y"


int
yyreport_syntax_error(const yypcontext_t *ctx)
{
   int ret = 0;
   String output;
   const YYLTYPE *loc = yypcontext_location(ctx);
   output += "syntax error: ";

   yysymbol_kind_t nxt = yypcontext_token(ctx);
   if (nxt != YYSYMBOL_YYEMPTY)
      output += String::ToString("unexpected: %s at column: %d",
                                 yysymbol_name(nxt), loc->first_column);

   enum { TOKENMAX = 10 };
   yysymbol_kind_t expected[TOKENMAX];

   int exp = yypcontext_expected_tokens(ctx, expected, TOKENMAX);
   if (exp < 0)
   {
      ret = exp;
   }
   else
   {
      for (int i = 0; i < exp; ++i)
         output += String::ToString("%s %s",
                                    i == 0 ? ": expected" : "or",
                                    yysymbol_name(expected[i]));
   }

   if (lines.size() > 0)
   {
      output += "\n";
      for (int i = 0; i < lines.size(); i++)
      {
         int line = lines.size() - i;
         output += String::ToString("%5d | ", loc->first_line - (line - 1))
                 + lines[i] + "\n";
      }
      output += String::ToString("%5s | %*s", "", loc->first_column, "^");
   }

   yyerror("%s", output.c_str());
   return ret;
}
