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
  YYSYMBOL_rwCLAMP = 111,                  /* rwCLAMP  */
  YYSYMBOL_rwCLAMPF = 112,                 /* rwCLAMPF  */
  YYSYMBOL_rwLERP = 113,                   /* rwLERP  */
  YYSYMBOL_rwSMOOTHSTEP = 114,             /* rwSMOOTHSTEP  */
  YYSYMBOL_115_ = 115,                     /* '['  */
  YYSYMBOL_116_ = 116,                     /* '?'  */
  YYSYMBOL_UNARY = 117,                    /* UNARY  */
  YYSYMBOL_118_ = 118,                     /* ']'  */
  YYSYMBOL_YYACCEPT = 119,                 /* $accept  */
  YYSYMBOL_start = 120,                    /* start  */
  YYSYMBOL_decl_list = 121,                /* decl_list  */
  YYSYMBOL_decl = 122,                     /* decl  */
  YYSYMBOL_package_decl = 123,             /* package_decl  */
  YYSYMBOL_fn_decl_list = 124,             /* fn_decl_list  */
  YYSYMBOL_statement_list = 125,           /* statement_list  */
  YYSYMBOL_stmt = 126,                     /* stmt  */
  YYSYMBOL_fn_decl_stmt = 127,             /* fn_decl_stmt  */
  YYSYMBOL_func_var_list_decl = 128,       /* func_var_list_decl  */
  YYSYMBOL_func_var_list = 129,            /* func_var_list  */
  YYSYMBOL_param = 130,                    /* param  */
  YYSYMBOL_unpack_var_list = 131,          /* unpack_var_list  */
  YYSYMBOL_unpack_param = 132,             /* unpack_param  */
  YYSYMBOL_datablock_decl = 133,           /* datablock_decl  */
  YYSYMBOL_object_decl = 134,              /* object_decl  */
  YYSYMBOL_parent_block = 135,             /* parent_block  */
  YYSYMBOL_object_name = 136,              /* object_name  */
  YYSYMBOL_object_args = 137,              /* object_args  */
  YYSYMBOL_object_declare_block = 138,     /* object_declare_block  */
  YYSYMBOL_object_decl_list = 139,         /* object_decl_list  */
  YYSYMBOL_stmt_block = 140,               /* stmt_block  */
  YYSYMBOL_switch_stmt = 141,              /* switch_stmt  */
  YYSYMBOL_case_block = 142,               /* case_block  */
  YYSYMBOL_case_expr = 143,                /* case_expr  */
  YYSYMBOL_if_stmt = 144,                  /* if_stmt  */
  YYSYMBOL_while_stmt = 145,               /* while_stmt  */
  YYSYMBOL_for_stmt = 146,                 /* for_stmt  */
  YYSYMBOL_foreach_stmt = 147,             /* foreach_stmt  */
  YYSYMBOL_expression_stmt = 148,          /* expression_stmt  */
  YYSYMBOL_expr = 149,                     /* expr  */
  YYSYMBOL_slot_acc = 150,                 /* slot_acc  */
  YYSYMBOL_intslot_acc = 151,              /* intslot_acc  */
  YYSYMBOL_class_name_expr = 152,          /* class_name_expr  */
  YYSYMBOL_assign_op_struct = 153,         /* assign_op_struct  */
  YYSYMBOL_stmt_expr = 154,                /* stmt_expr  */
  YYSYMBOL_funcall_expr = 155,             /* funcall_expr  */
  YYSYMBOL_func_arg_item = 156,            /* func_arg_item  */
  YYSYMBOL_func_arg_list = 157,            /* func_arg_list  */
  YYSYMBOL_func_arg_list_decl = 158,       /* func_arg_list_decl  */
  YYSYMBOL_assert_expr = 159,              /* assert_expr  */
  YYSYMBOL_inline_command_expr = 160,      /* inline_command_expr  */
  YYSYMBOL_expr_list = 161,                /* expr_list  */
  YYSYMBOL_slot_assign_list_opt = 162,     /* slot_assign_list_opt  */
  YYSYMBOL_slot_assign_list = 163,         /* slot_assign_list  */
  YYSYMBOL_slot_assign = 164,              /* slot_assign  */
  YYSYMBOL_aidx_expr = 165                 /* aidx_expr  */
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
#define YYLAST   5696

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  119
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  221
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  580

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   348


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
      46,    48,    47,   116,    63,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   115,     2,   118,    60,     2,     2,     2,     2,     2,
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
     107,   108,   109,   110,   111,   112,   113,   114,   117
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   218,   218,   224,   225,   230,   232,   234,   239,   244,
     246,   252,   253,   258,   259,   260,   261,   262,   263,   264,
     266,   268,   270,   273,   280,   282,   284,   286,   290,   296,
     299,   305,   306,   311,   313,   330,   332,   334,   336,   343,
     345,   350,   352,   357,   362,   364,   366,   368,   370,   372,
     378,   379,   385,   386,   392,   393,   399,   400,   402,   404,
     409,   411,   416,   418,   423,   425,   433,   435,   437,   442,
     444,   449,   451,   456,   458,   463,   465,   467,   469,   471,
     473,   475,   477,   481,   484,   487,   490,   493,   504,   507,
     510,   513,   516,   519,   522,   527,   532,   534,   536,   538,
     540,   542,   544,   546,   548,   550,   552,   554,   556,   558,
     560,   569,   576,   583,   585,   587,   589,   591,   593,   595,
     597,   599,   601,   603,   605,   613,   615,   617,   619,   621,
     623,   625,   627,   629,   631,   633,   635,   637,   643,   645,
     650,   652,   657,   659,   664,   666,   668,   670,   672,   674,
     676,   678,   680,   682,   684,   686,   692,   694,   696,   698,
     700,   704,   712,   721,   725,   733,   735,   737,   739,   743,
     752,   788,   791,   794,   800,   802,   814,   816,   822,   823,
     844,   846,   853,   855,   857,   859,   861,   863,   865,   867,
     869,   871,   873,   875,   877,   879,   881,   883,   885,   887,
     889,   891,   893,   895,   897,   909,   911,   917,   918,   923,
     925,   931,   935,   942,   950,   954,   962,   964,   968,   975,
     998,  1000
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
  "rwCLAMP", "rwCLAMPF", "rwLERP", "rwSMOOTHSTEP", "'['", "'?'", "UNARY",
  "']'", "$accept", "start", "decl_list", "decl", "package_decl",
  "fn_decl_list", "statement_list", "stmt", "fn_decl_stmt",
  "func_var_list_decl", "func_var_list", "param", "unpack_var_list",
  "unpack_param", "datablock_decl", "object_decl", "parent_block",
  "object_name", "object_args", "object_declare_block", "object_decl_list",
  "stmt_block", "switch_stmt", "case_block", "case_expr", "if_stmt",
  "while_stmt", "for_stmt", "foreach_stmt", "expression_stmt", "expr",
  "slot_acc", "intslot_acc", "class_name_expr", "assign_op_struct",
  "stmt_expr", "funcall_expr", "func_arg_item", "func_arg_list",
  "func_arg_list_decl", "assert_expr", "inline_command_expr", "expr_list",
  "slot_assign_list_opt", "slot_assign_list", "slot_assign", "aidx_expr", YY_NULLPTR
  };
  return yy_sname[yysymbol];
}
#endif

#define YYPACT_NINF (-447)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-96)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -447,    41,   707,  -447,     9,    67,    67,    11,    23,    85,
    1928,    91,   929,   102,   108,   154,    67,   160,   186,    93,
     194,  -447,   150,   190,   -19,  -447,  -447,  -447,  -447,  3508,
    3508,  3508,  3508,  3508,   197,   217,   223,   228,   232,   235,
     242,   256,   258,   261,   267,   269,   285,   292,   294,   302,
     317,   318,   319,   320,   321,   322,   101,  -447,  -447,  -447,
    -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,   268,  5512,
     479,  -447,   324,  -447,  -447,  -447,   -14,  -447,  3508,   323,
     331,  -447,  -447,  3508,  -447,  -447,  -447,  3508,  4042,  -447,
    3508,  -447,  -447,   372,  2013,   352,   353,   336,  3508,  3508,
     332,  3508,  3508,  1484,  -447,  -447,  3508,  3508,  3508,  3508,
    3508,  3508,  3508,  3508,  3508,  3508,  3508,  -447,  2098,   355,
      75,    75,  4091,    75,    75,  3508,  3508,  3508,  2183,  3508,
    3508,  3508,  3508,  3508,  3508,  3508,  3508,  3508,  3508,  3508,
    3508,  3508,  3508,  3508,  3508,  3508,  3508,   277,   -41,  -447,
    -447,  3508,  3508,  3508,  3508,  3508,  3508,   356,  3508,  3508,
    3508,  3508,  3508,    67,    67,  3508,  3508,  3508,  3508,  3508,
    3508,  3508,  3508,  3508,  3508,  2268,  1595,  -447,   360,   361,
    4140,  1817,  3508,  4189,  5512,   -22,  -447,  4238,  1040,   343,
     158,  2353,  4287,   375,   376,  3508,  4336,  4385,   397,  3581,
    3630,  3508,  3508,  5512,  5512,  5512,  5512,  5512,  5512,  5512,
    5512,  5512,  5512,  5512,  5512,   -40,  3508,  5512,  -447,   349,
     351,   354,  -447,    36,    76,    88,  -447,   123,   166,   188,
     200,   204,   220,   224,   236,   246,   248,   253,   264,   273,
     276,   278,   280,   295,   297,   299,  -447,   101,   362,   272,
     272,    75,    75,   314,   314,   -13,   710,   821,    75,   530,
     414,  -447,  -447,    83,    83,   932,   932,   314,   314,   594,
    5608,   414,   414,  3508,  4434,  3508,  3508,  5512,   -44,   358,
     359,  -447,   365,  -447,  3508,   364,  5512,   364,   929,  3508,
     366,   929,  -447,  -447,  3508,  2438,  2548,  4483,  2633,  2718,
    3508,  4532,   367,   368,    10,  -447,  -447,   382,  3508,  -447,
     -17,   -35,  3508,   621,    86,  2098,  -447,  2098,  -447,  -447,
    -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,
    -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,
    -447,  3508,  2098,  3508,   133,  2828,   140,   -34,  3508,   374,
     369,   360,   360,   306,   392,   377,   377,   421,  5512,  -447,
    -447,  4581,  3508,  4630,   929,  4679,  2913,  2998,  4728,  3508,
    3679,  4777,   379,   404,   404,   380,  -447,   384,  4826,  -447,
    -447,  5512,  3083,  -447,  -447,  -447,   385,  4875,   386,   -33,
     387,  3508,  5561,  -447,  -447,  5512,  3508,  -447,  -447,   390,
     364,  -447,  3508,   391,   393,   929,  -447,  3728,  3508,  -447,
     929,   929,  4924,   929,  4973,  3168,  3777,   929,  3508,   929,
     378,  3508,   394,   401,  -447,  -447,  -447,  3508,  5512,  -447,
    -447,  -447,  -447,  3253,   145,  5512,  1151,   407,   377,   395,
     409,   410,  -447,   929,  3508,  3826,  -447,  -447,   929,  -447,
     929,   929,  5022,   929,  3508,  -447,  3880,  -447,    97,   -12,
    5512,  -447,  -447,   146,  3508,  5561,  -447,  -447,  -447,   408,
     247,   247,  -447,  3934,   929,  3508,  -447,  -447,  -447,   929,
    -447,  3988,   929,  3508,   422,   -42,   433,   412,    97,  -447,
    3508,  -447,  -447,   155,  1262,   417,   419,   425,   363,   247,
     426,   929,  3508,  -447,  5071,  -447,   929,  3508,  -447,  5120,
    3508,  1706,  3508,   -36,   429,  -447,  5512,   818,  -447,  -447,
     247,  -447,  -447,   430,   363,  -447,  -447,  5169,   929,  -447,
    5218,   929,  5267,  3508,  3508,  5316,   -31,  3338,  3508,  -447,
     435,  -447,   436,  -447,   929,  -447,   929,  -447,  -447,   157,
     -23,  -447,   441,  3508,  5365,   -20,  -447,  -447,  -447,  -447,
     437,   439,  3423,   167,  -447,   449,  1373,  -447,  -447,  3508,
    5414,   444,  3508,   168,  -447,  -447,  5463,   445,  -447,  -447
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     2,     1,     0,     0,     0,   131,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   130,   108,   136,   134,    27,   135,   128,   129,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     4,     7,     5,
       6,    17,   159,    18,    13,    14,    15,    16,     0,     0,
     132,   133,    96,   156,   157,   158,     0,   142,     0,     0,
       0,    19,    20,     0,   131,   108,    21,     0,     0,    96,
       0,    11,    63,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   145,   144,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   165,   178,     0,
     106,   107,     0,   127,   126,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    41,     0,    39,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   167,    31,     0,
       0,    52,    52,     0,   205,     0,    22,     0,     0,     0,
     136,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   160,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   220,     0,     0,   174,   176,   179,
       0,     0,    97,     0,     0,     0,   185,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    42,     0,     0,   102,
     103,   104,   105,   113,   114,   138,   101,   100,    99,    98,
     125,   140,   141,   120,   121,   117,   118,   115,   116,   122,
     119,   123,   124,     0,     0,     0,     0,   168,    35,     0,
      32,    33,     0,   143,    52,    50,    53,    50,     0,     0,
       0,     0,    62,    12,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,     0,     9,   180,     0,     0,    25,
       0,     0,     0,   137,     0,     0,   171,   178,   182,   183,
     184,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
      40,     0,   178,     0,     0,     0,     0,     0,     0,    36,
       0,     0,    31,     0,     0,    54,    54,    71,   206,    23,
      73,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,     0,     0,   161,
     162,   221,     0,   166,   175,   177,     0,     0,     0,     0,
       0,     0,   109,   169,   170,    37,     0,    11,    34,     0,
      50,    51,     0,     0,     0,     0,    74,     0,     0,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     8,   181,    26,     0,   163,   172,
      28,   173,   139,     0,     0,    38,     0,     0,    54,    55,
      45,    49,    72,     0,     0,     0,    81,    80,     0,    78,
       0,     0,     0,     0,     0,    88,     0,    89,   207,     0,
      69,    64,    65,     0,     0,   112,   111,    29,    11,     0,
      56,    56,    87,     0,     0,     0,    79,    77,    76,     0,
      94,     0,     0,     0,     0,     0,     0,     0,   208,   209,
       0,    11,   164,     0,     0,    47,     0,     0,    58,    57,
       0,     0,     0,    83,     0,    75,     0,     0,    90,     0,
       0,     0,     0,     0,     0,   210,    70,    66,   110,    30,
      56,    60,    44,     0,    59,    48,    84,     0,     0,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    43,
       0,    68,     0,    61,     0,    85,     0,    92,   216,     0,
       0,   211,     0,     0,     0,     0,    11,    46,    86,    93,
       0,     0,     0,     0,   214,     0,    67,   212,   213,     0,
       0,     0,     0,     0,   217,   215,     0,     0,   219,   218
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -447,  -447,  -447,  -447,  -447,  -447,  -374,    -1,  -189,   151,
    -447,   147,  -447,   259,  -447,  -280,  -282,  -165,  -345,  -446,
       8,  -202,  -447,  -371,  -447,  -447,  -447,  -447,  -447,  -447,
      -2,  -447,  -447,    20,   -68,   173,  -447,   196,  -447,  -299,
    -447,  -447,   -79,  -447,    54,  -417,  -336
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,    57,    58,   304,   188,    92,    60,   279,
     280,   281,   148,   149,    61,    62,   355,   285,   403,   497,
     498,    93,    63,   422,   459,    64,    65,    66,    67,    68,
     184,    70,    71,    79,   117,    89,    73,   218,   219,   220,
      74,    75,   185,   487,   499,   489,   215
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      69,    59,   177,   423,   348,   356,   511,   389,    88,   305,
      69,   404,   537,     4,   247,   312,   490,   287,   386,   372,
     289,   289,   312,   436,   312,   500,    80,   120,   121,   122,
     123,   124,   289,   289,   118,   312,    97,   290,   289,   178,
     342,     3,   379,   388,   491,    76,   223,   224,   225,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,    81,   375,
     119,   515,   349,   512,   542,   179,   180,   248,   313,   538,
      82,   183,   515,   380,   394,   432,   357,   552,   187,   360,
     318,   289,   192,   469,   494,   561,   196,   197,   565,   199,
     200,   203,   343,    77,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   376,   217,   517,   438,   353,
      78,   484,   310,   311,   157,   151,   152,   153,   154,   100,
     319,   289,   157,   485,   486,   160,   147,   314,    83,   163,
     164,   289,   320,   289,    90,   384,   541,   163,   164,   249,
     250,   251,   252,   253,   254,    94,   256,   257,   258,   259,
     260,    95,   409,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   274,   277,    72,   536,   321,   289,   286,
     286,   295,   566,   261,   262,    72,    69,   293,   289,   297,
     496,   496,   390,   301,   344,   289,   346,   347,   102,   393,
     289,   289,   555,   442,   466,   492,   103,    96,   446,   447,
     289,   449,   289,    98,   518,   455,   560,   457,   523,   496,
     322,   289,   289,   289,   104,   105,   571,   577,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   103,    99,
     496,   472,   323,   289,   523,   383,   476,   101,   477,   478,
     125,   480,     5,     6,   324,   289,   104,   105,   325,   289,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     126,   484,   503,   116,   326,   289,   127,   505,   327,   289,
     508,   128,   286,   485,   486,   129,    69,   358,   130,    69,
     328,   289,   361,   363,   365,   131,   368,   370,   371,   526,
     329,   289,   330,   289,   529,   116,   378,   331,   289,   132,
     381,   133,   434,   217,   134,   217,   153,   154,   332,   289,
     135,   157,   136,   439,   160,   150,   545,   333,   289,   547,
     334,   289,   335,   289,   336,   289,   163,   164,   137,   387,
     217,   214,   558,   392,   559,   138,   395,   139,   463,   337,
     289,   338,   289,   339,   289,   140,   151,   152,   153,   154,
     407,    72,    69,   157,   412,   414,   160,   416,     5,     6,
     141,   142,   143,   144,   145,   146,   181,   162,   163,   164,
     428,   -95,   165,   166,   182,   493,   189,   193,   194,   195,
     198,   221,   255,   246,   435,   278,   294,   282,   299,   300,
       4,   173,   174,    69,   315,   316,   445,   317,    69,    69,
     341,    69,   350,   452,   351,    69,   456,    69,   352,   460,
     354,   377,   396,   359,   400,   373,   374,   397,   401,   405,
     421,   465,   402,   420,    69,   293,   458,   424,   425,   429,
     431,    69,   473,   433,   437,   440,    69,   441,    69,    69,
     289,    69,   481,   461,   549,   550,   151,   152,   153,   154,
     462,    72,   495,   157,    72,   468,   160,   470,   471,   513,
     510,   514,    69,   504,   563,   520,   521,    69,   163,   164,
      69,   509,   165,   166,   522,   525,   539,   543,   516,   562,
     573,   556,    69,   293,   567,   557,   568,   572,   398,    69,
     527,   575,   579,   399,    69,   530,   340,   524,   532,   535,
     214,   385,   488,     0,     0,    69,   293,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    69,   176,     0,    69,
       0,     0,     0,     0,     0,   554,   214,    72,     0,     0,
       0,     0,    69,     0,    69,   104,   105,     0,     0,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,     0,
     570,     0,     0,     0,    69,   293,     0,     0,     0,     0,
     576,     0,   151,   152,   153,   154,   155,   156,    72,   157,
       0,   159,   160,    72,    72,     0,    72,     0,     0,     0,
      72,     0,    72,   162,   163,   164,     0,     0,   165,   166,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
       0,   167,   168,   169,   170,     0,    72,   173,   174,     0,
       0,    72,     0,    72,    72,     0,    72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   151,   152,   153,   154,
     155,   156,     0,   157,   158,   159,   160,    72,     0,     0,
       0,     0,    72,     0,   161,    72,     0,   162,   163,   164,
       0,     0,   165,   166,     0,     0,     0,    72,     0,   382,
       0,     0,     0,     0,    72,   167,   168,   169,   170,    72,
       0,   173,   174,     0,     0,     0,     0,   104,   105,     0,
      72,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,    72,     0,     0,    72,     0,     0,     0,     0,     0,
       4,     0,     5,     6,     7,     0,     8,    72,     9,    72,
      10,    11,    12,     0,     0,     0,     0,    13,    14,    15,
       0,    16,    17,     0,    18,     0,    19,    20,     0,    72,
      21,    22,    23,    24,     0,    25,    26,    27,    28,     0,
      29,    30,   151,   152,   153,   154,   155,   156,     0,   157,
      31,   159,   160,     0,     0,     0,     0,     0,    32,    33,
     161,     0,     0,   162,   163,   164,     0,     0,   165,   166,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   167,   168,   169,   170,     0,     0,   173,   174,     0,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,     5,     6,     7,     0,     8,     0,     9,
       0,    10,    11,    12,     0,     0,     0,   540,    13,    14,
      15,     0,    16,    17,   421,    18,     0,     0,    20,     0,
       0,    21,    22,    23,    24,     0,    25,    26,    27,    28,
       0,    29,    30,   151,   152,   153,   154,   155,   156,     0,
     157,    31,     0,   160,     0,     0,     0,     0,     0,    32,
      33,     0,     0,     0,   162,   163,   164,     0,     0,   165,
     166,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   167,   168,   169,   170,     0,     0,   173,   174,
       0,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,     5,     6,     7,     0,     8,     0,
       9,     0,    10,    11,    12,     0,     0,     0,     0,    13,
      14,    15,     0,    16,    17,     0,    18,     0,     0,    20,
       0,     0,    21,    22,    23,    24,     0,    25,    26,    27,
      28,     0,    29,    30,   151,   152,   153,   154,   155,   156,
       0,   157,    31,     0,   160,     0,     0,    91,     0,     0,
      32,    33,     0,     0,     0,   162,   163,   164,     0,     0,
     165,   166,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   169,   170,     0,     0,   173,
     174,     0,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,     5,     6,     7,     0,     8,
       0,     9,     0,    10,    11,    12,     0,     0,     0,     0,
      13,    14,    15,     0,    16,    17,     0,    18,     0,     0,
      20,     0,     0,    21,    22,    23,    24,     0,    25,    26,
      27,    28,     0,    29,    30,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     0,     0,     0,     0,   292,
       0,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,     5,     6,     7,     0,
       8,     0,     9,     0,    10,    11,    12,     0,     0,     0,
       0,    13,    14,    15,     0,    16,    17,     0,    18,     0,
       0,    20,     0,     0,    21,    22,    23,    24,     0,    25,
      26,    27,    28,     0,    29,    30,     0,     0,     0,     0,
       0,     0,     0,     0,    31,     0,     0,     0,     0,     0,
     467,     0,    32,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,     5,     6,     7,
       0,     8,     0,     9,     0,    10,    11,    12,     0,     0,
       0,     0,    13,    14,    15,     0,    16,    17,     0,    18,
       0,     0,    20,     0,     0,    21,    22,    23,    24,     0,
      25,    26,    27,    28,     0,    29,    30,     0,     0,     0,
       0,     0,     0,     0,     0,    31,     0,     0,     0,     0,
       0,   519,     0,    32,    33,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,     5,     6,
       7,     0,     8,     0,     9,     0,    10,    11,    12,     0,
       0,     0,     0,    13,    14,    15,     0,    16,    17,     0,
      18,     0,     0,    20,     0,     0,    21,    22,    23,    24,
       0,    25,    26,    27,    28,     0,    29,    30,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,     0,     0,
       0,     0,     0,     0,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,     5,
       6,    84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    20,     0,     0,    21,    85,    23,
      24,     0,     0,    26,    27,    28,     0,    29,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    31,     0,     0,
       0,     0,   201,     0,     0,    32,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,   202,
       5,     6,    84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     0,     0,    21,    85,
      23,    24,     0,     0,    26,    27,    28,     0,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
       0,     0,     0,   275,     0,     0,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
     276,     5,     6,    84,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    20,     0,     0,    21,
      85,    23,    24,     0,     0,    26,    27,    28,     0,    29,
      30,     0,     0,     0,     0,     0,     0,     0,     0,    31,
       0,     0,     0,     0,   533,     0,     0,    32,    33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,   534,     5,     6,    84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,     0,     0,
      21,    85,    23,    24,     0,     0,    26,    27,    28,     0,
      29,    30,     0,     0,     0,     0,     0,     0,     0,     0,
      31,     0,     0,     0,     0,     0,     0,     0,    32,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,   284,     5,     6,    84,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
       0,    21,    85,    23,    24,     0,     0,    26,    27,    28,
       0,    29,    30,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     0,     0,     0,    86,    87,     0,     0,    32,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
      84,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    20,     0,     0,    21,    85,   190,    24,
       0,     0,    26,    27,    28,     0,    29,    30,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,     0,     0,
     191,     0,     0,     0,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     6,    84,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    20,     0,
       0,    21,    85,    23,    24,     0,     0,    26,    27,    28,
       0,    29,    30,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     0,     0,     0,     0,   216,     0,     0,    32,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
      84,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    20,     0,     0,    21,    85,    23,    24,
       0,     0,    26,    27,    28,     0,    29,    30,     0,     0,
       0,     0,     0,     0,     0,     0,    31,   226,     0,     0,
       0,     0,     0,     0,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     6,    84,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    20,     0,
       0,    21,    85,    23,    24,     0,     0,    26,    27,    28,
       0,    29,    30,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     0,     0,     0,     0,   273,     0,     0,    32,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
      84,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    20,     0,     0,    21,    85,    23,    24,
       0,     0,    26,    27,    28,     0,    29,    30,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,     0,     0,
     296,     0,     0,     0,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     6,    84,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    20,     0,
       0,    21,    85,    23,    24,     0,     0,    26,    27,    28,
       0,    29,    30,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     0,     0,     0,     0,     0,     0,     0,    32,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   362,
       0,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     5,     6,    84,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
       0,    21,    85,    23,    24,     0,     0,    26,    27,    28,
       0,    29,    30,     0,     0,     0,     0,     0,     0,     0,
       0,    31,   364,     0,     0,     0,     0,     0,     0,    32,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
      84,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    20,     0,     0,    21,    85,    23,    24,
       0,     0,    26,    27,    28,     0,    29,    30,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,     0,     0,
     367,     0,     0,     0,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     6,    84,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    20,     0,
       0,    21,    85,    23,    24,     0,     0,    26,    27,    28,
       0,    29,    30,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     0,     0,     0,     0,     0,     0,     0,    32,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   369,
       0,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     5,     6,    84,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
       0,    21,    85,    23,    24,     0,     0,    26,    27,    28,
       0,    29,    30,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     0,     0,     0,     0,   391,     0,     0,    32,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
      84,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    20,     0,     0,    21,    85,    23,    24,
       0,     0,    26,    27,    28,     0,    29,    30,     0,     0,
       0,     0,     0,     0,     0,     0,    31,   411,     0,     0,
       0,     0,     0,     0,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     6,    84,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    20,     0,
       0,    21,    85,    23,    24,     0,     0,    26,    27,    28,
       0,    29,    30,     0,     0,     0,     0,     0,     0,     0,
       0,    31,   413,     0,     0,     0,     0,     0,     0,    32,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
      84,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    20,     0,     0,    21,    85,    23,    24,
       0,     0,    26,    27,    28,     0,    29,    30,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,     0,     0,
       0,   427,     0,     0,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     6,    84,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    20,     0,
       0,    21,    85,    23,    24,     0,     0,    26,    27,    28,
       0,    29,    30,     0,     0,     0,     0,     0,     0,     0,
       0,    31,   451,     0,     0,     0,     0,     0,     0,    32,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
      84,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    20,     0,     0,    21,    85,    23,    24,
       0,     0,    26,    27,    28,     0,    29,    30,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,     0,     0,
       0,   464,     0,     0,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     6,    84,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    20,     0,
       0,    21,    85,    23,    24,     0,     0,    26,    27,    28,
       0,    29,    30,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     0,     0,     0,     0,   553,     0,     0,    32,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
      84,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    20,     0,     0,    21,    85,    23,    24,
       0,     0,    26,    27,    28,     0,    29,    30,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,     0,     0,
       0,   569,     0,     0,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     6,    84,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    20,     0,
       0,    21,    85,    23,    24,     0,     0,    26,    27,    28,
       0,    29,    30,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     0,     0,     0,     0,     0,     0,     0,    32,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,   151,   152,   153,   154,   155,   156,     0,
     157,   158,   159,   160,     0,   306,   307,     0,     0,     0,
       0,   161,     0,     0,   162,   163,   164,     0,     0,   165,
     166,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   167,   168,   169,   170,   171,   172,   173,   174,
       0,     0,   151,   152,   153,   154,   155,   156,     0,   157,
     158,   159,   160,     0,     0,   308,     0,   309,     0,     0,
     161,     0,     0,   162,   163,   164,     0,   175,   165,   166,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   167,   168,   169,   170,   171,   172,   173,   174,     0,
       0,   151,   152,   153,   154,   155,   156,     0,   157,   158,
     159,   160,     0,   417,     0,     0,     0,     0,     0,   161,
       0,     0,   162,   163,   164,     0,   175,   165,   166,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     167,   168,   169,   170,   171,   172,   173,   174,     0,   418,
     151,   152,   153,   154,   155,   156,     0,   157,   158,   159,
     160,     0,   443,     0,     0,     0,     0,     0,   161,     0,
       0,   162,   163,   164,     0,   175,   165,   166,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   167,
     168,   169,   170,   171,   172,   173,   174,     0,   444,   151,
     152,   153,   154,   155,   156,     0,   157,   158,   159,   160,
       0,   453,     0,     0,     0,     0,     0,   161,     0,     0,
     162,   163,   164,     0,   175,   165,   166,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   167,   168,
     169,   170,   171,   172,   173,   174,     0,   454,   151,   152,
     153,   154,   155,   156,     0,   157,   158,   159,   160,     0,
     474,     0,     0,     0,     0,     0,   161,     0,     0,   162,
     163,   164,     0,   175,   165,   166,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   167,   168,   169,
     170,   171,   172,   173,   174,     0,     0,     0,   475,     0,
       0,     0,   151,   152,   153,   154,   155,   156,     0,   157,
     158,   159,   160,     0,   482,     0,     0,     0,     0,     0,
     161,     0,   175,   162,   163,   164,     0,     0,   165,   166,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   167,   168,   169,   170,   171,   172,   173,   174,     0,
       0,     0,   483,     0,     0,     0,   151,   152,   153,   154,
     155,   156,     0,   157,   158,   159,   160,     0,   501,     0,
       0,     0,     0,     0,   161,     0,   175,   162,   163,   164,
       0,     0,   165,   166,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   167,   168,   169,   170,   171,
     172,   173,   174,     0,     0,     0,   502,     0,     0,     0,
     151,   152,   153,   154,   155,   156,     0,   157,   158,   159,
     160,     0,   506,     0,     0,     0,     0,     0,   161,     0,
     175,   162,   163,   164,     0,     0,   165,   166,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   167,
     168,   169,   170,   171,   172,   173,   174,     0,     0,     0,
     507,     0,     0,     0,   151,   152,   153,   154,   155,   156,
       0,   157,   158,   159,   160,     0,     0,     0,     0,   186,
       0,     0,   161,     0,   175,   162,   163,   164,     0,     0,
     165,   166,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   167,   168,   169,   170,   171,   172,   173,
     174,     0,     0,   151,   152,   153,   154,   155,   156,     0,
     157,   158,   159,   160,     0,   222,     0,     0,     0,     0,
       0,   161,     0,     0,   162,   163,   164,     0,   175,   165,
     166,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   167,   168,   169,   170,   171,   172,   173,   174,
       0,     0,   151,   152,   153,   154,   155,   156,     0,   157,
     158,   159,   160,     0,   283,     0,     0,     0,     0,     0,
     161,     0,     0,   162,   163,   164,     0,   175,   165,   166,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   167,   168,   169,   170,   171,   172,   173,   174,     0,
       0,   151,   152,   153,   154,   155,   156,     0,   157,   158,
     159,   160,     0,   288,     0,     0,     0,     0,     0,   161,
       0,     0,   162,   163,   164,     0,   175,   165,   166,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     167,   168,   169,   170,   171,   172,   173,   174,     0,     0,
     151,   152,   153,   154,   155,   156,     0,   157,   158,   159,
     160,     0,   291,     0,     0,     0,     0,     0,   161,     0,
       0,   162,   163,   164,     0,   175,   165,   166,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   167,
     168,   169,   170,   171,   172,   173,   174,     0,     0,   151,
     152,   153,   154,   155,   156,     0,   157,   158,   159,   160,
       0,     0,     0,     0,   298,     0,     0,   161,     0,     0,
     162,   163,   164,     0,   175,   165,   166,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   167,   168,
     169,   170,   171,   172,   173,   174,     0,     0,   151,   152,
     153,   154,   155,   156,     0,   157,   158,   159,   160,     0,
     302,     0,     0,     0,     0,     0,   161,     0,     0,   162,
     163,   164,     0,   175,   165,   166,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   167,   168,   169,
     170,   171,   172,   173,   174,     0,     0,   151,   152,   153,
     154,   155,   156,     0,   157,   158,   159,   160,     0,   303,
       0,     0,     0,     0,     0,   161,     0,     0,   162,   163,
     164,     0,   175,   165,   166,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   167,   168,   169,   170,
     171,   172,   173,   174,     0,     0,   151,   152,   153,   154,
     155,   156,     0,   157,   158,   159,   160,     0,     0,     0,
     345,     0,     0,     0,   161,     0,     0,   162,   163,   164,
       0,   175,   165,   166,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   167,   168,   169,   170,   171,
     172,   173,   174,     0,     0,   151,   152,   153,   154,   155,
     156,     0,   157,   158,   159,   160,     0,     0,     0,     0,
     366,     0,     0,   161,     0,     0,   162,   163,   164,     0,
     175,   165,   166,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   167,   168,   169,   170,   171,   172,
     173,   174,     0,     0,   151,   152,   153,   154,   155,   156,
       0,   157,   158,   159,   160,     0,     0,     0,   354,     0,
       0,     0,   161,     0,     0,   162,   163,   164,     0,   175,
     165,   166,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   167,   168,   169,   170,   171,   172,   173,
     174,     0,     0,   151,   152,   153,   154,   155,   156,     0,
     157,   158,   159,   160,     0,   406,     0,     0,     0,     0,
       0,   161,     0,     0,   162,   163,   164,     0,   175,   165,
     166,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   167,   168,   169,   170,   171,   172,   173,   174,
       0,     0,   151,   152,   153,   154,   155,   156,     0,   157,
     158,   159,   160,     0,     0,     0,     0,     0,     0,     0,
     161,     0,     0,   162,   163,   164,     0,   175,   165,   166,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   167,   168,   169,   170,   171,   172,   173,   174,     0,
     408,   151,   152,   153,   154,   155,   156,     0,   157,   158,
     159,   160,     0,   410,     0,     0,     0,     0,     0,   161,
       0,     0,   162,   163,   164,     0,   175,   165,   166,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     167,   168,   169,   170,   171,   172,   173,   174,     0,     0,
     151,   152,   153,   154,   155,   156,     0,   157,   158,   159,
     160,     0,     0,     0,     0,   415,     0,     0,   161,     0,
       0,   162,   163,   164,     0,   175,   165,   166,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   167,
     168,   169,   170,   171,   172,   173,   174,     0,     0,   151,
     152,   153,   154,   155,   156,     0,   157,   158,   159,   160,
       0,   419,     0,     0,     0,     0,     0,   161,     0,     0,
     162,   163,   164,     0,   175,   165,   166,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   167,   168,
     169,   170,   171,   172,   173,   174,     0,     0,   151,   152,
     153,   154,   155,   156,     0,   157,   158,   159,   160,     0,
       0,     0,     0,   426,     0,     0,   161,     0,     0,   162,
     163,   164,     0,   175,   165,   166,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   167,   168,   169,
     170,   171,   172,   173,   174,     0,     0,   151,   152,   153,
     154,   155,   156,     0,   157,   158,   159,   160,     0,     0,
       0,     0,   430,     0,     0,   161,     0,     0,   162,   163,
     164,     0,   175,   165,   166,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   167,   168,   169,   170,
     171,   172,   173,   174,     0,     0,   151,   152,   153,   154,
     155,   156,     0,   157,   158,   159,   160,     0,   448,     0,
       0,     0,     0,     0,   161,     0,     0,   162,   163,   164,
       0,   175,   165,   166,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   167,   168,   169,   170,   171,
     172,   173,   174,     0,     0,   151,   152,   153,   154,   155,
     156,     0,   157,   158,   159,   160,     0,   450,     0,     0,
       0,     0,     0,   161,     0,     0,   162,   163,   164,     0,
     175,   165,   166,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   167,   168,   169,   170,   171,   172,
     173,   174,     0,     0,   151,   152,   153,   154,   155,   156,
       0,   157,   158,   159,   160,     0,   479,     0,     0,     0,
       0,     0,   161,     0,     0,   162,   163,   164,     0,   175,
     165,   166,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   167,   168,   169,   170,   171,   172,   173,
     174,     0,     0,   151,   152,   153,   154,   155,   156,     0,
     157,   158,   159,   160,     0,   528,     0,     0,     0,     0,
       0,   161,     0,     0,   162,   163,   164,     0,   175,   165,
     166,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   167,   168,   169,   170,   171,   172,   173,   174,
       0,     0,   151,   152,   153,   154,   155,   156,     0,   157,
     158,   159,   160,     0,   531,     0,     0,     0,     0,     0,
     161,     0,     0,   162,   163,   164,     0,   175,   165,   166,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   167,   168,   169,   170,   171,   172,   173,   174,     0,
       0,   151,   152,   153,   154,   155,   156,     0,   157,   158,
     159,   160,     0,   544,     0,     0,     0,     0,     0,   161,
       0,     0,   162,   163,   164,     0,   175,   165,   166,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     167,   168,   169,   170,   171,   172,   173,   174,     0,     0,
     151,   152,   153,   154,   155,   156,     0,   157,   158,   159,
     160,     0,   546,     0,     0,     0,     0,     0,   161,     0,
       0,   162,   163,   164,     0,   175,   165,   166,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   167,
     168,   169,   170,   171,   172,   173,   174,     0,     0,   151,
     152,   153,   154,   155,   156,     0,   157,   158,   159,   160,
       0,     0,     0,     0,   548,     0,     0,   161,     0,     0,
     162,   163,   164,     0,   175,   165,   166,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   167,   168,
     169,   170,   171,   172,   173,   174,     0,     0,   151,   152,
     153,   154,   155,   156,     0,   157,   158,   159,   160,     0,
       0,     0,     0,   551,     0,     0,   161,     0,     0,   162,
     163,   164,     0,   175,   165,   166,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   167,   168,   169,
     170,   171,   172,   173,   174,     0,     0,   151,   152,   153,
     154,   155,   156,     0,   157,   158,   159,   160,     0,     0,
       0,     0,   564,     0,     0,   161,     0,     0,   162,   163,
     164,     0,   175,   165,   166,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   167,   168,   169,   170,
     171,   172,   173,   174,     0,     0,   151,   152,   153,   154,
     155,   156,     0,   157,   158,   159,   160,     0,     0,     0,
       0,   574,     0,     0,   161,     0,     0,   162,   163,   164,
       0,   175,   165,   166,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   167,   168,   169,   170,   171,
     172,   173,   174,     0,     0,   151,   152,   153,   154,   155,
     156,     0,   157,   158,   159,   160,     0,     0,     0,     0,
     578,     0,     0,   161,     0,     0,   162,   163,   164,     0,
     175,   165,   166,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   167,   168,   169,   170,   171,   172,
     173,   174,     0,     0,   151,   152,   153,   154,   155,   156,
       0,   157,   158,   159,   160,     0,     0,     0,     0,     0,
       0,     0,   161,     0,     0,   162,   163,   164,     0,   175,
     165,   166,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   167,   168,   169,   170,   171,   172,   173,
     174,     0,     0,   151,   152,   153,   154,   155,   156,     0,
     157,   158,   159,   160,     0,     0,     0,     0,     0,     0,
       0,   161,     0,     0,   162,   163,   164,     0,   175,   165,
     166,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   167,   168,   169,   170,   171,   172,   173,   174,
     151,   152,   153,   154,   155,   156,     0,   157,   158,   159,
     160,     0,     0,     0,     0,     0,     0,     0,   161,     0,
       0,   162,   163,   164,     0,     0,   165,   166,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   167,
     168,   169,   170,   171,     0,   173,   174
};

static const yytype_int16 yycheck[] =
{
       2,     2,    70,   374,    48,   287,    48,   343,    10,   198,
      12,   356,    48,     3,    55,    55,    28,   182,   317,   301,
      55,    55,    55,   397,    55,   471,     6,    29,    30,    31,
      32,    33,    55,    55,    53,    55,    16,    59,    55,    53,
      53,     0,    59,   342,    56,    36,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,    57,    59,
      89,   488,   116,   115,   520,    89,    78,   118,   118,   115,
      57,    83,   499,   118,   118,   118,   288,   118,    90,   291,
      54,    55,    94,   438,   468,   118,    98,    99,   118,   101,
     102,   103,   115,    36,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   304,   118,   491,   400,   284,
      53,    24,   201,   202,    49,    42,    43,    44,    45,    36,
      54,    55,    49,    36,    37,    52,    35,   216,    53,    64,
      65,    55,    54,    55,    53,    59,   517,    64,    65,   151,
     152,   153,   154,   155,   156,    53,   158,   159,   160,   161,
     162,    53,   364,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,     2,   512,    54,    55,   181,
     182,    23,   556,   163,   164,    12,   188,   188,    55,   191,
     470,   471,    59,   195,   273,    55,   275,   276,    48,    59,
      55,    55,   538,   405,    59,    59,    48,    53,   410,   411,
      55,   413,    55,    53,    59,   417,    59,   419,   498,   499,
      54,    55,    55,    55,    66,    67,    59,    59,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    48,    53,
     520,   443,    54,    55,   524,   313,   448,    53,   450,   451,
      53,   453,     5,     6,    54,    55,    66,    67,    54,    55,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      53,    24,   474,   115,    54,    55,    53,   479,    54,    55,
     482,    53,   284,    36,    37,    53,   288,   289,    53,   291,
      54,    55,   294,   295,   296,    53,   298,   299,   300,   501,
      54,    55,    54,    55,   506,   115,   308,    54,    55,    53,
     312,    53,   391,   315,    53,   317,    44,    45,    54,    55,
      53,    49,    53,   402,    52,    57,   528,    54,    55,   531,
      54,    55,    54,    55,    54,    55,    64,    65,    53,   341,
     342,   343,   544,   345,   546,    53,   348,    53,   427,    54,
      55,    54,    55,    54,    55,    53,    42,    43,    44,    45,
     362,   188,   364,    49,   366,   367,    52,   369,     5,     6,
      53,    53,    53,    53,    53,    53,    53,    63,    64,    65,
     382,    57,    68,    69,    53,   464,    14,    35,    35,    53,
      58,    36,    36,   116,   396,    35,    53,    36,    23,    23,
       3,    87,    88,   405,    55,    54,   408,    53,   410,   411,
      48,   413,    54,   415,    55,   417,   418,   419,    53,   421,
      56,    39,    48,    57,   118,    58,    58,    58,    36,     8,
      26,   433,    55,    54,   436,   436,    58,    57,    54,    54,
      54,   443,   444,    56,    54,    54,   448,    54,   450,   451,
      55,   453,   454,    59,   533,   534,    42,    43,    44,    45,
      59,   288,    54,    49,   291,    58,    52,    58,    58,    36,
      48,    59,   474,   475,   553,    58,    57,   479,    64,    65,
     482,   483,    68,    69,    59,    59,    57,    57,   490,    48,
     569,    56,   494,   494,    57,    59,    57,    48,   351,   501,
     502,    57,    57,   352,   506,   507,   247,   499,   510,   511,
     512,   315,   458,    -1,    -1,   517,   517,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   528,    48,    -1,   531,
      -1,    -1,    -1,    -1,    -1,   537,   538,   364,    -1,    -1,
      -1,    -1,   544,    -1,   546,    66,    67,    -1,    -1,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    -1,
     562,    -1,    -1,    -1,   566,   566,    -1,    -1,    -1,    -1,
     572,    -1,    42,    43,    44,    45,    46,    47,   405,    49,
      -1,    51,    52,   410,   411,    -1,   413,    -1,    -1,    -1,
     417,    -1,   419,    63,    64,    65,    -1,    -1,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   436,
      -1,    81,    82,    83,    84,    -1,   443,    87,    88,    -1,
      -1,   448,    -1,   450,   451,    -1,   453,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    51,    52,   474,    -1,    -1,
      -1,    -1,   479,    -1,    60,   482,    -1,    63,    64,    65,
      -1,    -1,    68,    69,    -1,    -1,    -1,   494,    -1,    48,
      -1,    -1,    -1,    -1,   501,    81,    82,    83,    84,   506,
      -1,    87,    88,    -1,    -1,    -1,    -1,    66,    67,    -1,
     517,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,   528,    -1,    -1,   531,    -1,    -1,    -1,    -1,    -1,
       3,    -1,     5,     6,     7,    -1,     9,   544,    11,   546,
      13,    14,    15,    -1,    -1,    -1,    -1,    20,    21,    22,
      -1,    24,    25,    -1,    27,    -1,    29,    30,    -1,   566,
      33,    34,    35,    36,    -1,    38,    39,    40,    41,    -1,
      43,    44,    42,    43,    44,    45,    46,    47,    -1,    49,
      53,    51,    52,    -1,    -1,    -1,    -1,    -1,    61,    62,
      60,    -1,    -1,    63,    64,    65,    -1,    -1,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    -1,    -1,    87,    88,    -1,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,     5,     6,     7,    -1,     9,    -1,    11,
      -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,    21,
      22,    -1,    24,    25,    26,    27,    -1,    -1,    30,    -1,
      -1,    33,    34,    35,    36,    -1,    38,    39,    40,    41,
      -1,    43,    44,    42,    43,    44,    45,    46,    47,    -1,
      49,    53,    -1,    52,    -1,    -1,    -1,    -1,    -1,    61,
      62,    -1,    -1,    -1,    63,    64,    65,    -1,    -1,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    -1,    -1,    87,    88,
      -1,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,     5,     6,     7,    -1,     9,    -1,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    -1,    20,
      21,    22,    -1,    24,    25,    -1,    27,    -1,    -1,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    38,    39,    40,
      41,    -1,    43,    44,    42,    43,    44,    45,    46,    47,
      -1,    49,    53,    -1,    52,    -1,    -1,    58,    -1,    -1,
      61,    62,    -1,    -1,    -1,    63,    64,    65,    -1,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    84,    -1,    -1,    87,
      88,    -1,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,     5,     6,     7,    -1,     9,
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
     110,   111,   112,   113,   114,   115,     5,     6,     7,    -1,
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
     109,   110,   111,   112,   113,   114,   115,     5,     6,     7,
      -1,     9,    -1,    11,    -1,    13,    14,    15,    -1,    -1,
      -1,    -1,    20,    21,    22,    -1,    24,    25,    -1,    27,
      -1,    -1,    30,    -1,    -1,    33,    34,    35,    36,    -1,
      38,    39,    40,    41,    -1,    43,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    59,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,     5,     6,
       7,    -1,     9,    -1,    11,    -1,    13,    14,    15,    -1,
      -1,    -1,    -1,    20,    21,    22,    -1,    24,    25,    -1,
      27,    -1,    -1,    30,    -1,    -1,    33,    34,    35,    36,
      -1,    38,    39,    40,    41,    -1,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    33,    34,    35,
      36,    -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
       5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    33,
      34,    35,    36,    -1,    -1,    39,    40,    41,    -1,    43,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    58,    -1,    -1,    61,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,    -1,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,     5,     6,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
      -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    57,    58,    -1,    -1,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,    30,    -1,    -1,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,     6,     7,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,    30,    -1,
      -1,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
      -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    58,    -1,    -1,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,    30,    -1,    -1,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,     6,     7,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,    30,    -1,
      -1,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
      -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    58,    -1,    -1,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,    30,    -1,    -1,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,     6,     7,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,    30,    -1,
      -1,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
      -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,     5,     6,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
      -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,    30,    -1,    -1,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,     6,     7,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,    30,    -1,
      -1,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
      -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,     5,     6,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
      -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    58,    -1,    -1,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,    30,    -1,    -1,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,     6,     7,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,    30,    -1,
      -1,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
      -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,    30,    -1,    -1,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,     6,     7,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,    30,    -1,
      -1,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
      -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,    30,    -1,    -1,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,     6,     7,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,    30,    -1,
      -1,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
      -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    58,    -1,    -1,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,    30,    -1,    -1,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,     6,     7,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,    30,    -1,
      -1,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
      -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    51,    52,    -1,    54,    55,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    63,    64,    65,    -1,    -1,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    -1,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    51,    52,    -1,    -1,    55,    -1,    57,    -1,    -1,
      60,    -1,    -1,    63,    64,    65,    -1,   116,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      -1,    42,    43,    44,    45,    46,    47,    -1,    49,    50,
      51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    63,    64,    65,    -1,   116,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    90,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    63,    64,    65,    -1,   116,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    90,    42,
      43,    44,    45,    46,    47,    -1,    49,    50,    51,    52,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      63,    64,    65,    -1,   116,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    90,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    52,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    63,
      64,    65,    -1,   116,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      60,    -1,   116,    63,    64,    65,    -1,    -1,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    51,    52,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    60,    -1,   116,    63,    64,    65,
      -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    -1,
     116,    63,    64,    65,    -1,    -1,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    60,    -1,   116,    63,    64,    65,    -1,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    -1,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    51,    52,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    63,    64,    65,    -1,   116,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    -1,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    63,    64,    65,    -1,   116,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      -1,    42,    43,    44,    45,    46,    47,    -1,    49,    50,
      51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    63,    64,    65,    -1,   116,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    -1,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    63,    64,    65,    -1,   116,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    -1,    42,
      43,    44,    45,    46,    47,    -1,    49,    50,    51,    52,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    60,    -1,    -1,
      63,    64,    65,    -1,   116,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    -1,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    52,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    63,
      64,    65,    -1,   116,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    -1,    42,    43,    44,
      45,    46,    47,    -1,    49,    50,    51,    52,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    63,    64,
      65,    -1,   116,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    -1,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    51,    52,    -1,    -1,    -1,
      56,    -1,    -1,    -1,    60,    -1,    -1,    63,    64,    65,
      -1,   116,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    -1,    42,    43,    44,    45,    46,
      47,    -1,    49,    50,    51,    52,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    60,    -1,    -1,    63,    64,    65,    -1,
     116,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    -1,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    60,    -1,    -1,    63,    64,    65,    -1,   116,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    -1,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    51,    52,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    63,    64,    65,    -1,   116,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    -1,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    63,    64,    65,    -1,   116,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      90,    42,    43,    44,    45,    46,    47,    -1,    49,    50,
      51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    63,    64,    65,    -1,   116,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    -1,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,    -1,
      -1,    63,    64,    65,    -1,   116,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    -1,    42,
      43,    44,    45,    46,    47,    -1,    49,    50,    51,    52,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      63,    64,    65,    -1,   116,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    -1,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    52,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    60,    -1,    -1,    63,
      64,    65,    -1,   116,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    -1,    42,    43,    44,
      45,    46,    47,    -1,    49,    50,    51,    52,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    60,    -1,    -1,    63,    64,
      65,    -1,   116,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    -1,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    51,    52,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    63,    64,    65,
      -1,   116,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    -1,    42,    43,    44,    45,    46,
      47,    -1,    49,    50,    51,    52,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    60,    -1,    -1,    63,    64,    65,    -1,
     116,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    -1,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    63,    64,    65,    -1,   116,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    -1,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    51,    52,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    63,    64,    65,    -1,   116,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    -1,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    63,    64,    65,    -1,   116,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      -1,    42,    43,    44,    45,    46,    47,    -1,    49,    50,
      51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    63,    64,    65,    -1,   116,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    -1,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    63,    64,    65,    -1,   116,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    -1,    42,
      43,    44,    45,    46,    47,    -1,    49,    50,    51,    52,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    60,    -1,    -1,
      63,    64,    65,    -1,   116,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    -1,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    52,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    60,    -1,    -1,    63,
      64,    65,    -1,   116,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    -1,    42,    43,    44,
      45,    46,    47,    -1,    49,    50,    51,    52,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    60,    -1,    -1,    63,    64,
      65,    -1,   116,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    -1,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    51,    52,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    60,    -1,    -1,    63,    64,    65,
      -1,   116,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    -1,    42,    43,    44,    45,    46,
      47,    -1,    49,    50,    51,    52,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    60,    -1,    -1,    63,    64,    65,    -1,
     116,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    -1,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    63,    64,    65,    -1,   116,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    -1,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    63,    64,    65,    -1,   116,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    63,    64,    65,    -1,    -1,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    -1,    87,    88
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   120,   121,     0,     3,     5,     6,     7,     9,    11,
      13,    14,    15,    20,    21,    22,    24,    25,    27,    29,
      30,    33,    34,    35,    36,    38,    39,    40,    41,    43,
      44,    53,    61,    62,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   122,   123,   126,
     127,   133,   134,   141,   144,   145,   146,   147,   148,   149,
     150,   151,   154,   155,   159,   160,    36,    36,    53,   152,
     152,    57,    57,    53,     7,    34,    57,    58,   149,   154,
      53,    58,   126,   140,    53,    53,    53,   152,    53,    53,
      36,    53,    48,    48,    66,    67,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,   115,   153,    53,    89,
     149,   149,   149,   149,   149,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    35,   131,   132,
      57,    42,    43,    44,    45,    46,    47,    49,    50,    51,
      52,    60,    63,    64,    65,    68,    69,    81,    82,    83,
      84,    85,    86,    87,    88,   116,    48,   153,    53,    89,
     149,    53,    53,   149,   149,   161,    57,   149,   125,    14,
      35,    57,   149,    35,    35,    53,   149,   149,    58,   149,
     149,    58,   115,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   165,    58,   149,   156,   157,
     158,    36,    54,   161,   161,   161,    54,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   116,    55,   118,   149,
     149,   149,   149,   149,   149,    36,   149,   149,   149,   149,
     149,   152,   152,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,    58,   149,    58,   115,   149,    35,   128,
     129,   130,    36,    54,   115,   136,   149,   136,    54,    55,
      59,    54,    59,   126,    53,    23,    57,   149,    57,    23,
      23,   149,    54,    54,   124,   127,    54,    55,    55,    57,
     161,   161,    55,   118,   161,    55,    54,    53,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
     132,    48,    53,   115,   161,    56,   161,   161,    48,   116,
      54,    55,    53,   136,    56,   135,   135,   140,   149,    57,
     140,   149,    91,   149,    54,   149,    57,    57,   149,    91,
     149,   149,   135,    58,    58,    59,   127,    39,   149,    59,
     118,   149,    48,   153,    59,   156,   158,   149,   158,   165,
      59,    58,   149,    59,   118,   149,    48,    58,   130,   128,
     118,    36,    55,   137,   137,     8,    54,   149,    90,   140,
      54,    54,   149,    54,   149,    57,   149,    54,    90,    54,
      54,    26,   142,   142,    57,    54,    57,    58,   149,    54,
      57,    54,   118,    56,   161,   149,   125,    54,   135,   161,
      54,    54,   140,    54,    90,   149,   140,   140,    54,   140,
      54,    54,   149,    54,    90,   140,   149,   140,    58,   143,
     149,    59,    59,   161,    58,   149,    59,    59,    58,   137,
      58,    58,   140,   149,    54,    92,   140,   140,   140,    54,
     140,   149,    54,    92,    24,    36,    37,   162,   163,   164,
      28,    56,    59,   161,   125,    54,   134,   138,   139,   163,
     138,    54,    92,   140,   149,   140,    54,    92,   140,   149,
      48,    48,   115,    36,    59,   164,   149,   125,    59,    59,
      58,    57,    59,   134,   139,    59,   140,   149,    54,   140,
     149,    54,   149,    58,   115,   149,   165,    48,   115,    57,
      19,   142,   138,    57,    54,   140,    54,   140,    57,   161,
     161,    57,   118,    58,   149,   165,    56,    59,   140,   140,
      59,   118,    48,   161,    57,   118,   125,    57,    57,    58,
     149,    59,    48,   161,    57,    57,   149,    59,    57,    57
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   119,   120,   121,   121,   122,   122,   122,   123,   124,
     124,   125,   125,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   127,
     127,   128,   128,   129,   129,   130,   130,   130,   130,   131,
     131,   132,   132,   133,   134,   134,   134,   134,   134,   134,
     135,   135,   136,   136,   137,   137,   138,   138,   138,   138,
     139,   139,   140,   140,   141,   141,   142,   142,   142,   143,
     143,   144,   144,   145,   145,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   147,   147,
     147,   147,   147,   147,   147,   148,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   150,   150,
     151,   151,   152,   152,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   155,   155,   155,   156,   156,   157,   157,   158,   158,
     159,   159,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   161,   161,   162,   162,   163,
     163,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     165,   165
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     6,     1,
       2,     0,     2,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     3,     5,     2,     4,     6,     1,     6,     8,
      10,     0,     1,     1,     3,     1,     2,     3,     4,     1,
       3,     1,     2,    10,    10,     7,    12,     9,    10,     7,
       0,     2,     0,     1,     0,     2,     0,     1,     1,     2,
       2,     3,     3,     1,     7,     7,     4,     7,     5,     1,
       3,     5,     7,     5,     6,     9,     8,     8,     7,     8,
       7,     7,     6,     9,    10,    11,    12,     8,     7,     7,
       9,    10,    11,    12,     8,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     1,     5,
       9,     7,     7,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     3,     6,
       3,     3,     1,     3,     1,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       3,     5,     5,     6,     8,     2,     5,     2,     3,     5,
       5,     4,     6,     6,     1,     3,     1,     3,     0,     1,
       4,     6,     4,     4,     4,     3,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     1,     3,     0,     1,     1,
       2,     4,     6,     6,     5,     7,     4,     7,     9,     8,
       1,     3
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
#line 219 "CMDgram.y"
      { }
#line 2877 "CMDgram.cpp"
    break;

  case 3: /* decl_list: %empty  */
#line 224 "CMDgram.y"
      { (yyval.stmt) = nil; }
#line 2883 "CMDgram.cpp"
    break;

  case 4: /* decl_list: decl_list decl  */
#line 226 "CMDgram.y"
      { if(!Script::gStatementList) { Script::gStatementList = (yyvsp[0].stmt); } else { Script::gStatementList->append((yyvsp[0].stmt)); } }
#line 2889 "CMDgram.cpp"
    break;

  case 5: /* decl: stmt  */
#line 231 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2895 "CMDgram.cpp"
    break;

  case 6: /* decl: fn_decl_stmt  */
#line 233 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2901 "CMDgram.cpp"
    break;

  case 7: /* decl: package_decl  */
#line 235 "CMDgram.y"
     { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2907 "CMDgram.cpp"
    break;

  case 8: /* package_decl: rwPACKAGE IDENT '{' fn_decl_list '}' ';'  */
#line 240 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-2].stmt); for(StmtNode *walk = ((yyvsp[-2].stmt));walk;walk = walk->getNext() ) walk->setPackage((yyvsp[-4].s).value); }
#line 2913 "CMDgram.cpp"
    break;

  case 9: /* fn_decl_list: fn_decl_stmt  */
#line 245 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2919 "CMDgram.cpp"
    break;

  case 10: /* fn_decl_list: fn_decl_list fn_decl_stmt  */
#line 247 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-1].stmt); ((yyvsp[-1].stmt))->append((yyvsp[0].stmt));  }
#line 2925 "CMDgram.cpp"
    break;

  case 11: /* statement_list: %empty  */
#line 252 "CMDgram.y"
      { (yyval.stmt) = nil; }
#line 2931 "CMDgram.cpp"
    break;

  case 12: /* statement_list: statement_list stmt  */
#line 254 "CMDgram.y"
      { if(!(yyvsp[-1].stmt)) { (yyval.stmt) = (yyvsp[0].stmt); } else { ((yyvsp[-1].stmt))->append((yyvsp[0].stmt)); (yyval.stmt) = (yyvsp[-1].stmt); } }
#line 2937 "CMDgram.cpp"
    break;

  case 19: /* stmt: rwBREAK ';'  */
#line 265 "CMDgram.y"
      { (yyval.stmt) = BreakStmtNode::alloc( (yyvsp[-1].i).lineNumber ); }
#line 2943 "CMDgram.cpp"
    break;

  case 20: /* stmt: rwCONTINUE ';'  */
#line 267 "CMDgram.y"
      { (yyval.stmt) = ContinueStmtNode::alloc( (yyvsp[-1].i).lineNumber ); }
#line 2949 "CMDgram.cpp"
    break;

  case 21: /* stmt: rwRETURN ';'  */
#line 269 "CMDgram.y"
      { (yyval.stmt) = ReturnStmtNode::alloc( (yyvsp[-1].i).lineNumber, NULL ); }
#line 2955 "CMDgram.cpp"
    break;

  case 22: /* stmt: rwRETURN expr ';'  */
#line 271 "CMDgram.y"
      { (yyval.stmt) = ReturnStmtNode::alloc( (yyvsp[-2].i).lineNumber, (yyvsp[-1].expr) ); }
#line 2961 "CMDgram.cpp"
    break;

  case 23: /* stmt: rwRETURN '{' expr_list '}' ';'  */
#line 274 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-4].i).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-2].expr);
         (yyval.stmt) = ReturnStmtNode::alloc( (yyvsp[-4].i).lineNumber, vecNode );
      }
#line 2971 "CMDgram.cpp"
    break;

  case 24: /* stmt: expression_stmt ';'  */
#line 281 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-1].stmt); }
#line 2977 "CMDgram.cpp"
    break;

  case 25: /* stmt: TTAG '=' expr ';'  */
#line 283 "CMDgram.y"
      { (yyval.stmt) = TTagSetStmtNode::alloc( (yyvsp[-3].s).lineNumber, (yyvsp[-3].s).value, (yyvsp[-1].expr), NULL ); }
#line 2983 "CMDgram.cpp"
    break;

  case 26: /* stmt: TTAG '=' expr ',' expr ';'  */
#line 285 "CMDgram.y"
      { (yyval.stmt) = TTagSetStmtNode::alloc( (yyvsp[-5].s).lineNumber, (yyvsp[-5].s).value, (yyvsp[-3].expr), (yyvsp[-1].expr) ); }
#line 2989 "CMDgram.cpp"
    break;

  case 27: /* stmt: DOCBLOCK  */
#line 287 "CMDgram.y"
      { (yyval.stmt) = StrConstNode::alloc( (yyvsp[0].str).lineNumber, (yyvsp[0].str).value, false, true ); }
#line 2995 "CMDgram.cpp"
    break;

  case 28: /* stmt: '[' unpack_var_list ']' '=' expr ';'  */
#line 291 "CMDgram.y"
      {  (yyval.stmt) = TupleUnpackingStmtNode::alloc( (yyvsp[-4].var)->dbgLineNumber , (yyvsp[-4].var), (yyvsp[-1].expr));}
#line 3001 "CMDgram.cpp"
    break;

  case 29: /* fn_decl_stmt: rwDEFINE IDENT '(' func_var_list_decl ')' '{' statement_list '}'  */
#line 297 "CMDgram.y"
      { (yyval.stmt) = FunctionDeclStmtNode::alloc( (yyvsp[-7].i).lineNumber, (yyvsp[-6].s).value, NULL, (yyvsp[-4].var), (yyvsp[-1].stmt) ); }
#line 3007 "CMDgram.cpp"
    break;

  case 30: /* fn_decl_stmt: rwDEFINE IDENT opCOLONCOLON IDENT '(' func_var_list_decl ')' '{' statement_list '}'  */
#line 300 "CMDgram.y"
      { (yyval.stmt) = FunctionDeclStmtNode::alloc( (yyvsp[-9].i).lineNumber, (yyvsp[-6].s).value, (yyvsp[-8].s).value, (yyvsp[-4].var), (yyvsp[-1].stmt) ); }
#line 3013 "CMDgram.cpp"
    break;

  case 31: /* func_var_list_decl: %empty  */
#line 305 "CMDgram.y"
      { (yyval.var) = NULL; }
#line 3019 "CMDgram.cpp"
    break;

  case 32: /* func_var_list_decl: func_var_list  */
#line 307 "CMDgram.y"
      { (yyval.var) = (yyvsp[0].var); }
#line 3025 "CMDgram.cpp"
    break;

  case 33: /* func_var_list: param  */
#line 312 "CMDgram.y"
      { (yyval.var) = (yyvsp[0].var); }
#line 3031 "CMDgram.cpp"
    break;

  case 34: /* func_var_list: func_var_list ',' param  */
#line 314 "CMDgram.y"
      { (yyval.var) = (yyvsp[-2].var); ((StmtNode*)((yyvsp[-2].var)))->append((StmtNode*)(yyvsp[0].var) ); }
#line 3037 "CMDgram.cpp"
    break;

  case 35: /* param: VAR  */
#line 331 "CMDgram.y"
      { (yyval.var) = VarNode::allocParam((yyvsp[0].s).lineNumber, (yyvsp[0].s).value, NULL); }
#line 3043 "CMDgram.cpp"
    break;

  case 36: /* param: VAR '?'  */
#line 333 "CMDgram.y"
      { (yyval.var) = VarNode::allocParam((yyvsp[-1].s).lineNumber, (yyvsp[-1].s).value, NULL); }
#line 3049 "CMDgram.cpp"
    break;

  case 37: /* param: VAR '=' expr  */
#line 335 "CMDgram.y"
      { (yyval.var) = VarNode::allocParam((yyvsp[-2].s).lineNumber, (yyvsp[-2].s).value, (yyvsp[0].expr)); }
#line 3055 "CMDgram.cpp"
    break;

  case 38: /* param: VAR '?' '=' expr  */
#line 337 "CMDgram.y"
      { (yyval.var) = VarNode::allocParam((yyvsp[-3].s).lineNumber, (yyvsp[-3].s).value, (yyvsp[0].expr)); }
#line 3061 "CMDgram.cpp"
    break;

  case 39: /* unpack_var_list: unpack_param  */
#line 344 "CMDgram.y"
      { (yyval.var) = (yyvsp[0].var); }
#line 3067 "CMDgram.cpp"
    break;

  case 40: /* unpack_var_list: unpack_var_list ',' unpack_param  */
#line 346 "CMDgram.y"
      { (yyval.var) = (yyvsp[-2].var); ((StmtNode*)((yyvsp[-2].var)))->append((StmtNode*)(yyvsp[0].var)); }
#line 3073 "CMDgram.cpp"
    break;

  case 41: /* unpack_param: VAR  */
#line 351 "CMDgram.y"
      { (yyval.var) = VarNode::allocParam((yyvsp[0].s).lineNumber, (yyvsp[0].s).value, NULL); }
#line 3079 "CMDgram.cpp"
    break;

  case 42: /* unpack_param: VAR '?'  */
#line 353 "CMDgram.y"
      { (yyval.var) = VarNode::allocParam((yyvsp[-1].s).lineNumber, (yyvsp[-1].s).value, NULL); }
#line 3085 "CMDgram.cpp"
    break;

  case 43: /* datablock_decl: rwDATABLOCK class_name_expr '(' expr parent_block ')' '{' slot_assign_list_opt '}' ';'  */
#line 358 "CMDgram.y"
      { (yyval.stmt) = ObjectDeclNode::alloc( (yyvsp[-9].i).lineNumber, (yyvsp[-8].expr), (yyvsp[-6].expr), NULL, (yyvsp[-5].s).value, (yyvsp[-2].slist), NULL, true, false, false); }
#line 3091 "CMDgram.cpp"
    break;

  case 44: /* object_decl: rwDECLARE class_name_expr '(' object_name parent_block object_args ')' '{' object_declare_block '}'  */
#line 363 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-9].i).lineNumber, (yyvsp[-8].expr), (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-5].s).value, (yyvsp[-1].odcl).slots, (yyvsp[-1].odcl).decls, false, false, false); }
#line 3097 "CMDgram.cpp"
    break;

  case 45: /* object_decl: rwDECLARE class_name_expr '(' object_name parent_block object_args ')'  */
#line 365 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-6].i).lineNumber, (yyvsp[-5].expr), (yyvsp[-3].expr), (yyvsp[-1].expr), (yyvsp[-2].s).value, NULL, NULL, false, false, false); }
#line 3103 "CMDgram.cpp"
    break;

  case 46: /* object_decl: rwDECLARE class_name_expr '(' '[' object_name ']' parent_block object_args ')' '{' object_declare_block '}'  */
#line 367 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-11].i).lineNumber, (yyvsp[-10].expr), (yyvsp[-7].expr), (yyvsp[-4].expr), (yyvsp[-5].s).value, (yyvsp[-1].odcl).slots, (yyvsp[-1].odcl).decls, false, true, false); }
#line 3109 "CMDgram.cpp"
    break;

  case 47: /* object_decl: rwDECLARE class_name_expr '(' '[' object_name ']' parent_block object_args ')'  */
#line 369 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-8].i).lineNumber, (yyvsp[-7].expr), (yyvsp[-4].expr), (yyvsp[-1].expr), (yyvsp[-2].s).value, NULL, NULL, false, true, false); }
#line 3115 "CMDgram.cpp"
    break;

  case 48: /* object_decl: rwDECLARESINGLETON class_name_expr '(' object_name parent_block object_args ')' '{' object_declare_block '}'  */
#line 371 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-9].i).lineNumber, (yyvsp[-8].expr), (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-5].s).value, (yyvsp[-1].odcl).slots, (yyvsp[-1].odcl).decls, false, false, true); }
#line 3121 "CMDgram.cpp"
    break;

  case 49: /* object_decl: rwDECLARESINGLETON class_name_expr '(' object_name parent_block object_args ')'  */
#line 373 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-6].i).lineNumber, (yyvsp[-5].expr), (yyvsp[-3].expr), (yyvsp[-1].expr), (yyvsp[-2].s).value, NULL, NULL, false, false, true); }
#line 3127 "CMDgram.cpp"
    break;

  case 50: /* parent_block: %empty  */
#line 378 "CMDgram.y"
      { (yyval.s).value = NULL; }
#line 3133 "CMDgram.cpp"
    break;

  case 51: /* parent_block: ':' IDENT  */
#line 380 "CMDgram.y"
      { (yyval.s) = (yyvsp[0].s); }
#line 3139 "CMDgram.cpp"
    break;

  case 52: /* object_name: %empty  */
#line 385 "CMDgram.y"
      { (yyval.expr) = StrConstNode::alloc( CodeBlock::smCurrentParser->getCurrentLine(), "", false); }
#line 3145 "CMDgram.cpp"
    break;

  case 53: /* object_name: expr  */
#line 387 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3151 "CMDgram.cpp"
    break;

  case 54: /* object_args: %empty  */
#line 392 "CMDgram.y"
      { (yyval.expr) = NULL; }
#line 3157 "CMDgram.cpp"
    break;

  case 55: /* object_args: ',' expr_list  */
#line 394 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3163 "CMDgram.cpp"
    break;

  case 56: /* object_declare_block: %empty  */
#line 399 "CMDgram.y"
      { (yyval.odcl).slots = NULL; (yyval.odcl).decls = NULL; }
#line 3169 "CMDgram.cpp"
    break;

  case 57: /* object_declare_block: slot_assign_list  */
#line 401 "CMDgram.y"
      { (yyval.odcl).slots = (yyvsp[0].slist); (yyval.odcl).decls = NULL; }
#line 3175 "CMDgram.cpp"
    break;

  case 58: /* object_declare_block: object_decl_list  */
#line 403 "CMDgram.y"
      { (yyval.odcl).slots = NULL; (yyval.odcl).decls = (yyvsp[0].od); }
#line 3181 "CMDgram.cpp"
    break;

  case 59: /* object_declare_block: slot_assign_list object_decl_list  */
#line 405 "CMDgram.y"
      { (yyval.odcl).slots = (yyvsp[-1].slist); (yyval.odcl).decls = (yyvsp[0].od); }
#line 3187 "CMDgram.cpp"
    break;

  case 60: /* object_decl_list: object_decl ';'  */
#line 410 "CMDgram.y"
      { (yyval.od) = (yyvsp[-1].od); }
#line 3193 "CMDgram.cpp"
    break;

  case 61: /* object_decl_list: object_decl_list object_decl ';'  */
#line 412 "CMDgram.y"
      { (yyvsp[-2].od)->append((yyvsp[-1].od)); (yyval.od) = (yyvsp[-2].od); }
#line 3199 "CMDgram.cpp"
    break;

  case 62: /* stmt_block: '{' statement_list '}'  */
#line 417 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-1].stmt); }
#line 3205 "CMDgram.cpp"
    break;

  case 63: /* stmt_block: stmt  */
#line 419 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[0].stmt); }
#line 3211 "CMDgram.cpp"
    break;

  case 64: /* switch_stmt: rwSWITCH '(' expr ')' '{' case_block '}'  */
#line 424 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-1].ifnode); (yyvsp[-1].ifnode)->propagateSwitchExpr((yyvsp[-4].expr), false); }
#line 3217 "CMDgram.cpp"
    break;

  case 65: /* switch_stmt: rwSWITCHSTR '(' expr ')' '{' case_block '}'  */
#line 426 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-1].ifnode); (yyvsp[-1].ifnode)->propagateSwitchExpr((yyvsp[-4].expr), true); }
#line 3223 "CMDgram.cpp"
    break;

  case 66: /* case_block: rwCASE case_expr ':' statement_list  */
#line 434 "CMDgram.y"
      { (yyval.ifnode) = IfStmtNode::alloc( (yyvsp[-3].i).lineNumber, (yyvsp[-2].expr), (yyvsp[0].stmt), NULL, false); }
#line 3229 "CMDgram.cpp"
    break;

  case 67: /* case_block: rwCASE case_expr ':' statement_list rwDEFAULT ':' statement_list  */
#line 436 "CMDgram.y"
      { (yyval.ifnode) = IfStmtNode::alloc( (yyvsp[-6].i).lineNumber, (yyvsp[-5].expr), (yyvsp[-3].stmt), (yyvsp[0].stmt), false); }
#line 3235 "CMDgram.cpp"
    break;

  case 68: /* case_block: rwCASE case_expr ':' statement_list case_block  */
#line 438 "CMDgram.y"
      { (yyval.ifnode) = IfStmtNode::alloc( (yyvsp[-4].i).lineNumber, (yyvsp[-3].expr), (yyvsp[-1].stmt), (yyvsp[0].ifnode), true); }
#line 3241 "CMDgram.cpp"
    break;

  case 69: /* case_expr: expr  */
#line 443 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3247 "CMDgram.cpp"
    break;

  case 70: /* case_expr: case_expr rwCASEOR expr  */
#line 445 "CMDgram.y"
      { ((yyvsp[-2].expr))->append((yyvsp[0].expr)); (yyval.expr) = (yyvsp[-2].expr); }
#line 3253 "CMDgram.cpp"
    break;

  case 71: /* if_stmt: rwIF '(' expr ')' stmt_block  */
#line 450 "CMDgram.y"
      { (yyval.stmt) = IfStmtNode::alloc((yyvsp[-4].i).lineNumber, (yyvsp[-2].expr), (yyvsp[0].stmt), NULL, false); }
#line 3259 "CMDgram.cpp"
    break;

  case 72: /* if_stmt: rwIF '(' expr ')' stmt_block rwELSE stmt_block  */
#line 452 "CMDgram.y"
      { (yyval.stmt) = IfStmtNode::alloc((yyvsp[-6].i).lineNumber, (yyvsp[-4].expr), (yyvsp[-2].stmt), (yyvsp[0].stmt), false); }
#line 3265 "CMDgram.cpp"
    break;

  case 73: /* while_stmt: rwWHILE '(' expr ')' stmt_block  */
#line 457 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-4].i).lineNumber, nil, (yyvsp[-2].expr), nil, (yyvsp[0].stmt), false); }
#line 3271 "CMDgram.cpp"
    break;

  case 74: /* while_stmt: rwDO stmt_block rwWHILE '(' expr ')'  */
#line 459 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-3].i).lineNumber, nil, (yyvsp[-1].expr), nil, (yyvsp[-4].stmt), true); }
#line 3277 "CMDgram.cpp"
    break;

  case 75: /* for_stmt: rwFOR '(' expr ';' expr ';' expr ')' stmt_block  */
#line 464 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-8].i).lineNumber, (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), false); }
#line 3283 "CMDgram.cpp"
    break;

  case 76: /* for_stmt: rwFOR '(' expr ';' expr ';' ')' stmt_block  */
#line 466 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-7].i).lineNumber, (yyvsp[-5].expr), (yyvsp[-3].expr), NULL, (yyvsp[0].stmt), false); }
#line 3289 "CMDgram.cpp"
    break;

  case 77: /* for_stmt: rwFOR '(' expr ';' ';' expr ')' stmt_block  */
#line 468 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-7].i).lineNumber, (yyvsp[-5].expr), NULL, (yyvsp[-2].expr), (yyvsp[0].stmt), false); }
#line 3295 "CMDgram.cpp"
    break;

  case 78: /* for_stmt: rwFOR '(' expr ';' ';' ')' stmt_block  */
#line 470 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-6].i).lineNumber, (yyvsp[-4].expr), NULL, NULL, (yyvsp[0].stmt), false); }
#line 3301 "CMDgram.cpp"
    break;

  case 79: /* for_stmt: rwFOR '(' ';' expr ';' expr ')' stmt_block  */
#line 472 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-7].i).lineNumber, NULL, (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), false); }
#line 3307 "CMDgram.cpp"
    break;

  case 80: /* for_stmt: rwFOR '(' ';' expr ';' ')' stmt_block  */
#line 474 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-6].i).lineNumber, NULL, (yyvsp[-3].expr), NULL, (yyvsp[0].stmt), false); }
#line 3313 "CMDgram.cpp"
    break;

  case 81: /* for_stmt: rwFOR '(' ';' ';' expr ')' stmt_block  */
#line 476 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-6].i).lineNumber, NULL, NULL, (yyvsp[-2].expr), (yyvsp[0].stmt), false); }
#line 3319 "CMDgram.cpp"
    break;

  case 82: /* for_stmt: rwFOR '(' ';' ';' ')' stmt_block  */
#line 478 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-5].i).lineNumber, NULL, NULL, NULL, (yyvsp[0].stmt), false); }
#line 3325 "CMDgram.cpp"
    break;

  case 83: /* for_stmt: rwFOR '(' VAR rwIN expr opDOTDOT expr ')' stmt_block  */
#line 482 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-8].i).lineNumber, (yyvsp[-6].s).value, (yyvsp[-4].expr), (yyvsp[-2].expr), NULL, (yyvsp[0].stmt), 2 ); }
#line 3331 "CMDgram.cpp"
    break;

  case 84: /* for_stmt: rwFOR '(' VAR rwIN rwRANGE expr opDOTDOT expr ')' stmt_block  */
#line 485 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-9].i).lineNumber, (yyvsp[-7].s).value, (yyvsp[-4].expr), (yyvsp[-2].expr), NULL, (yyvsp[0].stmt), 102 ); }
#line 3337 "CMDgram.cpp"
    break;

  case 85: /* for_stmt: rwFOR '(' VAR rwIN expr opDOTDOT expr rwSTEP expr ')' stmt_block  */
#line 488 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-10].i).lineNumber, (yyvsp[-8].s).value, (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), 3 ); }
#line 3343 "CMDgram.cpp"
    break;

  case 86: /* for_stmt: rwFOR '(' VAR rwIN rwRANGE expr opDOTDOT expr rwSTEP expr ')' stmt_block  */
#line 491 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-11].i).lineNumber, (yyvsp[-9].s).value, (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), 103 ); }
#line 3349 "CMDgram.cpp"
    break;

  case 87: /* for_stmt: rwFOR '(' VAR rwIN rwRANGE expr ')' stmt_block  */
#line 494 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-7].i).lineNumber, (yyvsp[-5].s).value, (yyvsp[-2].expr), NULL, NULL, (yyvsp[0].stmt), 104 ); }
#line 3355 "CMDgram.cpp"
    break;

  case 88: /* foreach_stmt: rwFOREACH '(' VAR rwIN expr ')' stmt_block  */
#line 505 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc( (yyvsp[-6].i).lineNumber, (yyvsp[-4].s).value, (yyvsp[-2].expr), NULL,NULL, (yyvsp[0].stmt), 0 ); }
#line 3361 "CMDgram.cpp"
    break;

  case 89: /* foreach_stmt: rwFOREACHSTR '(' VAR rwIN expr ')' stmt_block  */
#line 508 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc( (yyvsp[-6].i).lineNumber, (yyvsp[-4].s).value, (yyvsp[-2].expr), NULL,NULL, (yyvsp[0].stmt), 1 ); }
#line 3367 "CMDgram.cpp"
    break;

  case 90: /* foreach_stmt: rwFOREACH '(' VAR rwIN expr opDOTDOT expr ')' stmt_block  */
#line 511 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-8].i).lineNumber, (yyvsp[-6].s).value, (yyvsp[-4].expr), (yyvsp[-2].expr), NULL, (yyvsp[0].stmt), 2 ); }
#line 3373 "CMDgram.cpp"
    break;

  case 91: /* foreach_stmt: rwFOREACH '(' VAR rwIN rwRANGE expr opDOTDOT expr ')' stmt_block  */
#line 514 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-9].i).lineNumber, (yyvsp[-7].s).value, (yyvsp[-4].expr), (yyvsp[-2].expr), NULL, (yyvsp[0].stmt), 102 ); }
#line 3379 "CMDgram.cpp"
    break;

  case 92: /* foreach_stmt: rwFOREACH '(' VAR rwIN expr opDOTDOT expr rwSTEP expr ')' stmt_block  */
#line 517 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-10].i).lineNumber, (yyvsp[-8].s).value, (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), 3 ); }
#line 3385 "CMDgram.cpp"
    break;

  case 93: /* foreach_stmt: rwFOREACH '(' VAR rwIN rwRANGE expr opDOTDOT expr rwSTEP expr ')' stmt_block  */
#line 520 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-11].i).lineNumber, (yyvsp[-9].s).value, (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), 103 ); }
#line 3391 "CMDgram.cpp"
    break;

  case 94: /* foreach_stmt: rwFOREACH '(' VAR rwIN rwRANGE expr ')' stmt_block  */
#line 523 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-7].i).lineNumber, (yyvsp[-5].s).value, (yyvsp[-2].expr), NULL, NULL, (yyvsp[0].stmt), 104 ); }
#line 3397 "CMDgram.cpp"
    break;

  case 95: /* expression_stmt: stmt_expr  */
#line 528 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[0].expr); }
#line 3403 "CMDgram.cpp"
    break;

  case 96: /* expr: stmt_expr  */
#line 533 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3409 "CMDgram.cpp"
    break;

  case 97: /* expr: '(' expr ')'  */
#line 535 "CMDgram.y"
      { (yyval.expr) = (yyvsp[-1].expr); }
#line 3415 "CMDgram.cpp"
    break;

  case 98: /* expr: expr '^' expr  */
#line 537 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3421 "CMDgram.cpp"
    break;

  case 99: /* expr: expr '%' expr  */
#line 539 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3427 "CMDgram.cpp"
    break;

  case 100: /* expr: expr '&' expr  */
#line 541 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3433 "CMDgram.cpp"
    break;

  case 101: /* expr: expr '|' expr  */
#line 543 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3439 "CMDgram.cpp"
    break;

  case 102: /* expr: expr '+' expr  */
#line 545 "CMDgram.y"
      { (yyval.expr) = FloatBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3445 "CMDgram.cpp"
    break;

  case 103: /* expr: expr '-' expr  */
#line 547 "CMDgram.y"
      { (yyval.expr) = FloatBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3451 "CMDgram.cpp"
    break;

  case 104: /* expr: expr '*' expr  */
#line 549 "CMDgram.y"
      { (yyval.expr) = FloatBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3457 "CMDgram.cpp"
    break;

  case 105: /* expr: expr '/' expr  */
#line 551 "CMDgram.y"
      { (yyval.expr) = FloatBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3463 "CMDgram.cpp"
    break;

  case 106: /* expr: '-' expr  */
#line 553 "CMDgram.y"
      { (yyval.expr) = FloatUnaryExprNode::alloc( (yyvsp[-1].i).lineNumber, (yyvsp[-1].i).value, (yyvsp[0].expr)); }
#line 3469 "CMDgram.cpp"
    break;

  case 107: /* expr: '*' expr  */
#line 555 "CMDgram.y"
      { (yyval.expr) = TTagDerefNode::alloc( (yyvsp[-1].i).lineNumber, (yyvsp[0].expr) ); }
#line 3475 "CMDgram.cpp"
    break;

  case 108: /* expr: TTAG  */
#line 557 "CMDgram.y"
      { (yyval.expr) = TTagExprNode::alloc( (yyvsp[0].s).lineNumber, (yyvsp[0].s).value ); }
#line 3481 "CMDgram.cpp"
    break;

  case 109: /* expr: expr '?' expr ':' expr  */
#line 559 "CMDgram.y"
      { (yyval.expr) = ConditionalExprNode::alloc( (yyvsp[-4].expr)->dbgLineNumber, (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3487 "CMDgram.cpp"
    break;

  case 110: /* expr: expr '?' '{' expr_list '}' ':' '{' expr_list '}'  */
#line 561 "CMDgram.y"
   {
//     ElfScript 0.7g
         VectorConstructorNode* trueNode = VectorConstructorNode::alloc((yyvsp[-8].expr)->dbgLineNumber);
         trueNode->argList = (ExprNode*)(yyvsp[-5].expr);
         VectorConstructorNode* falseNode = VectorConstructorNode::alloc((yyvsp[-8].expr)->dbgLineNumber);
         falseNode->argList = (ExprNode*)(yyvsp[-1].expr);
         { (yyval.expr) = ConditionalExprNode::alloc( (yyvsp[-8].expr)->dbgLineNumber, (yyvsp[-8].expr), trueNode, falseNode); }
   }
#line 3500 "CMDgram.cpp"
    break;

  case 111: /* expr: expr '?' expr ':' '{' expr_list '}'  */
#line 570 "CMDgram.y"
   {
//     ElfScript 0.7g
         VectorConstructorNode* falseNode = VectorConstructorNode::alloc((yyvsp[-6].expr)->dbgLineNumber);
         falseNode->argList = (ExprNode*)(yyvsp[-1].expr);
         { (yyval.expr) = ConditionalExprNode::alloc( (yyvsp[-6].expr)->dbgLineNumber, (yyvsp[-6].expr), (yyvsp[-4].expr), falseNode); }
   }
#line 3511 "CMDgram.cpp"
    break;

  case 112: /* expr: expr '?' '{' expr_list '}' ':' expr  */
#line 577 "CMDgram.y"
   {
//     ElfScript 0.7g
         VectorConstructorNode* trueNode = VectorConstructorNode::alloc((yyvsp[-6].expr)->dbgLineNumber);
         trueNode->argList = (ExprNode*)(yyvsp[-3].expr);
         { (yyval.expr) = ConditionalExprNode::alloc( (yyvsp[-6].expr)->dbgLineNumber, (yyvsp[-6].expr), trueNode, (yyvsp[0].expr)); }
   }
#line 3522 "CMDgram.cpp"
    break;

  case 113: /* expr: expr '<' expr  */
#line 584 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3528 "CMDgram.cpp"
    break;

  case 114: /* expr: expr '>' expr  */
#line 586 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3534 "CMDgram.cpp"
    break;

  case 115: /* expr: expr opGE expr  */
#line 588 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3540 "CMDgram.cpp"
    break;

  case 116: /* expr: expr opLE expr  */
#line 590 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3546 "CMDgram.cpp"
    break;

  case 117: /* expr: expr opEQ expr  */
#line 592 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3552 "CMDgram.cpp"
    break;

  case 118: /* expr: expr opNE expr  */
#line 594 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3558 "CMDgram.cpp"
    break;

  case 119: /* expr: expr opOR expr  */
#line 596 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3564 "CMDgram.cpp"
    break;

  case 120: /* expr: expr opSHL expr  */
#line 598 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3570 "CMDgram.cpp"
    break;

  case 121: /* expr: expr opSHR expr  */
#line 600 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3576 "CMDgram.cpp"
    break;

  case 122: /* expr: expr opAND expr  */
#line 602 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3582 "CMDgram.cpp"
    break;

  case 123: /* expr: expr opSTREQ expr  */
#line 604 "CMDgram.y"
      { (yyval.expr) = StreqExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-2].expr), (yyvsp[0].expr), true); }
#line 3588 "CMDgram.cpp"
    break;

  case 124: /* expr: expr opSTRNE expr  */
#line 606 "CMDgram.y"
      { (yyval.expr) = StreqExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-2].expr), (yyvsp[0].expr), false); }
#line 3594 "CMDgram.cpp"
    break;

  case 125: /* expr: expr '@' expr  */
#line 614 "CMDgram.y"
      { (yyval.expr) = StrcatExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-2].expr), (yyvsp[0].expr), (yyvsp[-1].i).value); }
#line 3600 "CMDgram.cpp"
    break;

  case 126: /* expr: '!' expr  */
#line 616 "CMDgram.y"
      { (yyval.expr) = IntUnaryExprNode::alloc((yyvsp[-1].i).lineNumber, (yyvsp[-1].i).value, (yyvsp[0].expr)); }
#line 3606 "CMDgram.cpp"
    break;

  case 127: /* expr: '~' expr  */
#line 618 "CMDgram.y"
      { (yyval.expr) = IntUnaryExprNode::alloc((yyvsp[-1].i).lineNumber, (yyvsp[-1].i).value, (yyvsp[0].expr)); }
#line 3612 "CMDgram.cpp"
    break;

  case 128: /* expr: TAGATOM  */
#line 620 "CMDgram.y"
      { (yyval.expr) = StrConstNode::alloc( (yyvsp[0].str).lineNumber, (yyvsp[0].str).value, true); }
#line 3618 "CMDgram.cpp"
    break;

  case 129: /* expr: FLTCONST  */
#line 622 "CMDgram.y"
      { (yyval.expr) = FloatNode::alloc( (yyvsp[0].f).lineNumber, (yyvsp[0].f).value ); }
#line 3624 "CMDgram.cpp"
    break;

  case 130: /* expr: INTCONST  */
#line 624 "CMDgram.y"
      { (yyval.expr) = IntNode::alloc( (yyvsp[0].i).lineNumber, (yyvsp[0].i).value ); }
#line 3630 "CMDgram.cpp"
    break;

  case 131: /* expr: rwBREAK  */
#line 626 "CMDgram.y"
      { (yyval.expr) = ConstantNode::alloc( (yyvsp[0].i).lineNumber, StringTable->insert("break")); }
#line 3636 "CMDgram.cpp"
    break;

  case 132: /* expr: slot_acc  */
#line 628 "CMDgram.y"
      { (yyval.expr) = SlotAccessNode::alloc( (yyvsp[0].slot).lineNumber, (yyvsp[0].slot).object, (yyvsp[0].slot).array, (yyvsp[0].slot).slotName ); }
#line 3642 "CMDgram.cpp"
    break;

  case 133: /* expr: intslot_acc  */
#line 630 "CMDgram.y"
      { (yyval.expr) = InternalSlotAccessNode::alloc( (yyvsp[0].intslot).lineNumber, (yyvsp[0].intslot).object, (yyvsp[0].intslot).slotExpr, (yyvsp[0].intslot).recurse); }
#line 3648 "CMDgram.cpp"
    break;

  case 134: /* expr: IDENT  */
#line 632 "CMDgram.y"
      { (yyval.expr) = ConstantNode::alloc( (yyvsp[0].s).lineNumber, (yyvsp[0].s).value ); }
#line 3654 "CMDgram.cpp"
    break;

  case 135: /* expr: STRATOM  */
#line 634 "CMDgram.y"
      { (yyval.expr) = StrConstNode::alloc( (yyvsp[0].str).lineNumber, (yyvsp[0].str).value, false); }
#line 3660 "CMDgram.cpp"
    break;

  case 136: /* expr: VAR  */
#line 636 "CMDgram.y"
      { (yyval.expr) = (ExprNode*)VarNode::alloc( (yyvsp[0].s).lineNumber, (yyvsp[0].s).value, NULL); }
#line 3666 "CMDgram.cpp"
    break;

  case 137: /* expr: VAR '[' aidx_expr ']'  */
#line 638 "CMDgram.y"
      { (yyval.expr) = (ExprNode*)VarNode::alloc( (yyvsp[-3].s).lineNumber, (yyvsp[-3].s).value, (yyvsp[-1].expr) ); }
#line 3672 "CMDgram.cpp"
    break;

  case 138: /* slot_acc: expr '.' IDENT  */
#line 644 "CMDgram.y"
      { (yyval.slot).lineNumber = (yyvsp[-2].expr)->dbgLineNumber; (yyval.slot).object = (yyvsp[-2].expr); (yyval.slot).slotName = (yyvsp[0].s).value; (yyval.slot).array = NULL; }
#line 3678 "CMDgram.cpp"
    break;

  case 139: /* slot_acc: expr '.' IDENT '[' aidx_expr ']'  */
#line 646 "CMDgram.y"
      { (yyval.slot).lineNumber = (yyvsp[-5].expr)->dbgLineNumber; (yyval.slot).object = (yyvsp[-5].expr); (yyval.slot).slotName = (yyvsp[-3].s).value; (yyval.slot).array = (yyvsp[-1].expr); }
#line 3684 "CMDgram.cpp"
    break;

  case 140: /* intslot_acc: expr opINTNAME class_name_expr  */
#line 651 "CMDgram.y"
      { (yyval.intslot).lineNumber = (yyvsp[-2].expr)->dbgLineNumber; (yyval.intslot).object = (yyvsp[-2].expr); (yyval.intslot).slotExpr = (yyvsp[0].expr); (yyval.intslot).recurse = false; }
#line 3690 "CMDgram.cpp"
    break;

  case 141: /* intslot_acc: expr opINTNAMER class_name_expr  */
#line 653 "CMDgram.y"
      { (yyval.intslot).lineNumber = (yyvsp[-2].expr)->dbgLineNumber; (yyval.intslot).object = (yyvsp[-2].expr); (yyval.intslot).slotExpr = (yyvsp[0].expr); (yyval.intslot).recurse = true; }
#line 3696 "CMDgram.cpp"
    break;

  case 142: /* class_name_expr: IDENT  */
#line 658 "CMDgram.y"
      { (yyval.expr) = ConstantNode::alloc( (yyvsp[0].s).lineNumber, (yyvsp[0].s).value ); }
#line 3702 "CMDgram.cpp"
    break;

  case 143: /* class_name_expr: '(' expr ')'  */
#line 660 "CMDgram.y"
      { (yyval.expr) = (yyvsp[-1].expr); }
#line 3708 "CMDgram.cpp"
    break;

  case 144: /* assign_op_struct: opPLUSPLUS  */
#line 665 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[0].i).lineNumber; (yyval.asn).token = opPLUSPLUS; (yyval.asn).expr = FloatNode::alloc( (yyvsp[0].i).lineNumber, 1 ); }
#line 3714 "CMDgram.cpp"
    break;

  case 145: /* assign_op_struct: opMINUSMINUS  */
#line 667 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[0].i).lineNumber; (yyval.asn).token = opMINUSMINUS; (yyval.asn).expr = FloatNode::alloc( (yyvsp[0].i).lineNumber, 1 ); }
#line 3720 "CMDgram.cpp"
    break;

  case 146: /* assign_op_struct: opPLASN expr  */
#line 669 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '+'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3726 "CMDgram.cpp"
    break;

  case 147: /* assign_op_struct: opMIASN expr  */
#line 671 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '-'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3732 "CMDgram.cpp"
    break;

  case 148: /* assign_op_struct: opMLASN expr  */
#line 673 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '*'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3738 "CMDgram.cpp"
    break;

  case 149: /* assign_op_struct: opDVASN expr  */
#line 675 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '/'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3744 "CMDgram.cpp"
    break;

  case 150: /* assign_op_struct: opMODASN expr  */
#line 677 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '%'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3750 "CMDgram.cpp"
    break;

  case 151: /* assign_op_struct: opANDASN expr  */
#line 679 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '&'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3756 "CMDgram.cpp"
    break;

  case 152: /* assign_op_struct: opXORASN expr  */
#line 681 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '^'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3762 "CMDgram.cpp"
    break;

  case 153: /* assign_op_struct: opORASN expr  */
#line 683 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '|'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3768 "CMDgram.cpp"
    break;

  case 154: /* assign_op_struct: opSLASN expr  */
#line 685 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = opSHL; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3774 "CMDgram.cpp"
    break;

  case 155: /* assign_op_struct: opSRASN expr  */
#line 687 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = opSHR; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3780 "CMDgram.cpp"
    break;

  case 156: /* stmt_expr: funcall_expr  */
#line 693 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3786 "CMDgram.cpp"
    break;

  case 157: /* stmt_expr: assert_expr  */
#line 695 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3792 "CMDgram.cpp"
    break;

  case 158: /* stmt_expr: inline_command_expr  */
#line 697 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3798 "CMDgram.cpp"
    break;

  case 159: /* stmt_expr: object_decl  */
#line 699 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].od); }
#line 3804 "CMDgram.cpp"
    break;

  case 160: /* stmt_expr: VAR '=' expr  */
#line 701 "CMDgram.y"
      { (yyval.expr) = AssignExprNode::alloc( (yyvsp[-2].s).lineNumber, (yyvsp[-2].s).value, NULL, (yyvsp[0].expr)); }
#line 3810 "CMDgram.cpp"
    break;

  case 161: /* stmt_expr: VAR '=' '{' expr_list '}'  */
#line 705 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-4].s).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-1].expr);
         (yyval.expr) = AssignExprNode::alloc( (yyvsp[-4].s).lineNumber, (yyvsp[-4].s).value, NULL, vecNode);
      }
#line 3820 "CMDgram.cpp"
    break;

  case 162: /* stmt_expr: VAR '=' '[' expr_list ']'  */
#line 713 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-4].s).lineNumber, true);
         vecNode->argList = (ExprNode*)(yyvsp[-1].expr);
         (yyval.expr) = AssignExprNode::alloc( (yyvsp[-4].s).lineNumber, (yyvsp[-4].s).value, NULL, vecNode);
      }
#line 3830 "CMDgram.cpp"
    break;

  case 163: /* stmt_expr: VAR '[' aidx_expr ']' '=' expr  */
#line 722 "CMDgram.y"
      { (yyval.expr) = AssignExprNode::alloc( (yyvsp[-5].s).lineNumber, (yyvsp[-5].s).value, (yyvsp[-3].expr), (yyvsp[0].expr)); }
#line 3836 "CMDgram.cpp"
    break;

  case 164: /* stmt_expr: VAR '[' aidx_expr ']' '=' '{' expr_list '}'  */
#line 726 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-7].s).lineNumber);
          vecNode->argList = (ExprNode*)(yyvsp[-1].expr);
         (yyval.expr) = AssignExprNode::alloc( (yyvsp[-7].s).lineNumber, (yyvsp[-7].s).value, (yyvsp[-5].expr), vecNode);
      }
#line 3846 "CMDgram.cpp"
    break;

  case 165: /* stmt_expr: VAR assign_op_struct  */
#line 734 "CMDgram.y"
      { (yyval.expr) = AssignOpExprNode::alloc( (yyvsp[-1].s).lineNumber, (yyvsp[-1].s).value, NULL, (yyvsp[0].asn).expr, (yyvsp[0].asn).token); }
#line 3852 "CMDgram.cpp"
    break;

  case 166: /* stmt_expr: VAR '[' aidx_expr ']' assign_op_struct  */
#line 736 "CMDgram.y"
      { (yyval.expr) = AssignOpExprNode::alloc( (yyvsp[-4].s).lineNumber, (yyvsp[-4].s).value, (yyvsp[-2].expr), (yyvsp[0].asn).expr, (yyvsp[0].asn).token); }
#line 3858 "CMDgram.cpp"
    break;

  case 167: /* stmt_expr: slot_acc assign_op_struct  */
#line 738 "CMDgram.y"
      { (yyval.expr) = SlotAssignOpNode::alloc( (yyvsp[-1].slot).lineNumber, (yyvsp[-1].slot).object, (yyvsp[-1].slot).slotName, (yyvsp[-1].slot).array, (yyvsp[0].asn).token, (yyvsp[0].asn).expr); }
#line 3864 "CMDgram.cpp"
    break;

  case 168: /* stmt_expr: slot_acc '=' expr  */
#line 740 "CMDgram.y"
      { (yyval.expr) = SlotAssignNode::alloc( (yyvsp[-2].slot).lineNumber, (yyvsp[-2].slot).object, (yyvsp[-2].slot).array, (yyvsp[-2].slot).slotName, (yyvsp[0].expr)); }
#line 3870 "CMDgram.cpp"
    break;

  case 169: /* stmt_expr: slot_acc '=' '{' expr_list '}'  */
#line 744 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-4].slot).lineNumber, false);
         vecNode->argList = (ExprNode*)(yyvsp[-1].expr);
         (yyval.expr) = SlotAssignNode::alloc((yyvsp[-4].slot).lineNumber, (yyvsp[-4].slot).object, (yyvsp[-4].slot).array, (yyvsp[-4].slot).slotName, vecNode);
      }
#line 3880 "CMDgram.cpp"
    break;

  case 170: /* stmt_expr: slot_acc '=' '[' expr_list ']'  */
#line 753 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-4].slot).lineNumber, true);
         vecNode->argList = (ExprNode*)(yyvsp[-1].expr);
         (yyval.expr) = SlotAssignNode::alloc((yyvsp[-4].slot).lineNumber, (yyvsp[-4].slot).object, (yyvsp[-4].slot).array, (yyvsp[-4].slot).slotName, vecNode);
      }
#line 3890 "CMDgram.cpp"
    break;

  case 171: /* funcall_expr: IDENT '(' func_arg_list_decl ')'  */
#line 789 "CMDgram.y"
      { (yyval.expr) = FuncCallExprNode::alloc( (yyvsp[-3].s).lineNumber, (yyvsp[-3].s).value, NULL, (yyvsp[-1].expr), false); }
#line 3896 "CMDgram.cpp"
    break;

  case 172: /* funcall_expr: IDENT opCOLONCOLON IDENT '(' func_arg_list_decl ')'  */
#line 792 "CMDgram.y"
      { (yyval.expr) = FuncCallExprNode::alloc( (yyvsp[-5].s).lineNumber, (yyvsp[-3].s).value, (yyvsp[-5].s).value, (yyvsp[-1].expr), false); }
#line 3902 "CMDgram.cpp"
    break;

  case 173: /* funcall_expr: expr '.' IDENT '(' func_arg_list_decl ')'  */
#line 795 "CMDgram.y"
      { (yyvsp[-5].expr)->append((yyvsp[-1].expr)); (yyval.expr) = FuncCallExprNode::alloc( (yyvsp[-5].expr)->dbgLineNumber, (yyvsp[-3].s).value, NULL, (yyvsp[-5].expr), true); }
#line 3908 "CMDgram.cpp"
    break;

  case 174: /* func_arg_item: expr  */
#line 801 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3914 "CMDgram.cpp"
    break;

  case 175: /* func_arg_item: '{' expr_list '}'  */
#line 803 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-2].i).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-1].expr);
//          for (ExprNode* expr = (ExprNode*)$2; expr; expr = (ExprNode*)(expr->next)) {
//             vecNode->elements.push_back(expr);
//          }
         (yyval.expr) = vecNode;
      }
#line 3927 "CMDgram.cpp"
    break;

  case 176: /* func_arg_list: func_arg_item  */
#line 815 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3933 "CMDgram.cpp"
    break;

  case 177: /* func_arg_list: func_arg_list ',' func_arg_item  */
#line 817 "CMDgram.y"
      { ((yyvsp[-2].expr))->append((yyvsp[0].expr)); (yyval.expr) = (yyvsp[-2].expr); }
#line 3939 "CMDgram.cpp"
    break;

  case 178: /* func_arg_list_decl: %empty  */
#line 822 "CMDgram.y"
      { (yyval.expr) = NULL; }
#line 3945 "CMDgram.cpp"
    break;

  case 179: /* func_arg_list_decl: func_arg_list  */
#line 824 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3951 "CMDgram.cpp"
    break;

  case 180: /* assert_expr: rwASSERT '(' expr ')'  */
#line 845 "CMDgram.y"
      { (yyval.expr) = AssertCallExprNode::alloc( (yyvsp[-3].i).lineNumber, (yyvsp[-1].expr), NULL ); }
#line 3957 "CMDgram.cpp"
    break;

  case 181: /* assert_expr: rwASSERT '(' expr ',' STRATOM ')'  */
#line 847 "CMDgram.y"
      { (yyval.expr) = AssertCallExprNode::alloc( (yyvsp[-5].i).lineNumber, (yyvsp[-3].expr), (yyvsp[-1].str).value ); }
#line 3963 "CMDgram.cpp"
    break;

  case 182: /* inline_command_expr: rwPRINT '(' expr_list ')'  */
#line 854 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::PRINT, (yyvsp[-1].expr)); }
#line 3969 "CMDgram.cpp"
    break;

  case 183: /* inline_command_expr: rwPRINTF '(' expr_list ')'  */
#line 856 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::PRINTF, (yyvsp[-1].expr)); }
#line 3975 "CMDgram.cpp"
    break;

  case 184: /* inline_command_expr: rwSPRINTF '(' expr_list ')'  */
#line 858 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::SPRINTF, (yyvsp[-1].expr)); }
#line 3981 "CMDgram.cpp"
    break;

  case 185: /* inline_command_expr: rwRANDOMF '(' ')'  */
#line 860 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-2].i).lineNumber, CommandStmtNode::RANDOMF, NULL); }
#line 3987 "CMDgram.cpp"
    break;

  case 186: /* inline_command_expr: rwRANDOMF '(' expr_list ')'  */
#line 862 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::RANDOMF, (yyvsp[-1].expr)); }
#line 3993 "CMDgram.cpp"
    break;

  case 187: /* inline_command_expr: rwFLOOR '(' expr_list ')'  */
#line 864 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::FLOOR, (yyvsp[-1].expr)); }
#line 3999 "CMDgram.cpp"
    break;

  case 188: /* inline_command_expr: rwCEIL '(' expr_list ')'  */
#line 866 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::CEIL, (yyvsp[-1].expr)); }
#line 4005 "CMDgram.cpp"
    break;

  case 189: /* inline_command_expr: rwFABS '(' expr_list ')'  */
#line 868 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::FABS, (yyvsp[-1].expr)); }
#line 4011 "CMDgram.cpp"
    break;

  case 190: /* inline_command_expr: rwSIN '(' expr_list ')'  */
#line 870 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::SIN, (yyvsp[-1].expr)); }
#line 4017 "CMDgram.cpp"
    break;

  case 191: /* inline_command_expr: rwCOS '(' expr_list ')'  */
#line 872 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::COS, (yyvsp[-1].expr)); }
#line 4023 "CMDgram.cpp"
    break;

  case 192: /* inline_command_expr: rwATAN '(' expr_list ')'  */
#line 874 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::ATAN, (yyvsp[-1].expr)); }
#line 4029 "CMDgram.cpp"
    break;

  case 193: /* inline_command_expr: rwTANH '(' expr_list ')'  */
#line 876 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::TANH, (yyvsp[-1].expr)); }
#line 4035 "CMDgram.cpp"
    break;

  case 194: /* inline_command_expr: rwSQRT '(' expr_list ')'  */
#line 878 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::SQRT, (yyvsp[-1].expr)); }
#line 4041 "CMDgram.cpp"
    break;

  case 195: /* inline_command_expr: rwISZERO '(' expr_list ')'  */
#line 880 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::ISZERO, (yyvsp[-1].expr)); }
#line 4047 "CMDgram.cpp"
    break;

  case 196: /* inline_command_expr: rwFMOD '(' expr_list ')'  */
#line 882 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::FMOD, (yyvsp[-1].expr)); }
#line 4053 "CMDgram.cpp"
    break;

  case 197: /* inline_command_expr: rwMIN '(' expr_list ')'  */
#line 884 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::MIN, (yyvsp[-1].expr)); }
#line 4059 "CMDgram.cpp"
    break;

  case 198: /* inline_command_expr: rwMAX '(' expr_list ')'  */
#line 886 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::MAX, (yyvsp[-1].expr)); }
#line 4065 "CMDgram.cpp"
    break;

  case 199: /* inline_command_expr: rwATAN2 '(' expr_list ')'  */
#line 888 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::ATAN2, (yyvsp[-1].expr)); }
#line 4071 "CMDgram.cpp"
    break;

  case 200: /* inline_command_expr: rwPOW '(' expr_list ')'  */
#line 890 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::POW, (yyvsp[-1].expr)); }
#line 4077 "CMDgram.cpp"
    break;

  case 201: /* inline_command_expr: rwCLAMP '(' expr_list ')'  */
#line 892 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::CLAMP, (yyvsp[-1].expr)); }
#line 4083 "CMDgram.cpp"
    break;

  case 202: /* inline_command_expr: rwCLAMPF '(' expr_list ')'  */
#line 894 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::CLAMPF, (yyvsp[-1].expr)); }
#line 4089 "CMDgram.cpp"
    break;

  case 203: /* inline_command_expr: rwLERP '(' expr_list ')'  */
#line 896 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::LERP, (yyvsp[-1].expr)); }
#line 4095 "CMDgram.cpp"
    break;

  case 204: /* inline_command_expr: rwSMOOTHSTEP '(' expr_list ')'  */
#line 898 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::SMOOTHSTEP, (yyvsp[-1].expr)); }
#line 4101 "CMDgram.cpp"
    break;

  case 205: /* expr_list: expr  */
#line 910 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 4107 "CMDgram.cpp"
    break;

  case 206: /* expr_list: expr_list ',' expr  */
#line 912 "CMDgram.y"
      { ((yyvsp[-2].expr))->append((yyvsp[0].expr)); (yyval.expr) = (yyvsp[-2].expr); }
#line 4113 "CMDgram.cpp"
    break;

  case 207: /* slot_assign_list_opt: %empty  */
#line 917 "CMDgram.y"
      { (yyval.slist) = NULL; }
#line 4119 "CMDgram.cpp"
    break;

  case 208: /* slot_assign_list_opt: slot_assign_list  */
#line 919 "CMDgram.y"
      { (yyval.slist) = (yyvsp[0].slist); }
#line 4125 "CMDgram.cpp"
    break;

  case 209: /* slot_assign_list: slot_assign  */
#line 924 "CMDgram.y"
      { (yyval.slist) = (yyvsp[0].slist); }
#line 4131 "CMDgram.cpp"
    break;

  case 210: /* slot_assign_list: slot_assign_list slot_assign  */
#line 926 "CMDgram.y"
      { (yyvsp[-1].slist)->append((yyvsp[0].slist)); (yyval.slist) = (yyvsp[-1].slist); }
#line 4137 "CMDgram.cpp"
    break;

  case 211: /* slot_assign: IDENT '=' expr ';'  */
#line 932 "CMDgram.y"
      { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-3].s).lineNumber, NULL, NULL, (yyvsp[-3].s).value, (yyvsp[-1].expr)); }
#line 4143 "CMDgram.cpp"
    break;

  case 212: /* slot_assign: IDENT '=' '{' expr_list '}' ';'  */
#line 936 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-5].s).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-2].expr);
         (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-5].s).lineNumber, NULL, NULL, (yyvsp[-5].s).value, vecNode);
      }
#line 4153 "CMDgram.cpp"
    break;

  case 213: /* slot_assign: IDENT '=' '[' expr_list ']' ';'  */
#line 943 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-5].s).lineNumber, true);
         vecNode->argList = (ExprNode*)(yyvsp[-2].expr);
         (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-5].s).lineNumber, NULL, NULL, (yyvsp[-5].s).value, vecNode);
      }
#line 4163 "CMDgram.cpp"
    break;

  case 214: /* slot_assign: TYPEIDENT IDENT '=' expr ';'  */
#line 951 "CMDgram.y"
      { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-4].i).lineNumber, NULL, NULL, (yyvsp[-3].s).value, (yyvsp[-1].expr), (yyvsp[-4].i).value); }
#line 4169 "CMDgram.cpp"
    break;

  case 215: /* slot_assign: TYPEIDENT IDENT '=' '{' expr_list '}' ';'  */
#line 955 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-6].i).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-2].expr);
         (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-6].i).lineNumber, NULL, NULL, (yyvsp[-5].s).value, vecNode, (yyvsp[-6].i).value);
      }
#line 4179 "CMDgram.cpp"
    break;

  case 216: /* slot_assign: rwDATABLOCK '=' expr ';'  */
#line 963 "CMDgram.y"
      { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-3].i).lineNumber, NULL, NULL, StringTable->insert("datablock"), (yyvsp[-1].expr)); }
#line 4185 "CMDgram.cpp"
    break;

  case 217: /* slot_assign: IDENT '[' aidx_expr ']' '=' expr ';'  */
#line 965 "CMDgram.y"
      { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-6].s).lineNumber, NULL, (yyvsp[-4].expr), (yyvsp[-6].s).value, (yyvsp[-1].expr)); }
#line 4191 "CMDgram.cpp"
    break;

  case 218: /* slot_assign: IDENT '[' aidx_expr ']' '=' '{' expr_list '}' ';'  */
#line 969 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-8].s).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-2].expr);
         (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-8].s).lineNumber, NULL, (yyvsp[-6].expr), (yyvsp[-8].s).value, vecNode);
      }
#line 4201 "CMDgram.cpp"
    break;

  case 219: /* slot_assign: TYPEIDENT IDENT '[' aidx_expr ']' '=' expr ';'  */
#line 976 "CMDgram.y"
      { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-7].i).lineNumber, NULL, (yyvsp[-4].expr), (yyvsp[-6].s).value, (yyvsp[-1].expr), (yyvsp[-7].i).value); }
#line 4207 "CMDgram.cpp"
    break;

  case 220: /* aidx_expr: expr  */
#line 999 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 4213 "CMDgram.cpp"
    break;

  case 221: /* aidx_expr: aidx_expr ',' expr  */
#line 1001 "CMDgram.y"
      { (yyval.expr) = CommaCatExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4219 "CMDgram.cpp"
    break;


#line 4223 "CMDgram.cpp"

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

#line 1004 "CMDgram.y"


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
