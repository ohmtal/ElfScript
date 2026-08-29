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
  YYSYMBOL_var_list_decl = 128,            /* var_list_decl  */
  YYSYMBOL_var_list = 129,                 /* var_list  */
  YYSYMBOL_param = 130,                    /* param  */
  YYSYMBOL_datablock_decl = 131,           /* datablock_decl  */
  YYSYMBOL_object_decl = 132,              /* object_decl  */
  YYSYMBOL_parent_block = 133,             /* parent_block  */
  YYSYMBOL_object_name = 134,              /* object_name  */
  YYSYMBOL_object_args = 135,              /* object_args  */
  YYSYMBOL_object_declare_block = 136,     /* object_declare_block  */
  YYSYMBOL_object_decl_list = 137,         /* object_decl_list  */
  YYSYMBOL_stmt_block = 138,               /* stmt_block  */
  YYSYMBOL_switch_stmt = 139,              /* switch_stmt  */
  YYSYMBOL_case_block = 140,               /* case_block  */
  YYSYMBOL_case_expr = 141,                /* case_expr  */
  YYSYMBOL_if_stmt = 142,                  /* if_stmt  */
  YYSYMBOL_while_stmt = 143,               /* while_stmt  */
  YYSYMBOL_for_stmt = 144,                 /* for_stmt  */
  YYSYMBOL_foreach_stmt = 145,             /* foreach_stmt  */
  YYSYMBOL_expression_stmt = 146,          /* expression_stmt  */
  YYSYMBOL_expr = 147,                     /* expr  */
  YYSYMBOL_slot_acc = 148,                 /* slot_acc  */
  YYSYMBOL_intslot_acc = 149,              /* intslot_acc  */
  YYSYMBOL_class_name_expr = 150,          /* class_name_expr  */
  YYSYMBOL_assign_op_struct = 151,         /* assign_op_struct  */
  YYSYMBOL_stmt_expr = 152,                /* stmt_expr  */
  YYSYMBOL_funcall_expr = 153,             /* funcall_expr  */
  YYSYMBOL_func_arg_item = 154,            /* func_arg_item  */
  YYSYMBOL_func_arg_list = 155,            /* func_arg_list  */
  YYSYMBOL_func_arg_list_decl = 156,       /* func_arg_list_decl  */
  YYSYMBOL_assert_expr = 157,              /* assert_expr  */
  YYSYMBOL_inline_command_expr = 158,      /* inline_command_expr  */
  YYSYMBOL_expr_list = 159,                /* expr_list  */
  YYSYMBOL_slot_assign_list_opt = 160,     /* slot_assign_list_opt  */
  YYSYMBOL_slot_assign_list = 161,         /* slot_assign_list  */
  YYSYMBOL_slot_assign = 162,              /* slot_assign  */
  YYSYMBOL_aidx_expr = 163                 /* aidx_expr  */
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
#define YYLAST   5449

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  119
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  213
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  559

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
       0,   216,   216,   222,   223,   228,   230,   232,   237,   242,
     244,   250,   251,   256,   257,   258,   259,   260,   261,   262,
     264,   266,   268,   271,   278,   280,   282,   284,   290,   293,
     299,   300,   305,   307,   324,   326,   328,   330,   335,   340,
     342,   344,   346,   348,   350,   356,   357,   363,   364,   370,
     371,   377,   378,   380,   382,   387,   389,   394,   396,   401,
     403,   411,   413,   415,   420,   422,   427,   429,   434,   436,
     441,   443,   445,   447,   449,   451,   453,   455,   459,   462,
     465,   468,   471,   482,   485,   488,   491,   494,   497,   500,
     505,   510,   512,   514,   516,   518,   520,   522,   524,   526,
     528,   530,   532,   534,   536,   538,   547,   554,   561,   563,
     565,   567,   569,   571,   573,   575,   577,   579,   581,   583,
     591,   593,   595,   597,   599,   601,   603,   605,   607,   609,
     611,   613,   615,   621,   623,   628,   630,   635,   637,   642,
     644,   646,   648,   650,   652,   654,   656,   658,   660,   662,
     664,   670,   672,   674,   676,   678,   682,   690,   694,   702,
     704,   706,   708,   710,   742,   745,   748,   754,   756,   768,
     770,   776,   777,   798,   800,   807,   809,   811,   813,   815,
     817,   819,   821,   823,   825,   827,   829,   831,   833,   835,
     837,   839,   841,   843,   845,   847,   849,   851,   863,   865,
     871,   872,   877,   879,   885,   889,   897,   901,   909,   911,
     915,   923,   946,   948
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
  "var_list_decl", "var_list", "param", "datablock_decl", "object_decl",
  "parent_block", "object_name", "object_args", "object_declare_block",
  "object_decl_list", "stmt_block", "switch_stmt", "case_block",
  "case_expr", "if_stmt", "while_stmt", "for_stmt", "foreach_stmt",
  "expression_stmt", "expr", "slot_acc", "intslot_acc", "class_name_expr",
  "assign_op_struct", "stmt_expr", "funcall_expr", "func_arg_item",
  "func_arg_list", "func_arg_list_decl", "assert_expr",
  "inline_command_expr", "expr_list", "slot_assign_list_opt",
  "slot_assign_list", "slot_assign", "aidx_expr", YY_NULLPTR
  };
  return yy_sname[yysymbol];
}
#endif

#define YYPACT_NINF (-433)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-91)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -433,    19,   644,  -433,   -18,   -15,   -15,   -24,    33,    84,
    1475,    91,   950,    98,   105,   138,   -15,   140,   151,    87,
     165,  -433,   154,   -31,   -16,  -433,  -433,  -433,  -433,  3310,
    3310,  3310,  3310,  3310,   183,   185,   188,   196,   209,   214,
     219,   223,   226,   233,   243,   249,   251,   263,   274,   277,
     282,   284,   291,   293,   297,   300,  -433,  -433,  -433,  -433,
    -433,  -433,  -433,  -433,  -433,  -433,  -433,   172,  5265,   372,
    -433,   310,  -433,  -433,  -433,    29,  -433,  3310,   321,   322,
    -433,  -433,  3310,  -433,  -433,  -433,  3310,  3844,  -433,  3310,
    -433,  -433,   194,  1560,   342,   346,   329,  3310,  3310,   327,
    3310,  3310,  1645,  -433,  -433,  3310,  3310,  3310,  3310,  3310,
    3310,  3310,  3310,  3310,  3310,  3310,  -433,  1730,   350,    70,
      70,  3893,    70,    70,  3310,  3310,  3310,  1815,  3310,  3310,
    3310,  3310,  3310,  3310,  3310,  3310,  3310,  3310,  3310,  3310,
    3310,  3310,  3310,  3310,  3310,  3310,  -433,  3310,  3310,  3310,
    3310,  3310,  3310,   355,  3310,  3310,  3310,  3310,  3310,   -15,
     -15,  3310,  3310,  3310,  3310,  3310,  3310,  3310,  3310,  3310,
    3310,  1900,  1985,  -433,   359,   360,  3942,   729,  3310,  3991,
    5265,    66,  -433,  4040,  1060,   345,   149,  2070,  4089,   379,
     381,  3310,  4138,  4187,   403,  3383,  3432,  3310,  5265,  5265,
    5265,  5265,  5265,  5265,  5265,  5265,  5265,  5265,  5265,  5265,
     -41,  3310,  5265,  -433,   352,   356,   358,  -433,    77,    88,
     119,  -433,   176,   202,   206,   220,   227,   237,   239,   244,
     252,   254,   258,   260,   264,   267,   269,   271,   301,   303,
     308,   324,   324,    70,    70,  1063,  1063,   -21,   732,   953,
      70,   843,   201,  -433,  -433,   489,   489,   296,   296,  1063,
    1063,   530,  5361,   201,   201,  3310,  4236,  3310,  5265,   -42,
     361,   354,  -433,   363,  -433,  3310,   357,  5265,   357,   950,
    3310,   362,   950,  -433,  -433,  3310,  2155,  2265,  4285,  2350,
    2435,  3310,  4334,   364,   368,    13,  -433,  -433,   373,  3310,
    -433,    71,  3310,   557,    74,  1730,  -433,  1730,  -433,  -433,
    -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,
    -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,
    1730,  3310,   128,  2545,   129,  3310,   370,   369,   359,   359,
     305,   392,   375,   375,   425,  5265,  -433,  -433,  4383,  3310,
    4432,   950,  4481,  2630,  2715,  4530,  3310,  3481,  4579,   382,
     411,   411,   383,  -433,   398,  4628,  -433,  5265,  2800,  -433,
    -433,  -433,   399,   400,   -40,   401,  3310,  5314,  -433,  5265,
    3310,  -433,  -433,   404,   357,  -433,  3310,   407,   408,   950,
    -433,  3530,  3310,  -433,   950,   950,  4677,   950,  4726,  2885,
    3579,   950,  3310,   950,   409,  3310,   406,   410,  -433,  -433,
    -433,  3310,  5265,  -433,  -433,  -433,  2970,   139,  5265,  1170,
     412,   375,   413,   414,   416,  -433,   950,  3310,  3628,  -433,
    -433,   950,  -433,   950,   950,  4775,   950,  3310,  -433,  3682,
    -433,   103,    64,  5265,  -433,  -433,   155,  3310,  5314,  -433,
    -433,  -433,   422,   175,   175,  -433,  3736,   950,  3310,  -433,
    -433,  -433,   950,  -433,  3790,   950,  3310,   418,   -39,   442,
     421,   103,  -433,  3310,  -433,  -433,   158,  1280,   423,   427,
     426,   365,   175,   430,   950,  3310,  -433,  4824,  -433,   950,
    3310,  -433,  4873,  3310,  3055,  3310,   -36,   429,  -433,  5265,
     840,  -433,  -433,   175,  -433,  -433,   433,   365,  -433,  -433,
    4922,   950,  -433,  4971,   950,  5020,  3310,  5069,   -35,  3140,
    3310,  -433,   438,  -433,   436,  -433,   950,  -433,   950,  -433,
    -433,   192,  -433,   448,  3310,  5118,   -29,  -433,  -433,  -433,
    -433,   440,  3225,   193,  -433,   451,  1390,  -433,  3310,  5167,
     443,  3310,   199,  -433,  -433,  5216,   444,  -433,  -433
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     2,     1,     0,     0,     0,   126,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   125,   103,   131,   129,    27,   130,   123,   124,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     4,     7,     5,     6,
      17,   154,    18,    13,    14,    15,    16,     0,     0,   127,
     128,    91,   151,   152,   153,     0,   137,     0,     0,     0,
      19,    20,     0,   126,   103,    21,     0,     0,    91,     0,
      11,    58,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   140,   139,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   159,   171,     0,   101,
     102,     0,   122,   121,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    24,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   161,    30,     0,     0,    47,    47,     0,
     198,     0,    22,     0,     0,     0,   131,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   155,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   212,
       0,     0,   167,   169,   172,     0,     0,    92,     0,     0,
       0,   178,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    97,    98,    99,   100,   108,   109,   133,    96,    95,
      94,    93,   120,   135,   136,   115,   116,   112,   113,   110,
     111,   117,   114,   118,   119,     0,     0,     0,   162,    34,
       0,    31,    32,     0,   138,    47,    45,    48,    45,     0,
       0,     0,     0,    57,    12,     0,     0,     0,     0,     0,
       0,     0,    45,     0,     0,     0,     9,   173,     0,     0,
      25,     0,     0,   132,     0,     0,   164,   171,   175,   176,
     177,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     171,     0,     0,     0,     0,     0,    35,     0,     0,    30,
       0,     0,    49,    49,    66,   199,    23,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,     0,     0,   156,   213,     0,   160,
     168,   170,     0,     0,     0,     0,     0,   104,   163,    36,
       0,    11,    33,     0,    45,    46,     0,     0,     0,     0,
      69,     0,     0,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     8,   174,
      26,     0,   157,   165,   166,   134,     0,     0,    37,     0,
       0,    49,    50,    40,    44,    67,     0,     0,     0,    76,
      75,     0,    73,     0,     0,     0,     0,     0,    83,     0,
      84,   200,     0,    64,    59,    60,     0,     0,   107,   106,
      28,    11,     0,    51,    51,    82,     0,     0,     0,    74,
      72,    71,     0,    89,     0,     0,     0,     0,     0,     0,
       0,   201,   202,     0,    11,   158,     0,     0,    42,     0,
       0,    53,    52,     0,     0,     0,    78,     0,    70,     0,
       0,    85,     0,     0,     0,     0,     0,     0,   203,    65,
      61,   105,    29,    51,    55,    39,     0,    54,    43,    79,
       0,     0,    86,     0,     0,     0,     0,     0,     0,     0,
       0,    38,     0,    63,     0,    56,     0,    80,     0,    87,
     208,     0,   204,     0,     0,     0,     0,    11,    41,    81,
      88,     0,     0,     0,   206,     0,    62,   205,     0,     0,
       0,     0,     0,   209,   207,     0,     0,   211,   210
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -433,  -433,  -433,  -433,  -433,  -433,  -358,     2,  -181,   164,
    -433,   166,  -433,  -248,  -267,  -173,  -340,  -432,    23,  -194,
    -433,  -359,  -433,  -433,  -433,  -433,  -433,  -433,    -2,  -433,
    -433,    18,   -68,   126,  -433,   203,  -433,  -206,  -433,  -433,
     -75,  -433,    65,  -385,  -324
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,    56,    57,   295,   184,    91,    59,   270,
     271,   272,    60,    61,   342,   276,   387,   480,   481,    92,
      62,   406,   442,    63,    64,    65,    66,    67,   180,    69,
      70,    78,   116,    88,    72,   213,   214,   215,    73,    74,
     181,   470,   482,   472,   210
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      68,   173,   407,   388,    58,   278,   335,   374,    87,   494,
      68,   343,   519,   296,   302,   302,     4,   102,    75,     3,
     302,    76,   483,   419,    79,   359,   302,   119,   120,   121,
     122,   123,   330,    80,    96,   103,   104,   117,    77,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   218,
     219,   220,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   524,   362,   118,   336,   176,   495,   303,   415,   520,
     179,   452,   174,   533,   115,   344,   498,   183,   347,   545,
      81,   188,   473,   477,   331,   192,   193,   498,   195,   196,
     198,   372,   340,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   363,   212,   500,   421,   175,   153,
     474,   280,   301,    99,   373,   281,   280,   467,    71,   280,
     366,   308,   280,   370,   159,   160,   304,    82,    71,   468,
     469,   523,   309,   280,    89,   241,   242,   243,   244,   245,
     246,    93,   248,   249,   250,   251,   252,   393,    94,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   266,
     268,   518,   286,   310,   280,   277,   277,   253,   254,   546,
       5,     6,    68,   280,   280,   288,   284,   375,   378,   292,
     332,    95,   334,    97,   280,   425,   536,   102,   449,   467,
     429,   430,   101,   432,    98,   479,   479,   438,   185,   440,
     280,   468,   469,   280,   475,   103,   104,   501,   100,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   146,
     311,   280,   455,   506,   479,   369,   124,   459,   125,   460,
     461,   126,   463,   147,   148,   149,   150,   280,   280,   127,
     153,   541,   550,   156,   280,   479,   312,   280,   556,   506,
     313,   280,   128,   486,   115,   159,   160,   129,   488,   161,
     162,   491,   130,   277,   314,   280,   131,    68,   345,   132,
      68,   315,   280,   348,   350,   352,   133,   355,   357,   358,
     509,   316,   280,   317,   280,   512,   134,   365,   318,   280,
     367,   417,   135,   212,   136,   212,   319,   280,   320,   280,
      71,   422,   321,   280,   322,   280,   137,   527,   323,   280,
     529,   324,   280,   325,   280,   326,   280,   138,   212,   209,
     139,   377,   539,   379,   540,   140,   446,   141,   147,   148,
     149,   150,   151,   152,   142,   153,   143,   391,   156,    68,
     144,   396,   398,   145,   400,   327,   280,   328,   280,   158,
     159,   160,   329,   280,   161,   162,   412,   -90,   149,   150,
       5,     6,   476,   153,   177,   178,   156,   189,   418,   165,
     166,   190,   191,   169,   170,   194,   216,    68,   159,   160,
     428,   247,    68,    68,   269,    68,   273,   435,   285,    68,
     439,    68,   290,   443,   291,    71,     4,   305,    71,   338,
     306,   307,   364,   341,   448,   337,   339,    68,   380,   346,
     172,   284,   360,   384,    68,   456,   361,   381,   385,    68,
     386,    68,    68,   389,    68,   464,   404,   405,   103,   104,
     408,   531,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   409,   413,   414,    68,   487,   416,   420,   543,
      68,   423,   424,    68,   492,   444,   493,   441,   280,   445,
     451,   499,   453,   552,   454,    68,   478,    71,   496,   284,
     497,   503,    68,   510,   504,   505,   521,    68,   513,   508,
     525,   515,   517,   209,   537,   538,   542,   547,    68,   551,
     554,   558,   284,   383,   382,   507,   471,     0,   371,    68,
       0,     0,    68,     0,     0,    71,     0,   535,   209,     0,
      71,    71,     0,    71,    68,     0,    68,    71,     0,    71,
       0,   147,   148,   149,   150,     0,     0,     0,   153,     0,
     549,   156,     0,     0,    68,    71,     0,     0,   284,   555,
       0,     0,    71,   159,   160,     0,     0,    71,     0,    71,
      71,     0,    71,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   147,   148,   149,   150,   151,   152,     0,   153,
     154,   155,   156,    71,     0,     0,     0,     0,    71,     0,
     157,    71,     0,   158,   159,   160,     0,     0,   161,   162,
       0,     0,     0,    71,     0,   368,     0,     0,     0,     0,
      71,   163,   164,   165,   166,    71,     0,   169,   170,     0,
       0,     0,     0,   103,   104,     0,    71,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,    71,     0,     0,
      71,     0,     0,     0,     0,     0,     0,     4,     0,     5,
       6,     7,    71,     8,    71,     9,     0,    10,    11,    12,
       0,     0,     0,     0,    13,    14,    15,     0,    16,    17,
       0,    18,    71,    19,    20,     0,     0,    21,    22,    23,
      24,     0,    25,    26,    27,    28,     0,    29,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    31,     0,     0,
       0,     0,     0,     0,     0,    32,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,    83,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    20,
       0,     0,    21,    84,    23,    24,     0,     0,    26,    27,
      28,     0,    29,    30,   147,   148,   149,   150,   151,   152,
       0,   153,    31,   155,   156,     0,     0,     0,     0,     0,
      32,    33,   157,     0,     0,   158,   159,   160,     0,     0,
     161,   162,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   163,   164,   165,   166,     0,     0,   169,
     170,     0,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,   275,     5,     6,     7,     0,     8,
       0,     9,     0,    10,    11,    12,     0,     0,     0,   522,
      13,    14,    15,     0,    16,    17,   405,    18,     0,     0,
      20,     0,     0,    21,    22,    23,    24,     0,    25,    26,
      27,    28,     0,    29,    30,   147,   148,   149,   150,   151,
     152,     0,   153,    31,   155,   156,     0,     0,     0,     0,
       0,    32,    33,     0,     0,     0,   158,   159,   160,     0,
       0,   161,   162,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   163,   164,   165,   166,     0,     0,
     169,   170,     0,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     5,     6,     7,     0,     8,
       0,     9,     0,    10,    11,    12,     0,     0,     0,     0,
      13,    14,    15,     0,    16,    17,     0,    18,     0,     0,
      20,     0,     0,    21,    22,    23,    24,     0,    25,    26,
      27,    28,     0,    29,    30,   147,   148,   149,   150,   151,
     152,     0,   153,    31,     0,   156,     0,     0,    90,     0,
       0,    32,    33,     0,     0,     0,   158,   159,   160,     0,
       0,   161,   162,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   163,   164,   165,   166,     0,     0,
     169,   170,     0,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     5,     6,     7,     0,     8,
       0,     9,     0,    10,    11,    12,     0,     0,     0,     0,
      13,    14,    15,     0,    16,    17,     0,    18,     0,     0,
      20,     0,     0,    21,    22,    23,    24,     0,    25,    26,
      27,    28,     0,    29,    30,   147,   148,   149,   150,     0,
       0,     0,   153,    31,     0,   156,     0,     0,     0,   283,
       0,    32,    33,     0,     0,     0,   158,   159,   160,     0,
       0,   161,   162,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     169,   170,     0,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     5,     6,     7,     0,     8,
       0,     9,     0,    10,    11,    12,     0,     0,     0,     0,
      13,    14,    15,     0,    16,    17,     0,    18,     0,     0,
      20,     0,     0,    21,    22,    23,    24,     0,    25,    26,
      27,    28,     0,    29,    30,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     0,     0,     0,     0,   450,
       0,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     5,     6,     7,     0,     8,
       0,     9,     0,    10,    11,    12,     0,     0,     0,     0,
      13,    14,    15,     0,    16,    17,     0,    18,     0,     0,
      20,     0,     0,    21,    22,    23,    24,     0,    25,    26,
      27,    28,     0,    29,    30,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     0,     0,     0,     0,   502,
       0,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     5,     6,     7,     0,     8,
       0,     9,     0,    10,    11,    12,     0,     0,     0,     0,
      13,    14,    15,     0,    16,    17,     0,    18,     0,     0,
      20,     0,     0,    21,    22,    23,    24,     0,    25,    26,
      27,    28,     0,    29,    30,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     0,     0,     0,     0,     0,
       0,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     6,    83,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    20,     0,     0,    21,    84,
      23,    24,     0,     0,    26,    27,    28,     0,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
       0,     0,    85,    86,     0,     0,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     6,    83,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      20,     0,     0,    21,    84,   186,    24,     0,     0,    26,
      27,    28,     0,    29,    30,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     0,     0,   187,     0,     0,
       0,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     6,    83,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    20,     0,     0,    21,    84,
      23,    24,     0,     0,    26,    27,    28,     0,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
       0,     0,     0,   197,     0,     0,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     6,    83,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      20,     0,     0,    21,    84,    23,    24,     0,     0,    26,
      27,    28,     0,    29,    30,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     0,     0,     0,   211,     0,
       0,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     6,    83,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    20,     0,     0,    21,    84,
      23,    24,     0,     0,    26,    27,    28,     0,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     0,    31,   221,
       0,     0,     0,     0,     0,     0,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     6,    83,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      20,     0,     0,    21,    84,    23,    24,     0,     0,    26,
      27,    28,     0,    29,    30,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     0,     0,     0,   265,     0,
       0,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     6,    83,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    20,     0,     0,    21,    84,
      23,    24,     0,     0,    26,    27,    28,     0,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
       0,     0,     0,   267,     0,     0,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     6,    83,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      20,     0,     0,    21,    84,    23,    24,     0,     0,    26,
      27,    28,     0,    29,    30,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     0,     0,   287,     0,     0,
       0,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     6,    83,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    20,     0,     0,    21,    84,
      23,    24,     0,     0,    26,    27,    28,     0,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
       0,     0,     0,     0,     0,     0,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   349,     0,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       5,     6,    83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     0,     0,    21,    84,
      23,    24,     0,     0,    26,    27,    28,     0,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     0,    31,   351,
       0,     0,     0,     0,     0,     0,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     6,    83,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      20,     0,     0,    21,    84,    23,    24,     0,     0,    26,
      27,    28,     0,    29,    30,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     0,     0,   354,     0,     0,
       0,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     6,    83,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    20,     0,     0,    21,    84,
      23,    24,     0,     0,    26,    27,    28,     0,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
       0,     0,     0,     0,     0,     0,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   356,     0,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       5,     6,    83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     0,     0,    21,    84,
      23,    24,     0,     0,    26,    27,    28,     0,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
       0,     0,     0,   376,     0,     0,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     6,    83,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      20,     0,     0,    21,    84,    23,    24,     0,     0,    26,
      27,    28,     0,    29,    30,     0,     0,     0,     0,     0,
       0,     0,     0,    31,   395,     0,     0,     0,     0,     0,
       0,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     6,    83,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    20,     0,     0,    21,    84,
      23,    24,     0,     0,    26,    27,    28,     0,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     0,    31,   397,
       0,     0,     0,     0,     0,     0,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     6,    83,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      20,     0,     0,    21,    84,    23,    24,     0,     0,    26,
      27,    28,     0,    29,    30,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     0,     0,     0,   411,     0,
       0,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     6,    83,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    20,     0,     0,    21,    84,
      23,    24,     0,     0,    26,    27,    28,     0,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     0,    31,   434,
       0,     0,     0,     0,     0,     0,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     6,    83,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      20,     0,     0,    21,    84,    23,    24,     0,     0,    26,
      27,    28,     0,    29,    30,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     0,     0,     0,   447,     0,
       0,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     6,    83,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    20,     0,     0,    21,    84,
      23,    24,     0,     0,    26,    27,    28,     0,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
       0,     0,     0,   516,     0,     0,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     6,    83,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      20,     0,     0,    21,    84,    23,    24,     0,     0,    26,
      27,    28,     0,    29,    30,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     0,     0,     0,   534,     0,
       0,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     6,    83,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    20,     0,     0,    21,    84,
      23,    24,     0,     0,    26,    27,    28,     0,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
       0,     0,     0,   548,     0,     0,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     6,    83,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      20,     0,     0,    21,    84,    23,    24,     0,     0,    26,
      27,    28,     0,    29,    30,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     0,     0,     0,     0,     0,
       0,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,   147,   148,   149,   150,   151,
     152,     0,   153,   154,   155,   156,     0,   297,   298,     0,
       0,     0,     0,   157,     0,     0,   158,   159,   160,     0,
       0,   161,   162,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   163,   164,   165,   166,   167,   168,
     169,   170,     0,     0,   147,   148,   149,   150,   151,   152,
       0,   153,   154,   155,   156,     0,     0,   299,     0,   300,
       0,     0,   157,     0,     0,   158,   159,   160,     0,   171,
     161,   162,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   163,   164,   165,   166,   167,   168,   169,
     170,     0,     0,   147,   148,   149,   150,   151,   152,     0,
     153,   154,   155,   156,     0,   401,     0,     0,     0,     0,
       0,   157,     0,     0,   158,   159,   160,     0,   171,   161,
     162,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   163,   164,   165,   166,   167,   168,   169,   170,
       0,   402,   147,   148,   149,   150,   151,   152,     0,   153,
     154,   155,   156,     0,   426,     0,     0,     0,     0,     0,
     157,     0,     0,   158,   159,   160,     0,   171,   161,   162,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   163,   164,   165,   166,   167,   168,   169,   170,     0,
     427,   147,   148,   149,   150,   151,   152,     0,   153,   154,
     155,   156,     0,   436,     0,     0,     0,     0,     0,   157,
       0,     0,   158,   159,   160,     0,   171,   161,   162,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     163,   164,   165,   166,   167,   168,   169,   170,     0,   437,
     147,   148,   149,   150,   151,   152,     0,   153,   154,   155,
     156,     0,   457,     0,     0,     0,     0,     0,   157,     0,
       0,   158,   159,   160,     0,   171,   161,   162,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   163,
     164,   165,   166,   167,   168,   169,   170,     0,     0,     0,
     458,     0,     0,     0,   147,   148,   149,   150,   151,   152,
       0,   153,   154,   155,   156,     0,   465,     0,     0,     0,
       0,     0,   157,     0,   171,   158,   159,   160,     0,     0,
     161,   162,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   163,   164,   165,   166,   167,   168,   169,
     170,     0,     0,     0,   466,     0,     0,     0,   147,   148,
     149,   150,   151,   152,     0,   153,   154,   155,   156,     0,
     484,     0,     0,     0,     0,     0,   157,     0,   171,   158,
     159,   160,     0,     0,   161,   162,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   163,   164,   165,
     166,   167,   168,   169,   170,     0,     0,     0,   485,     0,
       0,     0,   147,   148,   149,   150,   151,   152,     0,   153,
     154,   155,   156,     0,   489,     0,     0,     0,     0,     0,
     157,     0,   171,   158,   159,   160,     0,     0,   161,   162,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   163,   164,   165,   166,   167,   168,   169,   170,     0,
       0,     0,   490,     0,     0,     0,   147,   148,   149,   150,
     151,   152,     0,   153,   154,   155,   156,     0,     0,     0,
       0,   182,     0,     0,   157,     0,   171,   158,   159,   160,
       0,     0,   161,   162,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   163,   164,   165,   166,   167,
     168,   169,   170,     0,     0,   147,   148,   149,   150,   151,
     152,     0,   153,   154,   155,   156,     0,   217,     0,     0,
       0,     0,     0,   157,     0,     0,   158,   159,   160,     0,
     171,   161,   162,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   163,   164,   165,   166,   167,   168,
     169,   170,     0,     0,   147,   148,   149,   150,   151,   152,
       0,   153,   154,   155,   156,     0,   274,     0,     0,     0,
       0,     0,   157,     0,     0,   158,   159,   160,     0,   171,
     161,   162,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   163,   164,   165,   166,   167,   168,   169,
     170,     0,     0,   147,   148,   149,   150,   151,   152,     0,
     153,   154,   155,   156,     0,   279,     0,     0,     0,     0,
       0,   157,     0,     0,   158,   159,   160,     0,   171,   161,
     162,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   163,   164,   165,   166,   167,   168,   169,   170,
       0,     0,   147,   148,   149,   150,   151,   152,     0,   153,
     154,   155,   156,     0,   282,     0,     0,     0,     0,     0,
     157,     0,     0,   158,   159,   160,     0,   171,   161,   162,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   163,   164,   165,   166,   167,   168,   169,   170,     0,
       0,   147,   148,   149,   150,   151,   152,     0,   153,   154,
     155,   156,     0,     0,     0,     0,   289,     0,     0,   157,
       0,     0,   158,   159,   160,     0,   171,   161,   162,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     163,   164,   165,   166,   167,   168,   169,   170,     0,     0,
     147,   148,   149,   150,   151,   152,     0,   153,   154,   155,
     156,     0,   293,     0,     0,     0,     0,     0,   157,     0,
       0,   158,   159,   160,     0,   171,   161,   162,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   163,
     164,   165,   166,   167,   168,   169,   170,     0,     0,   147,
     148,   149,   150,   151,   152,     0,   153,   154,   155,   156,
       0,   294,     0,     0,     0,     0,     0,   157,     0,     0,
     158,   159,   160,     0,   171,   161,   162,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   163,   164,
     165,   166,   167,   168,   169,   170,     0,     0,   147,   148,
     149,   150,   151,   152,     0,   153,   154,   155,   156,     0,
       0,     0,   333,     0,     0,     0,   157,     0,     0,   158,
     159,   160,     0,   171,   161,   162,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   163,   164,   165,
     166,   167,   168,   169,   170,     0,     0,   147,   148,   149,
     150,   151,   152,     0,   153,   154,   155,   156,     0,     0,
       0,     0,   353,     0,     0,   157,     0,     0,   158,   159,
     160,     0,   171,   161,   162,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   163,   164,   165,   166,
     167,   168,   169,   170,     0,     0,   147,   148,   149,   150,
     151,   152,     0,   153,   154,   155,   156,     0,     0,     0,
     341,     0,     0,     0,   157,     0,     0,   158,   159,   160,
       0,   171,   161,   162,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   163,   164,   165,   166,   167,
     168,   169,   170,     0,     0,   147,   148,   149,   150,   151,
     152,     0,   153,   154,   155,   156,     0,   390,     0,     0,
       0,     0,     0,   157,     0,     0,   158,   159,   160,     0,
     171,   161,   162,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   163,   164,   165,   166,   167,   168,
     169,   170,     0,     0,   147,   148,   149,   150,   151,   152,
       0,   153,   154,   155,   156,     0,     0,     0,     0,     0,
       0,     0,   157,     0,     0,   158,   159,   160,     0,   171,
     161,   162,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   163,   164,   165,   166,   167,   168,   169,
     170,     0,   392,   147,   148,   149,   150,   151,   152,     0,
     153,   154,   155,   156,     0,   394,     0,     0,     0,     0,
       0,   157,     0,     0,   158,   159,   160,     0,   171,   161,
     162,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   163,   164,   165,   166,   167,   168,   169,   170,
       0,     0,   147,   148,   149,   150,   151,   152,     0,   153,
     154,   155,   156,     0,     0,     0,     0,   399,     0,     0,
     157,     0,     0,   158,   159,   160,     0,   171,   161,   162,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   163,   164,   165,   166,   167,   168,   169,   170,     0,
       0,   147,   148,   149,   150,   151,   152,     0,   153,   154,
     155,   156,     0,   403,     0,     0,     0,     0,     0,   157,
       0,     0,   158,   159,   160,     0,   171,   161,   162,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     163,   164,   165,   166,   167,   168,   169,   170,     0,     0,
     147,   148,   149,   150,   151,   152,     0,   153,   154,   155,
     156,     0,     0,     0,     0,   410,     0,     0,   157,     0,
       0,   158,   159,   160,     0,   171,   161,   162,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   163,
     164,   165,   166,   167,   168,   169,   170,     0,     0,   147,
     148,   149,   150,   151,   152,     0,   153,   154,   155,   156,
       0,   431,     0,     0,     0,     0,     0,   157,     0,     0,
     158,   159,   160,     0,   171,   161,   162,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   163,   164,
     165,   166,   167,   168,   169,   170,     0,     0,   147,   148,
     149,   150,   151,   152,     0,   153,   154,   155,   156,     0,
     433,     0,     0,     0,     0,     0,   157,     0,     0,   158,
     159,   160,     0,   171,   161,   162,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   163,   164,   165,
     166,   167,   168,   169,   170,     0,     0,   147,   148,   149,
     150,   151,   152,     0,   153,   154,   155,   156,     0,   462,
       0,     0,     0,     0,     0,   157,     0,     0,   158,   159,
     160,     0,   171,   161,   162,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   163,   164,   165,   166,
     167,   168,   169,   170,     0,     0,   147,   148,   149,   150,
     151,   152,     0,   153,   154,   155,   156,     0,   511,     0,
       0,     0,     0,     0,   157,     0,     0,   158,   159,   160,
       0,   171,   161,   162,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   163,   164,   165,   166,   167,
     168,   169,   170,     0,     0,   147,   148,   149,   150,   151,
     152,     0,   153,   154,   155,   156,     0,   514,     0,     0,
       0,     0,     0,   157,     0,     0,   158,   159,   160,     0,
     171,   161,   162,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   163,   164,   165,   166,   167,   168,
     169,   170,     0,     0,   147,   148,   149,   150,   151,   152,
       0,   153,   154,   155,   156,     0,   526,     0,     0,     0,
       0,     0,   157,     0,     0,   158,   159,   160,     0,   171,
     161,   162,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   163,   164,   165,   166,   167,   168,   169,
     170,     0,     0,   147,   148,   149,   150,   151,   152,     0,
     153,   154,   155,   156,     0,   528,     0,     0,     0,     0,
       0,   157,     0,     0,   158,   159,   160,     0,   171,   161,
     162,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   163,   164,   165,   166,   167,   168,   169,   170,
       0,     0,   147,   148,   149,   150,   151,   152,     0,   153,
     154,   155,   156,     0,     0,     0,     0,   530,     0,     0,
     157,     0,     0,   158,   159,   160,     0,   171,   161,   162,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   163,   164,   165,   166,   167,   168,   169,   170,     0,
       0,   147,   148,   149,   150,   151,   152,     0,   153,   154,
     155,   156,     0,     0,     0,     0,   532,     0,     0,   157,
       0,     0,   158,   159,   160,     0,   171,   161,   162,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     163,   164,   165,   166,   167,   168,   169,   170,     0,     0,
     147,   148,   149,   150,   151,   152,     0,   153,   154,   155,
     156,     0,     0,     0,     0,   544,     0,     0,   157,     0,
       0,   158,   159,   160,     0,   171,   161,   162,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   163,
     164,   165,   166,   167,   168,   169,   170,     0,     0,   147,
     148,   149,   150,   151,   152,     0,   153,   154,   155,   156,
       0,     0,     0,     0,   553,     0,     0,   157,     0,     0,
     158,   159,   160,     0,   171,   161,   162,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   163,   164,
     165,   166,   167,   168,   169,   170,     0,     0,   147,   148,
     149,   150,   151,   152,     0,   153,   154,   155,   156,     0,
       0,     0,     0,   557,     0,     0,   157,     0,     0,   158,
     159,   160,     0,   171,   161,   162,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   163,   164,   165,
     166,   167,   168,   169,   170,     0,     0,   147,   148,   149,
     150,   151,   152,     0,   153,   154,   155,   156,     0,     0,
       0,     0,     0,     0,     0,   157,     0,     0,   158,   159,
     160,     0,   171,   161,   162,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   163,   164,   165,   166,
     167,   168,   169,   170,     0,     0,   147,   148,   149,   150,
     151,   152,     0,   153,   154,   155,   156,     0,     0,     0,
       0,     0,     0,     0,   157,     0,     0,   158,   159,   160,
       0,   171,   161,   162,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   163,   164,   165,   166,   167,
     168,   169,   170,   147,   148,   149,   150,   151,   152,     0,
     153,   154,   155,   156,     0,     0,     0,     0,     0,     0,
       0,   157,     0,     0,   158,   159,   160,     0,     0,   161,
     162,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   163,   164,   165,   166,   167,     0,   169,   170
};

static const yytype_int16 yycheck[] =
{
       2,    69,   361,   343,     2,   178,    48,   331,    10,    48,
      12,   278,    48,   194,    55,    55,     3,    48,    36,     0,
      55,    36,   454,   381,     6,   292,    55,    29,    30,    31,
      32,    33,    53,    57,    16,    66,    67,    53,    53,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   503,    59,    89,   116,    77,   115,   118,   118,   115,
      82,   421,    53,   118,   115,   279,   471,    89,   282,   118,
      57,    93,    28,   451,   115,    97,    98,   482,   100,   101,
     102,   307,   275,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   295,   117,   474,   384,    89,    49,
      56,    55,   197,    36,   330,    59,    55,    24,     2,    55,
      59,    54,    55,    59,    64,    65,   211,    53,    12,    36,
      37,   500,    54,    55,    53,   147,   148,   149,   150,   151,
     152,    53,   154,   155,   156,   157,   158,   351,    53,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   495,    23,    54,    55,   177,   178,   159,   160,   537,
       5,     6,   184,    55,    55,   187,   184,    59,    59,   191,
     265,    53,   267,    53,    55,   389,   520,    48,    59,    24,
     394,   395,    48,   397,    53,   453,   454,   401,    14,   403,
      55,    36,    37,    55,    59,    66,    67,    59,    53,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    57,
      54,    55,   426,   481,   482,   303,    53,   431,    53,   433,
     434,    53,   436,    42,    43,    44,    45,    55,    55,    53,
      49,    59,    59,    52,    55,   503,    54,    55,    59,   507,
      54,    55,    53,   457,   115,    64,    65,    53,   462,    68,
      69,   465,    53,   275,    54,    55,    53,   279,   280,    53,
     282,    54,    55,   285,   286,   287,    53,   289,   290,   291,
     484,    54,    55,    54,    55,   489,    53,   299,    54,    55,
     302,   376,    53,   305,    53,   307,    54,    55,    54,    55,
     184,   386,    54,    55,    54,    55,    53,   511,    54,    55,
     514,    54,    55,    54,    55,    54,    55,    53,   330,   331,
      53,   333,   526,   335,   528,    53,   411,    53,    42,    43,
      44,    45,    46,    47,    53,    49,    53,   349,    52,   351,
      53,   353,   354,    53,   356,    54,    55,    54,    55,    63,
      64,    65,    54,    55,    68,    69,   368,    57,    44,    45,
       5,     6,   447,    49,    53,    53,    52,    35,   380,    83,
      84,    35,    53,    87,    88,    58,    36,   389,    64,    65,
     392,    36,   394,   395,    35,   397,    36,   399,    53,   401,
     402,   403,    23,   405,    23,   279,     3,    55,   282,    55,
      54,    53,    39,    56,   416,    54,    53,   419,    48,    57,
      48,   419,    58,   118,   426,   427,    58,    58,    36,   431,
      55,   433,   434,     8,   436,   437,    54,    26,    66,    67,
      57,   516,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    54,    54,    54,   457,   458,    56,    54,   534,
     462,    54,    54,   465,   466,    59,    48,    58,    55,    59,
      58,   473,    58,   548,    58,   477,    54,   351,    36,   477,
      59,    58,   484,   485,    57,    59,    57,   489,   490,    59,
      57,   493,   494,   495,    56,    59,    48,    57,   500,    48,
      57,    57,   500,   339,   338,   482,   441,    -1,   305,   511,
      -1,    -1,   514,    -1,    -1,   389,    -1,   519,   520,    -1,
     394,   395,    -1,   397,   526,    -1,   528,   401,    -1,   403,
      -1,    42,    43,    44,    45,    -1,    -1,    -1,    49,    -1,
     542,    52,    -1,    -1,   546,   419,    -1,    -1,   546,   551,
      -1,    -1,   426,    64,    65,    -1,    -1,   431,    -1,   433,
     434,    -1,   436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    51,    52,   457,    -1,    -1,    -1,    -1,   462,    -1,
      60,   465,    -1,    63,    64,    65,    -1,    -1,    68,    69,
      -1,    -1,    -1,   477,    -1,    48,    -1,    -1,    -1,    -1,
     484,    81,    82,    83,    84,   489,    -1,    87,    88,    -1,
      -1,    -1,    -1,    66,    67,    -1,   500,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,   511,    -1,    -1,
     514,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,
       6,     7,   526,     9,   528,    11,    -1,    13,    14,    15,
      -1,    -1,    -1,    -1,    20,    21,    22,    -1,    24,    25,
      -1,    27,   546,    29,    30,    -1,    -1,    33,    34,    35,
      36,    -1,    38,    39,    40,    41,    -1,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,     7,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    42,    43,    44,    45,    46,    47,
      -1,    49,    53,    51,    52,    -1,    -1,    -1,    -1,    -1,
      61,    62,    60,    -1,    -1,    63,    64,    65,    -1,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    -1,    -1,    87,
      88,    -1,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,     5,     6,     7,    -1,     9,
      -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,
      20,    21,    22,    -1,    24,    25,    26,    27,    -1,    -1,
      30,    -1,    -1,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    -1,    43,    44,    42,    43,    44,    45,    46,
      47,    -1,    49,    53,    51,    52,    -1,    -1,    -1,    -1,
      -1,    61,    62,    -1,    -1,    -1,    63,    64,    65,    -1,
      -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    -1,    -1,
      87,    88,    -1,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,     5,     6,     7,    -1,     9,
      -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    -1,
      20,    21,    22,    -1,    24,    25,    -1,    27,    -1,    -1,
      30,    -1,    -1,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    -1,    43,    44,    42,    43,    44,    45,    46,
      47,    -1,    49,    53,    -1,    52,    -1,    -1,    58,    -1,
      -1,    61,    62,    -1,    -1,    -1,    63,    64,    65,    -1,
      -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    -1,    -1,
      87,    88,    -1,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,     5,     6,     7,    -1,     9,
      -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    -1,
      20,    21,    22,    -1,    24,    25,    -1,    27,    -1,    -1,
      30,    -1,    -1,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    -1,    43,    44,    42,    43,    44,    45,    -1,
      -1,    -1,    49,    53,    -1,    52,    -1,    -1,    -1,    59,
      -1,    61,    62,    -1,    -1,    -1,    63,    64,    65,    -1,
      -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    -1,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,     5,     6,     7,    -1,     9,
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
     110,   111,   112,   113,   114,     5,     6,     7,    -1,     9,
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
     110,   111,   112,   113,   114,     5,     6,     7,    -1,     9,
      -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    -1,
      20,    21,    22,    -1,    24,    25,    -1,    27,    -1,    -1,
      30,    -1,    -1,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,     7,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,    30,    -1,    -1,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    57,    58,    -1,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,     6,     7,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      30,    -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    57,    -1,    -1,
      -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,     7,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,    30,    -1,    -1,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,     6,     7,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      30,    -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    58,    -1,
      -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,     7,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,    30,    -1,    -1,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,     6,     7,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      30,    -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    58,    -1,
      -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,     7,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,    30,    -1,    -1,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,     6,     7,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      30,    -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    57,    -1,    -1,
      -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,     7,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,    30,    -1,    -1,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
       5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,     6,     7,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      30,    -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    57,    -1,    -1,
      -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,     7,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,    30,    -1,    -1,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
       5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,     6,     7,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      30,    -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,     7,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,    30,    -1,    -1,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,     6,     7,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      30,    -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    58,    -1,
      -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,     7,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,    30,    -1,    -1,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,     6,     7,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      30,    -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    58,    -1,
      -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,     7,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,    30,    -1,    -1,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,     6,     7,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      30,    -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    58,    -1,
      -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,     7,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,    30,    -1,    -1,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,     6,     7,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      30,    -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,    42,    43,    44,    45,    46,
      47,    -1,    49,    50,    51,    52,    -1,    54,    55,    -1,
      -1,    -1,    -1,    60,    -1,    -1,    63,    64,    65,    -1,
      -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    -1,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    -1,    -1,    55,    -1,    57,
      -1,    -1,    60,    -1,    -1,    63,    64,    65,    -1,   116,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    -1,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    51,    52,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    63,    64,    65,    -1,   116,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    90,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    63,    64,    65,    -1,   116,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      90,    42,    43,    44,    45,    46,    47,    -1,    49,    50,
      51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    63,    64,    65,    -1,   116,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    90,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    63,    64,    65,    -1,   116,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    60,    -1,   116,    63,    64,    65,    -1,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    92,    -1,    -1,    -1,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    52,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    60,    -1,   116,    63,
      64,    65,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      60,    -1,   116,    63,    64,    65,    -1,    -1,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    51,    52,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    60,    -1,   116,    63,    64,    65,
      -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
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
      51,    52,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,
      -1,    -1,    63,    64,    65,    -1,   116,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    -1,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    63,    64,    65,    -1,   116,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    -1,    42,
      43,    44,    45,    46,    47,    -1,    49,    50,    51,    52,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      63,    64,    65,    -1,   116,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    -1,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    52,    -1,
      -1,    -1,    56,    -1,    -1,    -1,    60,    -1,    -1,    63,
      64,    65,    -1,   116,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    -1,    42,    43,    44,
      45,    46,    47,    -1,    49,    50,    51,    52,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    60,    -1,    -1,    63,    64,
      65,    -1,   116,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    -1,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    51,    52,    -1,    -1,    -1,
      56,    -1,    -1,    -1,    60,    -1,    -1,    63,    64,    65,
      -1,   116,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    -1,    42,    43,    44,    45,    46,
      47,    -1,    49,    50,    51,    52,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    60,    -1,    -1,    63,    64,    65,    -1,
     116,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    -1,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    63,    64,    65,    -1,   116,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    90,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    51,    52,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    63,    64,    65,    -1,   116,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    -1,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    51,    52,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      60,    -1,    -1,    63,    64,    65,    -1,   116,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      -1,    42,    43,    44,    45,    46,    47,    -1,    49,    50,
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
      54,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    63,
      64,    65,    -1,   116,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    -1,    42,    43,    44,
      45,    46,    47,    -1,    49,    50,    51,    52,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    63,    64,
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
      50,    51,    52,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      60,    -1,    -1,    63,    64,    65,    -1,   116,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      -1,    42,    43,    44,    45,    46,    47,    -1,    49,    50,
      51,    52,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,
      -1,    -1,    63,    64,    65,    -1,   116,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    -1,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,    -1,
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
      -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    63,    64,
      65,    -1,   116,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    -1,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    63,    64,    65,
      -1,   116,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    63,    64,    65,    -1,    -1,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    -1,    87,    88
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
     109,   110,   111,   112,   113,   114,   122,   123,   126,   127,
     131,   132,   139,   142,   143,   144,   145,   146,   147,   148,
     149,   152,   153,   157,   158,    36,    36,    53,   150,   150,
      57,    57,    53,     7,    34,    57,    58,   147,   152,    53,
      58,   126,   138,    53,    53,    53,   150,    53,    53,    36,
      53,    48,    48,    66,    67,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,   115,   151,    53,    89,   147,
     147,   147,   147,   147,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    57,    42,    43,    44,
      45,    46,    47,    49,    50,    51,    52,    60,    63,    64,
      65,    68,    69,    81,    82,    83,    84,    85,    86,    87,
      88,   116,    48,   151,    53,    89,   147,    53,    53,   147,
     147,   159,    57,   147,   125,    14,    35,    57,   147,    35,
      35,    53,   147,   147,    58,   147,   147,    58,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     163,    58,   147,   154,   155,   156,    36,    54,   159,   159,
     159,    54,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   147,   147,   147,   147,   147,   147,    36,   147,   147,
     147,   147,   147,   150,   150,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,    58,   147,    58,   147,    35,
     128,   129,   130,    36,    54,   115,   134,   147,   134,    54,
      55,    59,    54,    59,   126,    53,    23,    57,   147,    57,
      23,    23,   147,    54,    54,   124,   127,    54,    55,    55,
      57,   159,    55,   118,   159,    55,    54,    53,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      53,   115,   159,    56,   159,    48,   116,    54,    55,    53,
     134,    56,   133,   133,   138,   147,    57,   138,   147,    91,
     147,    54,   147,    57,    57,   147,    91,   147,   147,   133,
      58,    58,    59,   127,    39,   147,    59,   147,    48,   151,
      59,   154,   156,   156,   163,    59,    58,   147,    59,   147,
      48,    58,   130,   128,   118,    36,    55,   135,   135,     8,
      54,   147,    90,   138,    54,    54,   147,    54,   147,    57,
     147,    54,    90,    54,    54,    26,   140,   140,    57,    54,
      57,    58,   147,    54,    54,   118,    56,   159,   147,   125,
      54,   133,   159,    54,    54,   138,    54,    90,   147,   138,
     138,    54,   138,    54,    54,   147,    54,    90,   138,   147,
     138,    58,   141,   147,    59,    59,   159,    58,   147,    59,
      59,    58,   135,    58,    58,   138,   147,    54,    92,   138,
     138,   138,    54,   138,   147,    54,    92,    24,    36,    37,
     160,   161,   162,    28,    56,    59,   159,   125,    54,   132,
     136,   137,   161,   136,    54,    92,   138,   147,   138,    54,
      92,   138,   147,    48,    48,   115,    36,    59,   162,   147,
     125,    59,    59,    58,    57,    59,   132,   137,    59,   138,
     147,    54,   138,   147,    54,   147,    58,   147,   163,    48,
     115,    57,    19,   140,   136,    57,    54,   138,    54,   138,
      57,   159,    57,   118,    58,   147,   163,    56,    59,   138,
     138,    59,    48,   159,    57,   118,   125,    57,    58,   147,
      59,    48,   159,    57,    57,   147,    59,    57,    57
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   119,   120,   121,   121,   122,   122,   122,   123,   124,
     124,   125,   125,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   127,   127,
     128,   128,   129,   129,   130,   130,   130,   130,   131,   132,
     132,   132,   132,   132,   132,   133,   133,   134,   134,   135,
     135,   136,   136,   136,   136,   137,   137,   138,   138,   139,
     139,   140,   140,   140,   141,   141,   142,   142,   143,   143,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   145,   145,   145,   145,   145,   145,   145,
     146,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   148,   148,   149,   149,   150,   150,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   153,   153,   153,   154,   154,   155,
     155,   156,   156,   157,   157,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   159,   159,
     160,   160,   161,   161,   162,   162,   162,   162,   162,   162,
     162,   162,   163,   163
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
       3,     2,     2,     1,     5,     9,     7,     7,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     3,     6,     3,     3,     1,     3,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     3,     5,     6,     8,     2,
       5,     2,     3,     5,     4,     6,     6,     1,     3,     1,
       3,     0,     1,     4,     6,     4,     4,     4,     3,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     1,     3,
       0,     1,     1,     2,     4,     6,     5,     7,     4,     7,
       9,     8,     1,     3
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
#line 2816 "CMDgram.cpp"
    break;

  case 3: /* decl_list: %empty  */
#line 222 "CMDgram.y"
      { (yyval.stmt) = nil; }
#line 2822 "CMDgram.cpp"
    break;

  case 4: /* decl_list: decl_list decl  */
#line 224 "CMDgram.y"
      { if(!Script::gStatementList) { Script::gStatementList = (yyvsp[0].stmt); } else { Script::gStatementList->append((yyvsp[0].stmt)); } }
#line 2828 "CMDgram.cpp"
    break;

  case 5: /* decl: stmt  */
#line 229 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2834 "CMDgram.cpp"
    break;

  case 6: /* decl: fn_decl_stmt  */
#line 231 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2840 "CMDgram.cpp"
    break;

  case 7: /* decl: package_decl  */
#line 233 "CMDgram.y"
     { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2846 "CMDgram.cpp"
    break;

  case 8: /* package_decl: rwPACKAGE IDENT '{' fn_decl_list '}' ';'  */
#line 238 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-2].stmt); for(StmtNode *walk = ((yyvsp[-2].stmt));walk;walk = walk->getNext() ) walk->setPackage((yyvsp[-4].s).value); }
#line 2852 "CMDgram.cpp"
    break;

  case 9: /* fn_decl_list: fn_decl_stmt  */
#line 243 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2858 "CMDgram.cpp"
    break;

  case 10: /* fn_decl_list: fn_decl_list fn_decl_stmt  */
#line 245 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-1].stmt); ((yyvsp[-1].stmt))->append((yyvsp[0].stmt));  }
#line 2864 "CMDgram.cpp"
    break;

  case 11: /* statement_list: %empty  */
#line 250 "CMDgram.y"
      { (yyval.stmt) = nil; }
#line 2870 "CMDgram.cpp"
    break;

  case 12: /* statement_list: statement_list stmt  */
#line 252 "CMDgram.y"
      { if(!(yyvsp[-1].stmt)) { (yyval.stmt) = (yyvsp[0].stmt); } else { ((yyvsp[-1].stmt))->append((yyvsp[0].stmt)); (yyval.stmt) = (yyvsp[-1].stmt); } }
#line 2876 "CMDgram.cpp"
    break;

  case 19: /* stmt: rwBREAK ';'  */
#line 263 "CMDgram.y"
      { (yyval.stmt) = BreakStmtNode::alloc( (yyvsp[-1].i).lineNumber ); }
#line 2882 "CMDgram.cpp"
    break;

  case 20: /* stmt: rwCONTINUE ';'  */
#line 265 "CMDgram.y"
      { (yyval.stmt) = ContinueStmtNode::alloc( (yyvsp[-1].i).lineNumber ); }
#line 2888 "CMDgram.cpp"
    break;

  case 21: /* stmt: rwRETURN ';'  */
#line 267 "CMDgram.y"
      { (yyval.stmt) = ReturnStmtNode::alloc( (yyvsp[-1].i).lineNumber, NULL ); }
#line 2894 "CMDgram.cpp"
    break;

  case 22: /* stmt: rwRETURN expr ';'  */
#line 269 "CMDgram.y"
      { (yyval.stmt) = ReturnStmtNode::alloc( (yyvsp[-2].i).lineNumber, (yyvsp[-1].expr) ); }
#line 2900 "CMDgram.cpp"
    break;

  case 23: /* stmt: rwRETURN '{' expr_list '}' ';'  */
#line 272 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-4].i).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-2].expr);
         (yyval.stmt) = ReturnStmtNode::alloc( (yyvsp[-4].i).lineNumber, vecNode );
      }
#line 2910 "CMDgram.cpp"
    break;

  case 24: /* stmt: expression_stmt ';'  */
#line 279 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-1].stmt); }
#line 2916 "CMDgram.cpp"
    break;

  case 25: /* stmt: TTAG '=' expr ';'  */
#line 281 "CMDgram.y"
      { (yyval.stmt) = TTagSetStmtNode::alloc( (yyvsp[-3].s).lineNumber, (yyvsp[-3].s).value, (yyvsp[-1].expr), NULL ); }
#line 2922 "CMDgram.cpp"
    break;

  case 26: /* stmt: TTAG '=' expr ',' expr ';'  */
#line 283 "CMDgram.y"
      { (yyval.stmt) = TTagSetStmtNode::alloc( (yyvsp[-5].s).lineNumber, (yyvsp[-5].s).value, (yyvsp[-3].expr), (yyvsp[-1].expr) ); }
#line 2928 "CMDgram.cpp"
    break;

  case 27: /* stmt: DOCBLOCK  */
#line 285 "CMDgram.y"
      { (yyval.stmt) = StrConstNode::alloc( (yyvsp[0].str).lineNumber, (yyvsp[0].str).value, false, true ); }
#line 2934 "CMDgram.cpp"
    break;

  case 28: /* fn_decl_stmt: rwDEFINE IDENT '(' var_list_decl ')' '{' statement_list '}'  */
#line 291 "CMDgram.y"
      { (yyval.stmt) = FunctionDeclStmtNode::alloc( (yyvsp[-7].i).lineNumber, (yyvsp[-6].s).value, NULL, (yyvsp[-4].var), (yyvsp[-1].stmt) ); }
#line 2940 "CMDgram.cpp"
    break;

  case 29: /* fn_decl_stmt: rwDEFINE IDENT opCOLONCOLON IDENT '(' var_list_decl ')' '{' statement_list '}'  */
#line 294 "CMDgram.y"
      { (yyval.stmt) = FunctionDeclStmtNode::alloc( (yyvsp[-9].i).lineNumber, (yyvsp[-6].s).value, (yyvsp[-8].s).value, (yyvsp[-4].var), (yyvsp[-1].stmt) ); }
#line 2946 "CMDgram.cpp"
    break;

  case 30: /* var_list_decl: %empty  */
#line 299 "CMDgram.y"
      { (yyval.var) = NULL; }
#line 2952 "CMDgram.cpp"
    break;

  case 31: /* var_list_decl: var_list  */
#line 301 "CMDgram.y"
      { (yyval.var) = (yyvsp[0].var); }
#line 2958 "CMDgram.cpp"
    break;

  case 32: /* var_list: param  */
#line 306 "CMDgram.y"
      { (yyval.var) = (yyvsp[0].var); }
#line 2964 "CMDgram.cpp"
    break;

  case 33: /* var_list: var_list ',' param  */
#line 308 "CMDgram.y"
      { (yyval.var) = (yyvsp[-2].var); ((StmtNode*)((yyvsp[-2].var)))->append((StmtNode*)(yyvsp[0].var) ); }
#line 2970 "CMDgram.cpp"
    break;

  case 34: /* param: VAR  */
#line 325 "CMDgram.y"
      { (yyval.var) = VarNode::allocParam((yyvsp[0].s).lineNumber, (yyvsp[0].s).value, NULL); }
#line 2976 "CMDgram.cpp"
    break;

  case 35: /* param: VAR '?'  */
#line 327 "CMDgram.y"
      { (yyval.var) = VarNode::allocParam((yyvsp[-1].s).lineNumber, (yyvsp[-1].s).value, NULL); }
#line 2982 "CMDgram.cpp"
    break;

  case 36: /* param: VAR '=' expr  */
#line 329 "CMDgram.y"
      { (yyval.var) = VarNode::allocParam((yyvsp[-2].s).lineNumber, (yyvsp[-2].s).value, (yyvsp[0].expr)); }
#line 2988 "CMDgram.cpp"
    break;

  case 37: /* param: VAR '?' '=' expr  */
#line 331 "CMDgram.y"
      { (yyval.var) = VarNode::allocParam((yyvsp[-3].s).lineNumber, (yyvsp[-3].s).value, (yyvsp[0].expr)); }
#line 2994 "CMDgram.cpp"
    break;

  case 38: /* datablock_decl: rwDATABLOCK class_name_expr '(' expr parent_block ')' '{' slot_assign_list_opt '}' ';'  */
#line 336 "CMDgram.y"
      { (yyval.stmt) = ObjectDeclNode::alloc( (yyvsp[-9].i).lineNumber, (yyvsp[-8].expr), (yyvsp[-6].expr), NULL, (yyvsp[-5].s).value, (yyvsp[-2].slist), NULL, true, false, false); }
#line 3000 "CMDgram.cpp"
    break;

  case 39: /* object_decl: rwDECLARE class_name_expr '(' object_name parent_block object_args ')' '{' object_declare_block '}'  */
#line 341 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-9].i).lineNumber, (yyvsp[-8].expr), (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-5].s).value, (yyvsp[-1].odcl).slots, (yyvsp[-1].odcl).decls, false, false, false); }
#line 3006 "CMDgram.cpp"
    break;

  case 40: /* object_decl: rwDECLARE class_name_expr '(' object_name parent_block object_args ')'  */
#line 343 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-6].i).lineNumber, (yyvsp[-5].expr), (yyvsp[-3].expr), (yyvsp[-1].expr), (yyvsp[-2].s).value, NULL, NULL, false, false, false); }
#line 3012 "CMDgram.cpp"
    break;

  case 41: /* object_decl: rwDECLARE class_name_expr '(' '[' object_name ']' parent_block object_args ')' '{' object_declare_block '}'  */
#line 345 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-11].i).lineNumber, (yyvsp[-10].expr), (yyvsp[-7].expr), (yyvsp[-4].expr), (yyvsp[-5].s).value, (yyvsp[-1].odcl).slots, (yyvsp[-1].odcl).decls, false, true, false); }
#line 3018 "CMDgram.cpp"
    break;

  case 42: /* object_decl: rwDECLARE class_name_expr '(' '[' object_name ']' parent_block object_args ')'  */
#line 347 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-8].i).lineNumber, (yyvsp[-7].expr), (yyvsp[-4].expr), (yyvsp[-1].expr), (yyvsp[-2].s).value, NULL, NULL, false, true, false); }
#line 3024 "CMDgram.cpp"
    break;

  case 43: /* object_decl: rwDECLARESINGLETON class_name_expr '(' object_name parent_block object_args ')' '{' object_declare_block '}'  */
#line 349 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-9].i).lineNumber, (yyvsp[-8].expr), (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-5].s).value, (yyvsp[-1].odcl).slots, (yyvsp[-1].odcl).decls, false, false, true); }
#line 3030 "CMDgram.cpp"
    break;

  case 44: /* object_decl: rwDECLARESINGLETON class_name_expr '(' object_name parent_block object_args ')'  */
#line 351 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-6].i).lineNumber, (yyvsp[-5].expr), (yyvsp[-3].expr), (yyvsp[-1].expr), (yyvsp[-2].s).value, NULL, NULL, false, false, true); }
#line 3036 "CMDgram.cpp"
    break;

  case 45: /* parent_block: %empty  */
#line 356 "CMDgram.y"
      { (yyval.s).value = NULL; }
#line 3042 "CMDgram.cpp"
    break;

  case 46: /* parent_block: ':' IDENT  */
#line 358 "CMDgram.y"
      { (yyval.s) = (yyvsp[0].s); }
#line 3048 "CMDgram.cpp"
    break;

  case 47: /* object_name: %empty  */
#line 363 "CMDgram.y"
      { (yyval.expr) = StrConstNode::alloc( CodeBlock::smCurrentParser->getCurrentLine(), "", false); }
#line 3054 "CMDgram.cpp"
    break;

  case 48: /* object_name: expr  */
#line 365 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3060 "CMDgram.cpp"
    break;

  case 49: /* object_args: %empty  */
#line 370 "CMDgram.y"
      { (yyval.expr) = NULL; }
#line 3066 "CMDgram.cpp"
    break;

  case 50: /* object_args: ',' expr_list  */
#line 372 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3072 "CMDgram.cpp"
    break;

  case 51: /* object_declare_block: %empty  */
#line 377 "CMDgram.y"
      { (yyval.odcl).slots = NULL; (yyval.odcl).decls = NULL; }
#line 3078 "CMDgram.cpp"
    break;

  case 52: /* object_declare_block: slot_assign_list  */
#line 379 "CMDgram.y"
      { (yyval.odcl).slots = (yyvsp[0].slist); (yyval.odcl).decls = NULL; }
#line 3084 "CMDgram.cpp"
    break;

  case 53: /* object_declare_block: object_decl_list  */
#line 381 "CMDgram.y"
      { (yyval.odcl).slots = NULL; (yyval.odcl).decls = (yyvsp[0].od); }
#line 3090 "CMDgram.cpp"
    break;

  case 54: /* object_declare_block: slot_assign_list object_decl_list  */
#line 383 "CMDgram.y"
      { (yyval.odcl).slots = (yyvsp[-1].slist); (yyval.odcl).decls = (yyvsp[0].od); }
#line 3096 "CMDgram.cpp"
    break;

  case 55: /* object_decl_list: object_decl ';'  */
#line 388 "CMDgram.y"
      { (yyval.od) = (yyvsp[-1].od); }
#line 3102 "CMDgram.cpp"
    break;

  case 56: /* object_decl_list: object_decl_list object_decl ';'  */
#line 390 "CMDgram.y"
      { (yyvsp[-2].od)->append((yyvsp[-1].od)); (yyval.od) = (yyvsp[-2].od); }
#line 3108 "CMDgram.cpp"
    break;

  case 57: /* stmt_block: '{' statement_list '}'  */
#line 395 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-1].stmt); }
#line 3114 "CMDgram.cpp"
    break;

  case 58: /* stmt_block: stmt  */
#line 397 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[0].stmt); }
#line 3120 "CMDgram.cpp"
    break;

  case 59: /* switch_stmt: rwSWITCH '(' expr ')' '{' case_block '}'  */
#line 402 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-1].ifnode); (yyvsp[-1].ifnode)->propagateSwitchExpr((yyvsp[-4].expr), false); }
#line 3126 "CMDgram.cpp"
    break;

  case 60: /* switch_stmt: rwSWITCHSTR '(' expr ')' '{' case_block '}'  */
#line 404 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-1].ifnode); (yyvsp[-1].ifnode)->propagateSwitchExpr((yyvsp[-4].expr), true); }
#line 3132 "CMDgram.cpp"
    break;

  case 61: /* case_block: rwCASE case_expr ':' statement_list  */
#line 412 "CMDgram.y"
      { (yyval.ifnode) = IfStmtNode::alloc( (yyvsp[-3].i).lineNumber, (yyvsp[-2].expr), (yyvsp[0].stmt), NULL, false); }
#line 3138 "CMDgram.cpp"
    break;

  case 62: /* case_block: rwCASE case_expr ':' statement_list rwDEFAULT ':' statement_list  */
#line 414 "CMDgram.y"
      { (yyval.ifnode) = IfStmtNode::alloc( (yyvsp[-6].i).lineNumber, (yyvsp[-5].expr), (yyvsp[-3].stmt), (yyvsp[0].stmt), false); }
#line 3144 "CMDgram.cpp"
    break;

  case 63: /* case_block: rwCASE case_expr ':' statement_list case_block  */
#line 416 "CMDgram.y"
      { (yyval.ifnode) = IfStmtNode::alloc( (yyvsp[-4].i).lineNumber, (yyvsp[-3].expr), (yyvsp[-1].stmt), (yyvsp[0].ifnode), true); }
#line 3150 "CMDgram.cpp"
    break;

  case 64: /* case_expr: expr  */
#line 421 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3156 "CMDgram.cpp"
    break;

  case 65: /* case_expr: case_expr rwCASEOR expr  */
#line 423 "CMDgram.y"
      { ((yyvsp[-2].expr))->append((yyvsp[0].expr)); (yyval.expr) = (yyvsp[-2].expr); }
#line 3162 "CMDgram.cpp"
    break;

  case 66: /* if_stmt: rwIF '(' expr ')' stmt_block  */
#line 428 "CMDgram.y"
      { (yyval.stmt) = IfStmtNode::alloc((yyvsp[-4].i).lineNumber, (yyvsp[-2].expr), (yyvsp[0].stmt), NULL, false); }
#line 3168 "CMDgram.cpp"
    break;

  case 67: /* if_stmt: rwIF '(' expr ')' stmt_block rwELSE stmt_block  */
#line 430 "CMDgram.y"
      { (yyval.stmt) = IfStmtNode::alloc((yyvsp[-6].i).lineNumber, (yyvsp[-4].expr), (yyvsp[-2].stmt), (yyvsp[0].stmt), false); }
#line 3174 "CMDgram.cpp"
    break;

  case 68: /* while_stmt: rwWHILE '(' expr ')' stmt_block  */
#line 435 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-4].i).lineNumber, nil, (yyvsp[-2].expr), nil, (yyvsp[0].stmt), false); }
#line 3180 "CMDgram.cpp"
    break;

  case 69: /* while_stmt: rwDO stmt_block rwWHILE '(' expr ')'  */
#line 437 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-3].i).lineNumber, nil, (yyvsp[-1].expr), nil, (yyvsp[-4].stmt), true); }
#line 3186 "CMDgram.cpp"
    break;

  case 70: /* for_stmt: rwFOR '(' expr ';' expr ';' expr ')' stmt_block  */
#line 442 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-8].i).lineNumber, (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), false); }
#line 3192 "CMDgram.cpp"
    break;

  case 71: /* for_stmt: rwFOR '(' expr ';' expr ';' ')' stmt_block  */
#line 444 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-7].i).lineNumber, (yyvsp[-5].expr), (yyvsp[-3].expr), NULL, (yyvsp[0].stmt), false); }
#line 3198 "CMDgram.cpp"
    break;

  case 72: /* for_stmt: rwFOR '(' expr ';' ';' expr ')' stmt_block  */
#line 446 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-7].i).lineNumber, (yyvsp[-5].expr), NULL, (yyvsp[-2].expr), (yyvsp[0].stmt), false); }
#line 3204 "CMDgram.cpp"
    break;

  case 73: /* for_stmt: rwFOR '(' expr ';' ';' ')' stmt_block  */
#line 448 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-6].i).lineNumber, (yyvsp[-4].expr), NULL, NULL, (yyvsp[0].stmt), false); }
#line 3210 "CMDgram.cpp"
    break;

  case 74: /* for_stmt: rwFOR '(' ';' expr ';' expr ')' stmt_block  */
#line 450 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-7].i).lineNumber, NULL, (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), false); }
#line 3216 "CMDgram.cpp"
    break;

  case 75: /* for_stmt: rwFOR '(' ';' expr ';' ')' stmt_block  */
#line 452 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-6].i).lineNumber, NULL, (yyvsp[-3].expr), NULL, (yyvsp[0].stmt), false); }
#line 3222 "CMDgram.cpp"
    break;

  case 76: /* for_stmt: rwFOR '(' ';' ';' expr ')' stmt_block  */
#line 454 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-6].i).lineNumber, NULL, NULL, (yyvsp[-2].expr), (yyvsp[0].stmt), false); }
#line 3228 "CMDgram.cpp"
    break;

  case 77: /* for_stmt: rwFOR '(' ';' ';' ')' stmt_block  */
#line 456 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-5].i).lineNumber, NULL, NULL, NULL, (yyvsp[0].stmt), false); }
#line 3234 "CMDgram.cpp"
    break;

  case 78: /* for_stmt: rwFOR '(' VAR rwIN expr opDOTDOT expr ')' stmt_block  */
#line 460 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-8].i).lineNumber, (yyvsp[-6].s).value, (yyvsp[-4].expr), (yyvsp[-2].expr), NULL, (yyvsp[0].stmt), 2 ); }
#line 3240 "CMDgram.cpp"
    break;

  case 79: /* for_stmt: rwFOR '(' VAR rwIN rwRANGE expr opDOTDOT expr ')' stmt_block  */
#line 463 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-9].i).lineNumber, (yyvsp[-7].s).value, (yyvsp[-4].expr), (yyvsp[-2].expr), NULL, (yyvsp[0].stmt), 102 ); }
#line 3246 "CMDgram.cpp"
    break;

  case 80: /* for_stmt: rwFOR '(' VAR rwIN expr opDOTDOT expr rwSTEP expr ')' stmt_block  */
#line 466 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-10].i).lineNumber, (yyvsp[-8].s).value, (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), 3 ); }
#line 3252 "CMDgram.cpp"
    break;

  case 81: /* for_stmt: rwFOR '(' VAR rwIN rwRANGE expr opDOTDOT expr rwSTEP expr ')' stmt_block  */
#line 469 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-11].i).lineNumber, (yyvsp[-9].s).value, (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), 103 ); }
#line 3258 "CMDgram.cpp"
    break;

  case 82: /* for_stmt: rwFOR '(' VAR rwIN rwRANGE expr ')' stmt_block  */
#line 472 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-7].i).lineNumber, (yyvsp[-5].s).value, (yyvsp[-2].expr), NULL, NULL, (yyvsp[0].stmt), 104 ); }
#line 3264 "CMDgram.cpp"
    break;

  case 83: /* foreach_stmt: rwFOREACH '(' VAR rwIN expr ')' stmt_block  */
#line 483 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc( (yyvsp[-6].i).lineNumber, (yyvsp[-4].s).value, (yyvsp[-2].expr), NULL,NULL, (yyvsp[0].stmt), 0 ); }
#line 3270 "CMDgram.cpp"
    break;

  case 84: /* foreach_stmt: rwFOREACHSTR '(' VAR rwIN expr ')' stmt_block  */
#line 486 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc( (yyvsp[-6].i).lineNumber, (yyvsp[-4].s).value, (yyvsp[-2].expr), NULL,NULL, (yyvsp[0].stmt), 1 ); }
#line 3276 "CMDgram.cpp"
    break;

  case 85: /* foreach_stmt: rwFOREACH '(' VAR rwIN expr opDOTDOT expr ')' stmt_block  */
#line 489 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-8].i).lineNumber, (yyvsp[-6].s).value, (yyvsp[-4].expr), (yyvsp[-2].expr), NULL, (yyvsp[0].stmt), 2 ); }
#line 3282 "CMDgram.cpp"
    break;

  case 86: /* foreach_stmt: rwFOREACH '(' VAR rwIN rwRANGE expr opDOTDOT expr ')' stmt_block  */
#line 492 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-9].i).lineNumber, (yyvsp[-7].s).value, (yyvsp[-4].expr), (yyvsp[-2].expr), NULL, (yyvsp[0].stmt), 102 ); }
#line 3288 "CMDgram.cpp"
    break;

  case 87: /* foreach_stmt: rwFOREACH '(' VAR rwIN expr opDOTDOT expr rwSTEP expr ')' stmt_block  */
#line 495 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-10].i).lineNumber, (yyvsp[-8].s).value, (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), 3 ); }
#line 3294 "CMDgram.cpp"
    break;

  case 88: /* foreach_stmt: rwFOREACH '(' VAR rwIN rwRANGE expr opDOTDOT expr rwSTEP expr ')' stmt_block  */
#line 498 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-11].i).lineNumber, (yyvsp[-9].s).value, (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), 103 ); }
#line 3300 "CMDgram.cpp"
    break;

  case 89: /* foreach_stmt: rwFOREACH '(' VAR rwIN rwRANGE expr ')' stmt_block  */
#line 501 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-7].i).lineNumber, (yyvsp[-5].s).value, (yyvsp[-2].expr), NULL, NULL, (yyvsp[0].stmt), 104 ); }
#line 3306 "CMDgram.cpp"
    break;

  case 90: /* expression_stmt: stmt_expr  */
#line 506 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[0].expr); }
#line 3312 "CMDgram.cpp"
    break;

  case 91: /* expr: stmt_expr  */
#line 511 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3318 "CMDgram.cpp"
    break;

  case 92: /* expr: '(' expr ')'  */
#line 513 "CMDgram.y"
      { (yyval.expr) = (yyvsp[-1].expr); }
#line 3324 "CMDgram.cpp"
    break;

  case 93: /* expr: expr '^' expr  */
#line 515 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3330 "CMDgram.cpp"
    break;

  case 94: /* expr: expr '%' expr  */
#line 517 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3336 "CMDgram.cpp"
    break;

  case 95: /* expr: expr '&' expr  */
#line 519 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3342 "CMDgram.cpp"
    break;

  case 96: /* expr: expr '|' expr  */
#line 521 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3348 "CMDgram.cpp"
    break;

  case 97: /* expr: expr '+' expr  */
#line 523 "CMDgram.y"
      { (yyval.expr) = FloatBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3354 "CMDgram.cpp"
    break;

  case 98: /* expr: expr '-' expr  */
#line 525 "CMDgram.y"
      { (yyval.expr) = FloatBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3360 "CMDgram.cpp"
    break;

  case 99: /* expr: expr '*' expr  */
#line 527 "CMDgram.y"
      { (yyval.expr) = FloatBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3366 "CMDgram.cpp"
    break;

  case 100: /* expr: expr '/' expr  */
#line 529 "CMDgram.y"
      { (yyval.expr) = FloatBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3372 "CMDgram.cpp"
    break;

  case 101: /* expr: '-' expr  */
#line 531 "CMDgram.y"
      { (yyval.expr) = FloatUnaryExprNode::alloc( (yyvsp[-1].i).lineNumber, (yyvsp[-1].i).value, (yyvsp[0].expr)); }
#line 3378 "CMDgram.cpp"
    break;

  case 102: /* expr: '*' expr  */
#line 533 "CMDgram.y"
      { (yyval.expr) = TTagDerefNode::alloc( (yyvsp[-1].i).lineNumber, (yyvsp[0].expr) ); }
#line 3384 "CMDgram.cpp"
    break;

  case 103: /* expr: TTAG  */
#line 535 "CMDgram.y"
      { (yyval.expr) = TTagExprNode::alloc( (yyvsp[0].s).lineNumber, (yyvsp[0].s).value ); }
#line 3390 "CMDgram.cpp"
    break;

  case 104: /* expr: expr '?' expr ':' expr  */
#line 537 "CMDgram.y"
      { (yyval.expr) = ConditionalExprNode::alloc( (yyvsp[-4].expr)->dbgLineNumber, (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3396 "CMDgram.cpp"
    break;

  case 105: /* expr: expr '?' '{' expr_list '}' ':' '{' expr_list '}'  */
#line 539 "CMDgram.y"
   {
//     ElfScript 0.7g
         VectorConstructorNode* trueNode = VectorConstructorNode::alloc((yyvsp[-8].expr)->dbgLineNumber);
         trueNode->argList = (ExprNode*)(yyvsp[-5].expr);
         VectorConstructorNode* falseNode = VectorConstructorNode::alloc((yyvsp[-8].expr)->dbgLineNumber);
         falseNode->argList = (ExprNode*)(yyvsp[-1].expr);
         { (yyval.expr) = ConditionalExprNode::alloc( (yyvsp[-8].expr)->dbgLineNumber, (yyvsp[-8].expr), trueNode, falseNode); }
   }
#line 3409 "CMDgram.cpp"
    break;

  case 106: /* expr: expr '?' expr ':' '{' expr_list '}'  */
#line 548 "CMDgram.y"
   {
//     ElfScript 0.7g
         VectorConstructorNode* falseNode = VectorConstructorNode::alloc((yyvsp[-6].expr)->dbgLineNumber);
         falseNode->argList = (ExprNode*)(yyvsp[-1].expr);
         { (yyval.expr) = ConditionalExprNode::alloc( (yyvsp[-6].expr)->dbgLineNumber, (yyvsp[-6].expr), (yyvsp[-4].expr), falseNode); }
   }
#line 3420 "CMDgram.cpp"
    break;

  case 107: /* expr: expr '?' '{' expr_list '}' ':' expr  */
#line 555 "CMDgram.y"
   {
//     ElfScript 0.7g
         VectorConstructorNode* trueNode = VectorConstructorNode::alloc((yyvsp[-6].expr)->dbgLineNumber);
         trueNode->argList = (ExprNode*)(yyvsp[-3].expr);
         { (yyval.expr) = ConditionalExprNode::alloc( (yyvsp[-6].expr)->dbgLineNumber, (yyvsp[-6].expr), trueNode, (yyvsp[0].expr)); }
   }
#line 3431 "CMDgram.cpp"
    break;

  case 108: /* expr: expr '<' expr  */
#line 562 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3437 "CMDgram.cpp"
    break;

  case 109: /* expr: expr '>' expr  */
#line 564 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3443 "CMDgram.cpp"
    break;

  case 110: /* expr: expr opGE expr  */
#line 566 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3449 "CMDgram.cpp"
    break;

  case 111: /* expr: expr opLE expr  */
#line 568 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3455 "CMDgram.cpp"
    break;

  case 112: /* expr: expr opEQ expr  */
#line 570 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3461 "CMDgram.cpp"
    break;

  case 113: /* expr: expr opNE expr  */
#line 572 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3467 "CMDgram.cpp"
    break;

  case 114: /* expr: expr opOR expr  */
#line 574 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3473 "CMDgram.cpp"
    break;

  case 115: /* expr: expr opSHL expr  */
#line 576 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3479 "CMDgram.cpp"
    break;

  case 116: /* expr: expr opSHR expr  */
#line 578 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3485 "CMDgram.cpp"
    break;

  case 117: /* expr: expr opAND expr  */
#line 580 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3491 "CMDgram.cpp"
    break;

  case 118: /* expr: expr opSTREQ expr  */
#line 582 "CMDgram.y"
      { (yyval.expr) = StreqExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-2].expr), (yyvsp[0].expr), true); }
#line 3497 "CMDgram.cpp"
    break;

  case 119: /* expr: expr opSTRNE expr  */
#line 584 "CMDgram.y"
      { (yyval.expr) = StreqExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-2].expr), (yyvsp[0].expr), false); }
#line 3503 "CMDgram.cpp"
    break;

  case 120: /* expr: expr '@' expr  */
#line 592 "CMDgram.y"
      { (yyval.expr) = StrcatExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-2].expr), (yyvsp[0].expr), (yyvsp[-1].i).value); }
#line 3509 "CMDgram.cpp"
    break;

  case 121: /* expr: '!' expr  */
#line 594 "CMDgram.y"
      { (yyval.expr) = IntUnaryExprNode::alloc((yyvsp[-1].i).lineNumber, (yyvsp[-1].i).value, (yyvsp[0].expr)); }
#line 3515 "CMDgram.cpp"
    break;

  case 122: /* expr: '~' expr  */
#line 596 "CMDgram.y"
      { (yyval.expr) = IntUnaryExprNode::alloc((yyvsp[-1].i).lineNumber, (yyvsp[-1].i).value, (yyvsp[0].expr)); }
#line 3521 "CMDgram.cpp"
    break;

  case 123: /* expr: TAGATOM  */
#line 598 "CMDgram.y"
      { (yyval.expr) = StrConstNode::alloc( (yyvsp[0].str).lineNumber, (yyvsp[0].str).value, true); }
#line 3527 "CMDgram.cpp"
    break;

  case 124: /* expr: FLTCONST  */
#line 600 "CMDgram.y"
      { (yyval.expr) = FloatNode::alloc( (yyvsp[0].f).lineNumber, (yyvsp[0].f).value ); }
#line 3533 "CMDgram.cpp"
    break;

  case 125: /* expr: INTCONST  */
#line 602 "CMDgram.y"
      { (yyval.expr) = IntNode::alloc( (yyvsp[0].i).lineNumber, (yyvsp[0].i).value ); }
#line 3539 "CMDgram.cpp"
    break;

  case 126: /* expr: rwBREAK  */
#line 604 "CMDgram.y"
      { (yyval.expr) = ConstantNode::alloc( (yyvsp[0].i).lineNumber, StringTable->insert("break")); }
#line 3545 "CMDgram.cpp"
    break;

  case 127: /* expr: slot_acc  */
#line 606 "CMDgram.y"
      { (yyval.expr) = SlotAccessNode::alloc( (yyvsp[0].slot).lineNumber, (yyvsp[0].slot).object, (yyvsp[0].slot).array, (yyvsp[0].slot).slotName ); }
#line 3551 "CMDgram.cpp"
    break;

  case 128: /* expr: intslot_acc  */
#line 608 "CMDgram.y"
      { (yyval.expr) = InternalSlotAccessNode::alloc( (yyvsp[0].intslot).lineNumber, (yyvsp[0].intslot).object, (yyvsp[0].intslot).slotExpr, (yyvsp[0].intslot).recurse); }
#line 3557 "CMDgram.cpp"
    break;

  case 129: /* expr: IDENT  */
#line 610 "CMDgram.y"
      { (yyval.expr) = ConstantNode::alloc( (yyvsp[0].s).lineNumber, (yyvsp[0].s).value ); }
#line 3563 "CMDgram.cpp"
    break;

  case 130: /* expr: STRATOM  */
#line 612 "CMDgram.y"
      { (yyval.expr) = StrConstNode::alloc( (yyvsp[0].str).lineNumber, (yyvsp[0].str).value, false); }
#line 3569 "CMDgram.cpp"
    break;

  case 131: /* expr: VAR  */
#line 614 "CMDgram.y"
      { (yyval.expr) = (ExprNode*)VarNode::alloc( (yyvsp[0].s).lineNumber, (yyvsp[0].s).value, NULL); }
#line 3575 "CMDgram.cpp"
    break;

  case 132: /* expr: VAR '[' aidx_expr ']'  */
#line 616 "CMDgram.y"
      { (yyval.expr) = (ExprNode*)VarNode::alloc( (yyvsp[-3].s).lineNumber, (yyvsp[-3].s).value, (yyvsp[-1].expr) ); }
#line 3581 "CMDgram.cpp"
    break;

  case 133: /* slot_acc: expr '.' IDENT  */
#line 622 "CMDgram.y"
      { (yyval.slot).lineNumber = (yyvsp[-2].expr)->dbgLineNumber; (yyval.slot).object = (yyvsp[-2].expr); (yyval.slot).slotName = (yyvsp[0].s).value; (yyval.slot).array = NULL; }
#line 3587 "CMDgram.cpp"
    break;

  case 134: /* slot_acc: expr '.' IDENT '[' aidx_expr ']'  */
#line 624 "CMDgram.y"
      { (yyval.slot).lineNumber = (yyvsp[-5].expr)->dbgLineNumber; (yyval.slot).object = (yyvsp[-5].expr); (yyval.slot).slotName = (yyvsp[-3].s).value; (yyval.slot).array = (yyvsp[-1].expr); }
#line 3593 "CMDgram.cpp"
    break;

  case 135: /* intslot_acc: expr opINTNAME class_name_expr  */
#line 629 "CMDgram.y"
      { (yyval.intslot).lineNumber = (yyvsp[-2].expr)->dbgLineNumber; (yyval.intslot).object = (yyvsp[-2].expr); (yyval.intslot).slotExpr = (yyvsp[0].expr); (yyval.intslot).recurse = false; }
#line 3599 "CMDgram.cpp"
    break;

  case 136: /* intslot_acc: expr opINTNAMER class_name_expr  */
#line 631 "CMDgram.y"
      { (yyval.intslot).lineNumber = (yyvsp[-2].expr)->dbgLineNumber; (yyval.intslot).object = (yyvsp[-2].expr); (yyval.intslot).slotExpr = (yyvsp[0].expr); (yyval.intslot).recurse = true; }
#line 3605 "CMDgram.cpp"
    break;

  case 137: /* class_name_expr: IDENT  */
#line 636 "CMDgram.y"
      { (yyval.expr) = ConstantNode::alloc( (yyvsp[0].s).lineNumber, (yyvsp[0].s).value ); }
#line 3611 "CMDgram.cpp"
    break;

  case 138: /* class_name_expr: '(' expr ')'  */
#line 638 "CMDgram.y"
      { (yyval.expr) = (yyvsp[-1].expr); }
#line 3617 "CMDgram.cpp"
    break;

  case 139: /* assign_op_struct: opPLUSPLUS  */
#line 643 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[0].i).lineNumber; (yyval.asn).token = opPLUSPLUS; (yyval.asn).expr = FloatNode::alloc( (yyvsp[0].i).lineNumber, 1 ); }
#line 3623 "CMDgram.cpp"
    break;

  case 140: /* assign_op_struct: opMINUSMINUS  */
#line 645 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[0].i).lineNumber; (yyval.asn).token = opMINUSMINUS; (yyval.asn).expr = FloatNode::alloc( (yyvsp[0].i).lineNumber, 1 ); }
#line 3629 "CMDgram.cpp"
    break;

  case 141: /* assign_op_struct: opPLASN expr  */
#line 647 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '+'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3635 "CMDgram.cpp"
    break;

  case 142: /* assign_op_struct: opMIASN expr  */
#line 649 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '-'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3641 "CMDgram.cpp"
    break;

  case 143: /* assign_op_struct: opMLASN expr  */
#line 651 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '*'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3647 "CMDgram.cpp"
    break;

  case 144: /* assign_op_struct: opDVASN expr  */
#line 653 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '/'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3653 "CMDgram.cpp"
    break;

  case 145: /* assign_op_struct: opMODASN expr  */
#line 655 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '%'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3659 "CMDgram.cpp"
    break;

  case 146: /* assign_op_struct: opANDASN expr  */
#line 657 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '&'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3665 "CMDgram.cpp"
    break;

  case 147: /* assign_op_struct: opXORASN expr  */
#line 659 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '^'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3671 "CMDgram.cpp"
    break;

  case 148: /* assign_op_struct: opORASN expr  */
#line 661 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '|'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3677 "CMDgram.cpp"
    break;

  case 149: /* assign_op_struct: opSLASN expr  */
#line 663 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = opSHL; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3683 "CMDgram.cpp"
    break;

  case 150: /* assign_op_struct: opSRASN expr  */
#line 665 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = opSHR; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3689 "CMDgram.cpp"
    break;

  case 151: /* stmt_expr: funcall_expr  */
#line 671 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3695 "CMDgram.cpp"
    break;

  case 152: /* stmt_expr: assert_expr  */
#line 673 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3701 "CMDgram.cpp"
    break;

  case 153: /* stmt_expr: inline_command_expr  */
#line 675 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3707 "CMDgram.cpp"
    break;

  case 154: /* stmt_expr: object_decl  */
#line 677 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].od); }
#line 3713 "CMDgram.cpp"
    break;

  case 155: /* stmt_expr: VAR '=' expr  */
#line 679 "CMDgram.y"
      { (yyval.expr) = AssignExprNode::alloc( (yyvsp[-2].s).lineNumber, (yyvsp[-2].s).value, NULL, (yyvsp[0].expr)); }
#line 3719 "CMDgram.cpp"
    break;

  case 156: /* stmt_expr: VAR '=' '{' expr_list '}'  */
#line 683 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-4].s).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-1].expr);
         (yyval.expr) = AssignExprNode::alloc( (yyvsp[-4].s).lineNumber, (yyvsp[-4].s).value, NULL, vecNode);
      }
#line 3729 "CMDgram.cpp"
    break;

  case 157: /* stmt_expr: VAR '[' aidx_expr ']' '=' expr  */
#line 691 "CMDgram.y"
      { (yyval.expr) = AssignExprNode::alloc( (yyvsp[-5].s).lineNumber, (yyvsp[-5].s).value, (yyvsp[-3].expr), (yyvsp[0].expr)); }
#line 3735 "CMDgram.cpp"
    break;

  case 158: /* stmt_expr: VAR '[' aidx_expr ']' '=' '{' expr_list '}'  */
#line 695 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-7].s).lineNumber);
          vecNode->argList = (ExprNode*)(yyvsp[-1].expr);
         (yyval.expr) = AssignExprNode::alloc( (yyvsp[-7].s).lineNumber, (yyvsp[-7].s).value, (yyvsp[-5].expr), vecNode);
      }
#line 3745 "CMDgram.cpp"
    break;

  case 159: /* stmt_expr: VAR assign_op_struct  */
#line 703 "CMDgram.y"
      { (yyval.expr) = AssignOpExprNode::alloc( (yyvsp[-1].s).lineNumber, (yyvsp[-1].s).value, NULL, (yyvsp[0].asn).expr, (yyvsp[0].asn).token); }
#line 3751 "CMDgram.cpp"
    break;

  case 160: /* stmt_expr: VAR '[' aidx_expr ']' assign_op_struct  */
#line 705 "CMDgram.y"
      { (yyval.expr) = AssignOpExprNode::alloc( (yyvsp[-4].s).lineNumber, (yyvsp[-4].s).value, (yyvsp[-2].expr), (yyvsp[0].asn).expr, (yyvsp[0].asn).token); }
#line 3757 "CMDgram.cpp"
    break;

  case 161: /* stmt_expr: slot_acc assign_op_struct  */
#line 707 "CMDgram.y"
      { (yyval.expr) = SlotAssignOpNode::alloc( (yyvsp[-1].slot).lineNumber, (yyvsp[-1].slot).object, (yyvsp[-1].slot).slotName, (yyvsp[-1].slot).array, (yyvsp[0].asn).token, (yyvsp[0].asn).expr); }
#line 3763 "CMDgram.cpp"
    break;

  case 162: /* stmt_expr: slot_acc '=' expr  */
#line 709 "CMDgram.y"
      { (yyval.expr) = SlotAssignNode::alloc( (yyvsp[-2].slot).lineNumber, (yyvsp[-2].slot).object, (yyvsp[-2].slot).array, (yyvsp[-2].slot).slotName, (yyvsp[0].expr)); }
#line 3769 "CMDgram.cpp"
    break;

  case 163: /* stmt_expr: slot_acc '=' '{' expr_list '}'  */
#line 711 "CMDgram.y"
      { (yyval.expr) = SlotAssignNode::alloc( (yyvsp[-4].slot).lineNumber, (yyvsp[-4].slot).object, (yyvsp[-4].slot).array, (yyvsp[-4].slot).slotName, (yyvsp[-1].expr)); }
#line 3775 "CMDgram.cpp"
    break;

  case 164: /* funcall_expr: IDENT '(' func_arg_list_decl ')'  */
#line 743 "CMDgram.y"
      { (yyval.expr) = FuncCallExprNode::alloc( (yyvsp[-3].s).lineNumber, (yyvsp[-3].s).value, NULL, (yyvsp[-1].expr), false); }
#line 3781 "CMDgram.cpp"
    break;

  case 165: /* funcall_expr: IDENT opCOLONCOLON IDENT '(' func_arg_list_decl ')'  */
#line 746 "CMDgram.y"
      { (yyval.expr) = FuncCallExprNode::alloc( (yyvsp[-5].s).lineNumber, (yyvsp[-3].s).value, (yyvsp[-5].s).value, (yyvsp[-1].expr), false); }
#line 3787 "CMDgram.cpp"
    break;

  case 166: /* funcall_expr: expr '.' IDENT '(' func_arg_list_decl ')'  */
#line 749 "CMDgram.y"
      { (yyvsp[-5].expr)->append((yyvsp[-1].expr)); (yyval.expr) = FuncCallExprNode::alloc( (yyvsp[-5].expr)->dbgLineNumber, (yyvsp[-3].s).value, NULL, (yyvsp[-5].expr), true); }
#line 3793 "CMDgram.cpp"
    break;

  case 167: /* func_arg_item: expr  */
#line 755 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3799 "CMDgram.cpp"
    break;

  case 168: /* func_arg_item: '{' expr_list '}'  */
#line 757 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-2].i).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-1].expr);
//          for (ExprNode* expr = (ExprNode*)$2; expr; expr = (ExprNode*)(expr->next)) {
//             vecNode->elements.push_back(expr);
//          }
         (yyval.expr) = vecNode;
      }
#line 3812 "CMDgram.cpp"
    break;

  case 169: /* func_arg_list: func_arg_item  */
#line 769 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3818 "CMDgram.cpp"
    break;

  case 170: /* func_arg_list: func_arg_list ',' func_arg_item  */
#line 771 "CMDgram.y"
      { ((yyvsp[-2].expr))->append((yyvsp[0].expr)); (yyval.expr) = (yyvsp[-2].expr); }
#line 3824 "CMDgram.cpp"
    break;

  case 171: /* func_arg_list_decl: %empty  */
#line 776 "CMDgram.y"
      { (yyval.expr) = NULL; }
#line 3830 "CMDgram.cpp"
    break;

  case 172: /* func_arg_list_decl: func_arg_list  */
#line 778 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3836 "CMDgram.cpp"
    break;

  case 173: /* assert_expr: rwASSERT '(' expr ')'  */
#line 799 "CMDgram.y"
      { (yyval.expr) = AssertCallExprNode::alloc( (yyvsp[-3].i).lineNumber, (yyvsp[-1].expr), NULL ); }
#line 3842 "CMDgram.cpp"
    break;

  case 174: /* assert_expr: rwASSERT '(' expr ',' STRATOM ')'  */
#line 801 "CMDgram.y"
      { (yyval.expr) = AssertCallExprNode::alloc( (yyvsp[-5].i).lineNumber, (yyvsp[-3].expr), (yyvsp[-1].str).value ); }
#line 3848 "CMDgram.cpp"
    break;

  case 175: /* inline_command_expr: rwPRINT '(' expr_list ')'  */
#line 808 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::PRINT, (yyvsp[-1].expr)); }
#line 3854 "CMDgram.cpp"
    break;

  case 176: /* inline_command_expr: rwPRINTF '(' expr_list ')'  */
#line 810 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::PRINTF, (yyvsp[-1].expr)); }
#line 3860 "CMDgram.cpp"
    break;

  case 177: /* inline_command_expr: rwSPRINTF '(' expr_list ')'  */
#line 812 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::SPRINTF, (yyvsp[-1].expr)); }
#line 3866 "CMDgram.cpp"
    break;

  case 178: /* inline_command_expr: rwRANDOMF '(' ')'  */
#line 814 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-2].i).lineNumber, CommandStmtNode::RANDOMF, NULL); }
#line 3872 "CMDgram.cpp"
    break;

  case 179: /* inline_command_expr: rwRANDOMF '(' expr_list ')'  */
#line 816 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::RANDOMF, (yyvsp[-1].expr)); }
#line 3878 "CMDgram.cpp"
    break;

  case 180: /* inline_command_expr: rwFLOOR '(' expr_list ')'  */
#line 818 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::FLOOR, (yyvsp[-1].expr)); }
#line 3884 "CMDgram.cpp"
    break;

  case 181: /* inline_command_expr: rwCEIL '(' expr_list ')'  */
#line 820 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::CEIL, (yyvsp[-1].expr)); }
#line 3890 "CMDgram.cpp"
    break;

  case 182: /* inline_command_expr: rwFABS '(' expr_list ')'  */
#line 822 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::FABS, (yyvsp[-1].expr)); }
#line 3896 "CMDgram.cpp"
    break;

  case 183: /* inline_command_expr: rwSIN '(' expr_list ')'  */
#line 824 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::SIN, (yyvsp[-1].expr)); }
#line 3902 "CMDgram.cpp"
    break;

  case 184: /* inline_command_expr: rwCOS '(' expr_list ')'  */
#line 826 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::COS, (yyvsp[-1].expr)); }
#line 3908 "CMDgram.cpp"
    break;

  case 185: /* inline_command_expr: rwATAN '(' expr_list ')'  */
#line 828 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::ATAN, (yyvsp[-1].expr)); }
#line 3914 "CMDgram.cpp"
    break;

  case 186: /* inline_command_expr: rwTANH '(' expr_list ')'  */
#line 830 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::TANH, (yyvsp[-1].expr)); }
#line 3920 "CMDgram.cpp"
    break;

  case 187: /* inline_command_expr: rwSQRT '(' expr_list ')'  */
#line 832 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::SQRT, (yyvsp[-1].expr)); }
#line 3926 "CMDgram.cpp"
    break;

  case 188: /* inline_command_expr: rwISZERO '(' expr_list ')'  */
#line 834 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::ISZERO, (yyvsp[-1].expr)); }
#line 3932 "CMDgram.cpp"
    break;

  case 189: /* inline_command_expr: rwFMOD '(' expr_list ')'  */
#line 836 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::FMOD, (yyvsp[-1].expr)); }
#line 3938 "CMDgram.cpp"
    break;

  case 190: /* inline_command_expr: rwMIN '(' expr_list ')'  */
#line 838 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::MIN, (yyvsp[-1].expr)); }
#line 3944 "CMDgram.cpp"
    break;

  case 191: /* inline_command_expr: rwMAX '(' expr_list ')'  */
#line 840 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::MAX, (yyvsp[-1].expr)); }
#line 3950 "CMDgram.cpp"
    break;

  case 192: /* inline_command_expr: rwATAN2 '(' expr_list ')'  */
#line 842 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::ATAN2, (yyvsp[-1].expr)); }
#line 3956 "CMDgram.cpp"
    break;

  case 193: /* inline_command_expr: rwPOW '(' expr_list ')'  */
#line 844 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::POW, (yyvsp[-1].expr)); }
#line 3962 "CMDgram.cpp"
    break;

  case 194: /* inline_command_expr: rwCLAMP '(' expr_list ')'  */
#line 846 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::CLAMP, (yyvsp[-1].expr)); }
#line 3968 "CMDgram.cpp"
    break;

  case 195: /* inline_command_expr: rwCLAMPF '(' expr_list ')'  */
#line 848 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::CLAMPF, (yyvsp[-1].expr)); }
#line 3974 "CMDgram.cpp"
    break;

  case 196: /* inline_command_expr: rwLERP '(' expr_list ')'  */
#line 850 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::LERP, (yyvsp[-1].expr)); }
#line 3980 "CMDgram.cpp"
    break;

  case 197: /* inline_command_expr: rwSMOOTHSTEP '(' expr_list ')'  */
#line 852 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::SMOOTHSTEP, (yyvsp[-1].expr)); }
#line 3986 "CMDgram.cpp"
    break;

  case 198: /* expr_list: expr  */
#line 864 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3992 "CMDgram.cpp"
    break;

  case 199: /* expr_list: expr_list ',' expr  */
#line 866 "CMDgram.y"
      { ((yyvsp[-2].expr))->append((yyvsp[0].expr)); (yyval.expr) = (yyvsp[-2].expr); }
#line 3998 "CMDgram.cpp"
    break;

  case 200: /* slot_assign_list_opt: %empty  */
#line 871 "CMDgram.y"
      { (yyval.slist) = NULL; }
#line 4004 "CMDgram.cpp"
    break;

  case 201: /* slot_assign_list_opt: slot_assign_list  */
#line 873 "CMDgram.y"
      { (yyval.slist) = (yyvsp[0].slist); }
#line 4010 "CMDgram.cpp"
    break;

  case 202: /* slot_assign_list: slot_assign  */
#line 878 "CMDgram.y"
      { (yyval.slist) = (yyvsp[0].slist); }
#line 4016 "CMDgram.cpp"
    break;

  case 203: /* slot_assign_list: slot_assign_list slot_assign  */
#line 880 "CMDgram.y"
      { (yyvsp[-1].slist)->append((yyvsp[0].slist)); (yyval.slist) = (yyvsp[-1].slist); }
#line 4022 "CMDgram.cpp"
    break;

  case 204: /* slot_assign: IDENT '=' expr ';'  */
#line 886 "CMDgram.y"
      { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-3].s).lineNumber, NULL, NULL, (yyvsp[-3].s).value, (yyvsp[-1].expr)); }
#line 4028 "CMDgram.cpp"
    break;

  case 205: /* slot_assign: IDENT '=' '{' expr_list '}' ';'  */
#line 890 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-5].s).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-2].expr);
         (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-5].s).lineNumber, NULL, NULL, (yyvsp[-5].s).value, vecNode);
      }
#line 4038 "CMDgram.cpp"
    break;

  case 206: /* slot_assign: TYPEIDENT IDENT '=' expr ';'  */
#line 898 "CMDgram.y"
      { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-4].i).lineNumber, NULL, NULL, (yyvsp[-3].s).value, (yyvsp[-1].expr), (yyvsp[-4].i).value); }
#line 4044 "CMDgram.cpp"
    break;

  case 207: /* slot_assign: TYPEIDENT IDENT '=' '{' expr_list '}' ';'  */
#line 902 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-6].i).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-2].expr);
         (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-6].i).lineNumber, NULL, NULL, (yyvsp[-5].s).value, vecNode, (yyvsp[-6].i).value);
      }
#line 4054 "CMDgram.cpp"
    break;

  case 208: /* slot_assign: rwDATABLOCK '=' expr ';'  */
#line 910 "CMDgram.y"
      { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-3].i).lineNumber, NULL, NULL, StringTable->insert("datablock"), (yyvsp[-1].expr)); }
#line 4060 "CMDgram.cpp"
    break;

  case 209: /* slot_assign: IDENT '[' aidx_expr ']' '=' expr ';'  */
#line 912 "CMDgram.y"
      { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-6].s).lineNumber, NULL, (yyvsp[-4].expr), (yyvsp[-6].s).value, (yyvsp[-1].expr)); }
#line 4066 "CMDgram.cpp"
    break;

  case 210: /* slot_assign: IDENT '[' aidx_expr ']' '=' '{' expr_list '}' ';'  */
#line 916 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-8].s).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-2].expr);
         (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-8].s).lineNumber, NULL, (yyvsp[-6].expr), (yyvsp[-8].s).value, vecNode);
      }
#line 4076 "CMDgram.cpp"
    break;

  case 211: /* slot_assign: TYPEIDENT IDENT '[' aidx_expr ']' '=' expr ';'  */
#line 924 "CMDgram.y"
      { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-7].i).lineNumber, NULL, (yyvsp[-4].expr), (yyvsp[-6].s).value, (yyvsp[-1].expr), (yyvsp[-7].i).value); }
#line 4082 "CMDgram.cpp"
    break;

  case 212: /* aidx_expr: expr  */
#line 947 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 4088 "CMDgram.cpp"
    break;

  case 213: /* aidx_expr: aidx_expr ',' expr  */
#line 949 "CMDgram.y"
      { (yyval.expr) = CommaCatExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4094 "CMDgram.cpp"
    break;


#line 4098 "CMDgram.cpp"

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

#line 952 "CMDgram.y"


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
