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
#define YYLAST   5183

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  119
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  210
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  548

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
     528,   530,   532,   534,   536,   538,   540,   542,   544,   546,
     548,   550,   552,   554,   556,   558,   560,   568,   570,   572,
     574,   576,   578,   580,   582,   584,   586,   588,   590,   592,
     598,   600,   605,   607,   612,   614,   619,   621,   623,   625,
     627,   629,   631,   633,   635,   637,   639,   641,   647,   649,
     651,   653,   655,   659,   667,   671,   679,   681,   683,   685,
     687,   719,   722,   725,   731,   733,   745,   747,   753,   754,
     775,   777,   784,   786,   788,   790,   792,   794,   796,   798,
     800,   802,   804,   806,   808,   810,   812,   814,   816,   818,
     820,   822,   824,   826,   828,   840,   842,   848,   849,   854,
     856,   862,   866,   874,   878,   886,   888,   892,   900,   923,
     925
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

#define YYPACT_NINF (-371)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-91)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -371,    19,   633,  -371,    -3,   -14,   -14,    61,    76,    41,
    1464,    98,   939,   104,   121,   128,   -14,   135,   141,   155,
     143,  -371,   153,   -30,    37,  -371,  -371,  -371,  -371,  3044,
    3044,  3044,  3044,  3044,   151,   163,   169,   177,   191,   205,
     207,   214,   217,   222,   225,   232,   240,   242,   245,   250,
     254,   256,   277,   279,   283,   287,  -371,  -371,  -371,  -371,
    -371,  -371,  -371,  -371,  -371,  -371,  -371,   162,  4999,   136,
    -371,   289,  -371,  -371,  -371,    40,  -371,  3044,   295,   298,
    -371,  -371,  3044,  -371,  -371,  -371,  3044,  3578,  -371,  3044,
    -371,  -371,   341,  1549,   322,   328,   316,  3044,  3044,   312,
    3044,  3044,  1634,  -371,  -371,  3044,  3044,  3044,  3044,  3044,
    3044,  3044,  3044,  3044,  3044,  3044,  -371,  1719,   335,    67,
      67,  3627,    67,    67,  3044,  3044,  3044,  1804,  3044,  3044,
    3044,  3044,  3044,  3044,  3044,  3044,  3044,  3044,  3044,  3044,
    3044,  3044,  3044,  3044,  3044,  3044,  -371,  3044,  3044,  3044,
    3044,  3044,  3044,   336,  3044,  3044,  3044,  3044,  3044,   -14,
     -14,  3044,  3044,  3044,  3044,  3044,  3044,  3044,  3044,  3044,
    3044,  3044,  1889,  -371,   338,   339,  3676,   718,  3044,  3725,
    4999,    17,  -371,  3774,  1049,   323,   175,  1974,  3823,   354,
     355,  3044,  3872,  3921,   376,  3117,  3166,  3044,  4999,  4999,
    4999,  4999,  4999,  4999,  4999,  4999,  4999,  4999,  4999,  4999,
     -41,  3044,  4999,  -371,   325,   327,   329,  -371,    81,    87,
      89,  -371,   125,   173,   182,   202,   208,   210,   219,   226,
     237,   246,   251,   257,   259,   267,   270,   280,   299,   305,
     311,   356,   356,    67,    67,   274,   274,   -33,   721,   942,
      67,   832,   498,  -371,  -371,   415,   415,  1052,  1052,   274,
     274,  5095,  5048,   498,   498,  3970,  3044,  4999,   -35,   330,
     332,  -371,   337,  -371,  3044,   342,  4999,   342,   939,  3044,
     345,   939,  -371,  -371,  3044,  2059,  2169,  4019,  2254,  2339,
    3044,  4068,   334,   348,    29,  -371,  -371,   346,  3044,  -371,
      65,  3044,   366,    66,  1719,  -371,  1719,  -371,  -371,  -371,
    -371,  -371,  -371,  -371,  -371,  -371,  -371,  -371,  -371,  -371,
    -371,  -371,  -371,  -371,  -371,  -371,  -371,  -371,  -371,  1719,
    3044,  3044,   138,  3044,   361,   352,   338,   338,   276,   367,
     358,   358,   407,  4999,  -371,  -371,  4117,  3044,  4166,   939,
    4215,  2449,  2534,  4264,  3044,  3215,  4313,   363,   390,   390,
     365,  -371,   370,  4362,  -371,  4999,  2619,  -371,  -371,  -371,
     373,   380,   -34,   526,  -371,  4999,  3044,  -371,  -371,   381,
     342,  -371,  3044,   394,   396,   939,  -371,  3264,  3044,  -371,
     939,   939,  4411,   939,  4460,  2704,  3313,   939,  3044,   939,
     372,  3044,   393,   397,  -371,  -371,  -371,  3044,  4999,  -371,
    -371,  -371,  4999,  1159,   395,   358,   406,   410,   411,  -371,
     939,  3044,  3362,  -371,  -371,   939,  -371,   939,   939,  4509,
     939,  3044,  -371,  3416,  -371,   103,   -21,  4999,  -371,  -371,
     166,  -371,  -371,   416,   181,   181,  -371,  3470,   939,  3044,
    -371,  -371,  -371,   939,  -371,  3524,   939,  3044,   423,   -42,
     438,   417,   103,  -371,  3044,  -371,  -371,  1269,   426,   428,
     427,   362,   181,   431,   939,  3044,  -371,  4558,  -371,   939,
    3044,  -371,  4607,  3044,  2789,  3044,   -36,   430,  -371,  4999,
     829,  -371,   181,  -371,  -371,   434,   362,  -371,  -371,  4656,
     939,  -371,  4705,   939,  4754,  3044,  4803,   -32,  2874,  3044,
    -371,   436,  -371,   435,  -371,   939,  -371,   939,  -371,  -371,
     174,  -371,   445,  3044,  4852,   -29,  -371,  -371,  -371,  -371,
     439,  2959,   184,  -371,   447,  1379,  -371,  3044,  4901,   440,
    3044,   200,  -371,  -371,  4950,   442,  -371,  -371
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
       0,     0,     0,     0,     0,     0,     4,     7,     5,     6,
      17,   151,    18,    13,    14,    15,    16,     0,     0,   124,
     125,    91,   148,   149,   150,     0,   134,     0,     0,     0,
      19,    20,     0,   123,   103,    21,     0,     0,    91,     0,
      11,    58,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   137,   136,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   156,   168,     0,   101,
     102,     0,   119,   118,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    24,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   158,    30,     0,     0,    47,    47,     0,
     195,     0,    22,     0,     0,     0,   128,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   152,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   209,
       0,     0,   164,   166,   169,     0,     0,    92,     0,     0,
       0,   175,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    97,    98,    99,   100,   105,   106,   130,    96,    95,
      94,    93,   117,   132,   133,   112,   113,   109,   110,   107,
     108,   114,   111,   115,   116,     0,     0,   159,    34,     0,
      31,    32,     0,   135,    47,    45,    48,    45,     0,     0,
       0,     0,    57,    12,     0,     0,     0,     0,     0,     0,
       0,    45,     0,     0,     0,     9,   170,     0,     0,    25,
       0,     0,   129,     0,     0,   161,   168,   172,   173,   174,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   168,
       0,     0,     0,     0,    35,     0,     0,    30,     0,     0,
      49,    49,    66,   196,    23,    68,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,     0,     0,   153,   210,     0,   157,   165,   167,
       0,     0,     0,   104,   160,    36,     0,    11,    33,     0,
      45,    46,     0,     0,     0,     0,    69,     0,     0,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     8,   171,    26,     0,   154,   162,
     163,   131,    37,     0,     0,    49,    50,    40,    44,    67,
       0,     0,     0,    76,    75,     0,    73,     0,     0,     0,
       0,     0,    83,     0,    84,   197,     0,    64,    59,    60,
       0,    28,    11,     0,    51,    51,    82,     0,     0,     0,
      74,    72,    71,     0,    89,     0,     0,     0,     0,     0,
       0,     0,   198,   199,     0,    11,   155,     0,    42,     0,
       0,    53,    52,     0,     0,     0,    78,     0,    70,     0,
       0,    85,     0,     0,     0,     0,     0,     0,   200,    65,
      61,    29,    51,    55,    39,     0,    54,    43,    79,     0,
       0,    86,     0,     0,     0,     0,     0,     0,     0,     0,
      38,     0,    63,     0,    56,     0,    80,     0,    87,   205,
       0,   201,     0,     0,     0,     0,    11,    41,    81,    88,
       0,     0,     0,   203,     0,    62,   202,     0,     0,     0,
       0,     0,   206,   204,     0,     0,   208,   207
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -371,  -371,  -371,  -371,  -371,  -371,  -368,    -1,  -177,   165,
    -371,   164,  -371,  -272,  -266,  -173,  -337,  -362,    31,  -159,
    -371,  -356,  -371,  -371,  -371,  -371,  -371,  -371,    -2,  -371,
    -371,    18,   -67,   126,  -371,   201,  -371,  -291,  -371,  -371,
     -74,  -371,    69,  -370,  -314
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,    56,    57,   294,   184,    91,    59,   269,
     270,   271,    60,    61,   340,   275,   383,   470,   471,    92,
      62,   402,   436,    63,    64,    65,    66,    67,   180,    69,
      70,    78,   116,    88,    72,   213,   214,   215,    73,    74,
     181,   461,   472,   463,   210
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      68,    58,   173,   403,   384,   277,   484,   464,    87,   413,
      68,   341,   508,   333,   301,   370,   372,   295,   102,     3,
     329,   301,    76,   301,    79,   357,   301,   119,   120,   121,
     122,   123,     4,    75,    96,   465,   103,   104,   371,    77,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     218,   219,   220,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   279,   485,   467,   176,   280,   302,   443,   509,
     179,   334,   330,   473,   411,   115,   522,   183,   360,   534,
     117,   188,   488,   174,    82,   192,   193,   490,   195,   196,
     198,   338,   488,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   415,   212,   153,   361,    80,   342,
     279,   279,   345,   300,   364,   368,   118,   458,    71,   175,
     513,   159,   160,    81,   512,   307,   279,   303,    71,   459,
     460,   308,   279,   309,   279,   241,   242,   243,   244,   245,
     246,    89,   248,   249,   250,   251,   252,    93,   535,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     267,   507,   469,   469,    94,   276,   276,   253,   254,   310,
     279,    95,    68,   283,   172,   287,     5,     6,    97,   291,
     389,    99,   332,   279,    98,   525,   100,   374,   285,   495,
     469,   101,   103,   104,   124,   458,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   125,   459,   460,   146,
     469,   279,   126,   102,   495,   466,   419,   311,   279,   279,
     127,   423,   424,   530,   426,   367,   312,   279,   432,   279,
     434,   103,   104,   539,   128,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   279,   313,   279,   129,   545,
     130,   446,   314,   279,   315,   279,   450,   131,   451,   452,
     132,   454,   276,   316,   279,   133,    68,   343,   134,    68,
     317,   279,   346,   348,   350,   135,   353,   355,   356,   476,
     115,   318,   279,   136,   478,   137,   363,   481,   138,   365,
     319,   279,   212,   139,   212,   320,   279,   140,   416,   141,
      71,   321,   279,   322,   279,   498,   147,   148,   149,   150,
     501,   323,   279,   153,   324,   279,   156,   212,   209,   373,
     142,   375,   143,   440,   325,   279,   144,   158,   159,   160,
     145,   516,   161,   162,   518,   387,   -90,    68,   177,   392,
     394,   178,   396,   326,   279,   185,   528,   189,   529,   327,
     279,   169,   170,   190,   408,   328,   279,     5,     6,   191,
     194,   216,   247,   268,   412,   272,   284,   289,   290,     4,
     304,   305,   306,    68,   335,   362,   422,   336,    68,    68,
     337,    68,   358,   429,   380,    68,   433,    68,   339,   437,
     149,   150,   344,   381,    71,   153,   359,    71,   156,   376,
     377,    68,   283,   382,   366,   385,   401,   400,    68,   447,
     159,   160,   404,    68,   405,    68,    68,   409,    68,   455,
     435,   520,   103,   104,   410,   414,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,    68,   477,   417,   532,
     418,    68,   438,   442,    68,   482,   439,   147,   148,   149,
     150,   279,   489,   541,   153,    68,   283,   156,   444,   445,
     468,   483,    68,   499,   486,    71,   487,    68,   502,   159,
     160,   504,   506,   209,   492,   493,   494,   510,    68,   283,
     497,   514,   526,   531,   527,   540,   536,   543,    68,   547,
     378,    68,   379,   496,   462,   369,   524,   209,     0,     0,
       0,    71,     0,    68,     0,    68,    71,    71,     0,    71,
       0,     0,     0,    71,     0,    71,     0,     0,     0,   538,
       0,     0,     0,    68,   283,     0,     0,     0,   544,    71,
     147,   148,   149,   150,     0,     0,    71,   153,     0,     0,
     156,    71,     0,    71,    71,     0,    71,     0,     0,     0,
       0,     0,   159,   160,     0,     0,   161,   162,   147,   148,
     149,   150,   151,   152,    71,   153,   154,   155,   156,    71,
       0,     0,    71,     0,     0,     0,   157,     0,     0,   158,
     159,   160,     0,    71,   161,   162,     0,     0,     0,     0,
      71,     0,     0,     0,     0,    71,     0,   163,   164,   165,
     166,   167,   168,   169,   170,     0,    71,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    71,     0,     0,    71,
       0,     0,     0,     0,     0,     0,     4,     0,     5,     6,
       7,    71,     8,    71,     9,     0,    10,    11,    12,     0,
       0,     0,     0,    13,    14,    15,     0,    16,    17,     0,
      18,    71,    19,    20,     0,     0,    21,    22,    23,    24,
       0,    25,    26,    27,    28,     0,    29,    30,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,     0,     0,
       0,     0,     0,     0,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     6,    83,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    20,     0,
       0,    21,    84,    23,    24,     0,     0,    26,    27,    28,
       0,    29,    30,   147,   148,   149,   150,   151,   152,     0,
     153,    31,   155,   156,     0,     0,     0,     0,     0,    32,
      33,   157,     0,     0,   158,   159,   160,     0,     0,   161,
     162,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   163,   164,   165,   166,     0,     0,   169,   170,
       0,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,   274,     5,     6,     7,     0,     8,     0,
       9,     0,    10,    11,    12,     0,     0,     0,   511,    13,
      14,    15,     0,    16,    17,   401,    18,     0,     0,    20,
       0,     0,    21,    22,    23,    24,     0,    25,    26,    27,
      28,     0,    29,    30,   147,   148,   149,   150,   151,   152,
       0,   153,    31,   155,   156,     0,     0,     0,     0,     0,
      32,    33,     0,     0,     0,   158,   159,   160,     0,     0,
     161,   162,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   163,   164,   165,   166,     0,     0,   169,
     170,     0,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     5,     6,     7,     0,     8,     0,
       9,     0,    10,    11,    12,     0,     0,     0,     0,    13,
      14,    15,     0,    16,    17,     0,    18,     0,     0,    20,
       0,     0,    21,    22,    23,    24,     0,    25,    26,    27,
      28,     0,    29,    30,   147,   148,   149,   150,   151,   152,
       0,   153,    31,     0,   156,     0,     0,    90,     0,     0,
      32,    33,     0,     0,     0,   158,   159,   160,     0,     0,
     161,   162,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   163,   164,   165,   166,     0,     0,   169,
     170,     0,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     5,     6,     7,     0,     8,     0,
       9,     0,    10,    11,    12,     0,     0,     0,     0,    13,
      14,    15,     0,    16,    17,     0,    18,     0,     0,    20,
       0,     0,    21,    22,    23,    24,     0,    25,    26,    27,
      28,     0,    29,    30,   147,   148,   149,   150,   151,   152,
       0,   153,    31,     0,   156,     0,     0,     0,   282,     0,
      32,    33,     0,     0,     0,   158,   159,   160,     0,     0,
     161,   162,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   165,   166,     0,     0,   169,
     170,     0,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     5,     6,     7,     0,     8,     0,
       9,     0,    10,    11,    12,     0,     0,     0,     0,    13,
      14,    15,     0,    16,    17,     0,    18,     0,     0,    20,
       0,     0,    21,    22,    23,    24,     0,    25,    26,    27,
      28,     0,    29,    30,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,     0,     0,     0,     0,   441,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     5,     6,     7,     0,     8,     0,
       9,     0,    10,    11,    12,     0,     0,     0,     0,    13,
      14,    15,     0,    16,    17,     0,    18,     0,     0,    20,
       0,     0,    21,    22,    23,    24,     0,    25,    26,    27,
      28,     0,    29,    30,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,     0,     0,     0,     0,   491,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     5,     6,     7,     0,     8,     0,
       9,     0,    10,    11,    12,     0,     0,     0,     0,    13,
      14,    15,     0,    16,    17,     0,    18,     0,     0,    20,
       0,     0,    21,    22,    23,    24,     0,    25,    26,    27,
      28,     0,    29,    30,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,     0,     0,     0,     0,     0,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       6,    83,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    20,     0,     0,    21,    84,    23,
      24,     0,     0,    26,    27,    28,     0,    29,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    31,     0,     0,
       0,    85,    86,     0,     0,    32,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,    83,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    20,
       0,     0,    21,    84,   186,    24,     0,     0,    26,    27,
      28,     0,    29,    30,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,     0,     0,   187,     0,     0,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       6,    83,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    20,     0,     0,    21,    84,    23,
      24,     0,     0,    26,    27,    28,     0,    29,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    31,     0,     0,
       0,     0,   197,     0,     0,    32,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,    83,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    20,
       0,     0,    21,    84,    23,    24,     0,     0,    26,    27,
      28,     0,    29,    30,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,     0,     0,     0,   211,     0,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       6,    83,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    20,     0,     0,    21,    84,    23,
      24,     0,     0,    26,    27,    28,     0,    29,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    31,   221,     0,
       0,     0,     0,     0,     0,    32,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,    83,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    20,
       0,     0,    21,    84,    23,    24,     0,     0,    26,    27,
      28,     0,    29,    30,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,     0,     0,     0,   266,     0,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       6,    83,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    20,     0,     0,    21,    84,    23,
      24,     0,     0,    26,    27,    28,     0,    29,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    31,     0,     0,
       0,   286,     0,     0,     0,    32,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,    83,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    20,
       0,     0,    21,    84,    23,    24,     0,     0,    26,    27,
      28,     0,    29,    30,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,     0,     0,     0,     0,     0,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     347,     0,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     5,     6,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,    21,    84,    23,    24,     0,     0,    26,    27,
      28,     0,    29,    30,     0,     0,     0,     0,     0,     0,
       0,     0,    31,   349,     0,     0,     0,     0,     0,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       6,    83,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    20,     0,     0,    21,    84,    23,
      24,     0,     0,    26,    27,    28,     0,    29,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    31,     0,     0,
       0,   352,     0,     0,     0,    32,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,    83,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    20,
       0,     0,    21,    84,    23,    24,     0,     0,    26,    27,
      28,     0,    29,    30,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,     0,     0,     0,     0,     0,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     354,     0,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     5,     6,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,    21,    84,    23,    24,     0,     0,    26,    27,
      28,     0,    29,    30,     0,     0,     0,     0,     0,     0,
       0,     0,    31,   391,     0,     0,     0,     0,     0,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       6,    83,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    20,     0,     0,    21,    84,    23,
      24,     0,     0,    26,    27,    28,     0,    29,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    31,   393,     0,
       0,     0,     0,     0,     0,    32,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,    83,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    20,
       0,     0,    21,    84,    23,    24,     0,     0,    26,    27,
      28,     0,    29,    30,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,     0,     0,     0,   407,     0,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       6,    83,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    20,     0,     0,    21,    84,    23,
      24,     0,     0,    26,    27,    28,     0,    29,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    31,   428,     0,
       0,     0,     0,     0,     0,    32,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,    83,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    20,
       0,     0,    21,    84,    23,    24,     0,     0,    26,    27,
      28,     0,    29,    30,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,     0,     0,     0,   505,     0,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       6,    83,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    20,     0,     0,    21,    84,    23,
      24,     0,     0,    26,    27,    28,     0,    29,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    31,     0,     0,
       0,     0,   523,     0,     0,    32,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,    83,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    20,
       0,     0,    21,    84,    23,    24,     0,     0,    26,    27,
      28,     0,    29,    30,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,     0,     0,     0,   537,     0,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       6,    83,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    20,     0,     0,    21,    84,    23,
      24,     0,     0,    26,    27,    28,     0,    29,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    31,     0,     0,
       0,     0,     0,     0,     0,    32,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,   147,
     148,   149,   150,   151,   152,     0,   153,   154,   155,   156,
       0,   296,   297,     0,     0,     0,     0,   157,     0,     0,
     158,   159,   160,     0,     0,   161,   162,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   163,   164,
     165,   166,   167,   168,   169,   170,     0,     0,   147,   148,
     149,   150,   151,   152,     0,   153,   154,   155,   156,     0,
       0,   298,     0,   299,     0,     0,   157,     0,     0,   158,
     159,   160,     0,   171,   161,   162,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   163,   164,   165,
     166,   167,   168,   169,   170,     0,     0,   147,   148,   149,
     150,   151,   152,     0,   153,   154,   155,   156,     0,   397,
       0,     0,     0,     0,     0,   157,     0,     0,   158,   159,
     160,     0,   171,   161,   162,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   163,   164,   165,   166,
     167,   168,   169,   170,     0,   398,   147,   148,   149,   150,
     151,   152,     0,   153,   154,   155,   156,     0,   420,     0,
       0,     0,     0,     0,   157,     0,     0,   158,   159,   160,
       0,   171,   161,   162,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   163,   164,   165,   166,   167,
     168,   169,   170,     0,   421,   147,   148,   149,   150,   151,
     152,     0,   153,   154,   155,   156,     0,   430,     0,     0,
       0,     0,     0,   157,     0,     0,   158,   159,   160,     0,
     171,   161,   162,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   163,   164,   165,   166,   167,   168,
     169,   170,     0,   431,   147,   148,   149,   150,   151,   152,
       0,   153,   154,   155,   156,     0,   448,     0,     0,     0,
       0,     0,   157,     0,     0,   158,   159,   160,     0,   171,
     161,   162,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   163,   164,   165,   166,   167,   168,   169,
     170,     0,     0,     0,   449,     0,     0,     0,   147,   148,
     149,   150,   151,   152,     0,   153,   154,   155,   156,     0,
     456,     0,     0,     0,     0,     0,   157,     0,   171,   158,
     159,   160,     0,     0,   161,   162,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   163,   164,   165,
     166,   167,   168,   169,   170,     0,     0,     0,   457,     0,
       0,     0,   147,   148,   149,   150,   151,   152,     0,   153,
     154,   155,   156,     0,   474,     0,     0,     0,     0,     0,
     157,     0,   171,   158,   159,   160,     0,     0,   161,   162,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   163,   164,   165,   166,   167,   168,   169,   170,     0,
       0,     0,   475,     0,     0,     0,   147,   148,   149,   150,
     151,   152,     0,   153,   154,   155,   156,     0,   479,     0,
       0,     0,     0,     0,   157,     0,   171,   158,   159,   160,
       0,     0,   161,   162,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   163,   164,   165,   166,   167,
     168,   169,   170,     0,     0,     0,   480,     0,     0,     0,
     147,   148,   149,   150,   151,   152,     0,   153,   154,   155,
     156,     0,     0,     0,     0,   182,     0,     0,   157,     0,
     171,   158,   159,   160,     0,     0,   161,   162,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   163,
     164,   165,   166,   167,   168,   169,   170,     0,     0,   147,
     148,   149,   150,   151,   152,     0,   153,   154,   155,   156,
       0,   217,     0,     0,     0,     0,     0,   157,     0,     0,
     158,   159,   160,     0,   171,   161,   162,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   163,   164,
     165,   166,   167,   168,   169,   170,     0,     0,   147,   148,
     149,   150,   151,   152,     0,   153,   154,   155,   156,     0,
     273,     0,     0,     0,     0,     0,   157,     0,     0,   158,
     159,   160,     0,   171,   161,   162,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   163,   164,   165,
     166,   167,   168,   169,   170,     0,     0,   147,   148,   149,
     150,   151,   152,     0,   153,   154,   155,   156,     0,   278,
       0,     0,     0,     0,     0,   157,     0,     0,   158,   159,
     160,     0,   171,   161,   162,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   163,   164,   165,   166,
     167,   168,   169,   170,     0,     0,   147,   148,   149,   150,
     151,   152,     0,   153,   154,   155,   156,     0,   281,     0,
       0,     0,     0,     0,   157,     0,     0,   158,   159,   160,
       0,   171,   161,   162,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   163,   164,   165,   166,   167,
     168,   169,   170,     0,     0,   147,   148,   149,   150,   151,
     152,     0,   153,   154,   155,   156,     0,     0,     0,     0,
     288,     0,     0,   157,     0,     0,   158,   159,   160,     0,
     171,   161,   162,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   163,   164,   165,   166,   167,   168,
     169,   170,     0,     0,   147,   148,   149,   150,   151,   152,
       0,   153,   154,   155,   156,     0,   292,     0,     0,     0,
       0,     0,   157,     0,     0,   158,   159,   160,     0,   171,
     161,   162,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   163,   164,   165,   166,   167,   168,   169,
     170,     0,     0,   147,   148,   149,   150,   151,   152,     0,
     153,   154,   155,   156,     0,   293,     0,     0,     0,     0,
       0,   157,     0,     0,   158,   159,   160,     0,   171,   161,
     162,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   163,   164,   165,   166,   167,   168,   169,   170,
       0,     0,   147,   148,   149,   150,   151,   152,     0,   153,
     154,   155,   156,     0,     0,     0,   331,     0,     0,     0,
     157,     0,     0,   158,   159,   160,     0,   171,   161,   162,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   163,   164,   165,   166,   167,   168,   169,   170,     0,
       0,   147,   148,   149,   150,   151,   152,     0,   153,   154,
     155,   156,     0,     0,     0,     0,   351,     0,     0,   157,
       0,     0,   158,   159,   160,     0,   171,   161,   162,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     163,   164,   165,   166,   167,   168,   169,   170,     0,     0,
     147,   148,   149,   150,   151,   152,     0,   153,   154,   155,
     156,     0,     0,     0,   339,     0,     0,     0,   157,     0,
       0,   158,   159,   160,     0,   171,   161,   162,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   163,
     164,   165,   166,   167,   168,   169,   170,     0,     0,   147,
     148,   149,   150,   151,   152,     0,   153,   154,   155,   156,
       0,   386,     0,     0,     0,     0,     0,   157,     0,     0,
     158,   159,   160,     0,   171,   161,   162,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   163,   164,
     165,   166,   167,   168,   169,   170,     0,     0,   147,   148,
     149,   150,   151,   152,     0,   153,   154,   155,   156,     0,
       0,     0,     0,     0,     0,     0,   157,     0,     0,   158,
     159,   160,     0,   171,   161,   162,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   163,   164,   165,
     166,   167,   168,   169,   170,     0,   388,   147,   148,   149,
     150,   151,   152,     0,   153,   154,   155,   156,     0,   390,
       0,     0,     0,     0,     0,   157,     0,     0,   158,   159,
     160,     0,   171,   161,   162,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   163,   164,   165,   166,
     167,   168,   169,   170,     0,     0,   147,   148,   149,   150,
     151,   152,     0,   153,   154,   155,   156,     0,     0,     0,
       0,   395,     0,     0,   157,     0,     0,   158,   159,   160,
       0,   171,   161,   162,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   163,   164,   165,   166,   167,
     168,   169,   170,     0,     0,   147,   148,   149,   150,   151,
     152,     0,   153,   154,   155,   156,     0,   399,     0,     0,
       0,     0,     0,   157,     0,     0,   158,   159,   160,     0,
     171,   161,   162,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   163,   164,   165,   166,   167,   168,
     169,   170,     0,     0,   147,   148,   149,   150,   151,   152,
       0,   153,   154,   155,   156,     0,     0,     0,     0,   406,
       0,     0,   157,     0,     0,   158,   159,   160,     0,   171,
     161,   162,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   163,   164,   165,   166,   167,   168,   169,
     170,     0,     0,   147,   148,   149,   150,   151,   152,     0,
     153,   154,   155,   156,     0,   425,     0,     0,     0,     0,
       0,   157,     0,     0,   158,   159,   160,     0,   171,   161,
     162,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   163,   164,   165,   166,   167,   168,   169,   170,
       0,     0,   147,   148,   149,   150,   151,   152,     0,   153,
     154,   155,   156,     0,   427,     0,     0,     0,     0,     0,
     157,     0,     0,   158,   159,   160,     0,   171,   161,   162,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   163,   164,   165,   166,   167,   168,   169,   170,     0,
       0,   147,   148,   149,   150,   151,   152,     0,   153,   154,
     155,   156,     0,   453,     0,     0,     0,     0,     0,   157,
       0,     0,   158,   159,   160,     0,   171,   161,   162,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     163,   164,   165,   166,   167,   168,   169,   170,     0,     0,
     147,   148,   149,   150,   151,   152,     0,   153,   154,   155,
     156,     0,   500,     0,     0,     0,     0,     0,   157,     0,
       0,   158,   159,   160,     0,   171,   161,   162,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   163,
     164,   165,   166,   167,   168,   169,   170,     0,     0,   147,
     148,   149,   150,   151,   152,     0,   153,   154,   155,   156,
       0,   503,     0,     0,     0,     0,     0,   157,     0,     0,
     158,   159,   160,     0,   171,   161,   162,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   163,   164,
     165,   166,   167,   168,   169,   170,     0,     0,   147,   148,
     149,   150,   151,   152,     0,   153,   154,   155,   156,     0,
     515,     0,     0,     0,     0,     0,   157,     0,     0,   158,
     159,   160,     0,   171,   161,   162,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   163,   164,   165,
     166,   167,   168,   169,   170,     0,     0,   147,   148,   149,
     150,   151,   152,     0,   153,   154,   155,   156,     0,   517,
       0,     0,     0,     0,     0,   157,     0,     0,   158,   159,
     160,     0,   171,   161,   162,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   163,   164,   165,   166,
     167,   168,   169,   170,     0,     0,   147,   148,   149,   150,
     151,   152,     0,   153,   154,   155,   156,     0,     0,     0,
       0,   519,     0,     0,   157,     0,     0,   158,   159,   160,
       0,   171,   161,   162,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   163,   164,   165,   166,   167,
     168,   169,   170,     0,     0,   147,   148,   149,   150,   151,
     152,     0,   153,   154,   155,   156,     0,     0,     0,     0,
     521,     0,     0,   157,     0,     0,   158,   159,   160,     0,
     171,   161,   162,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   163,   164,   165,   166,   167,   168,
     169,   170,     0,     0,   147,   148,   149,   150,   151,   152,
       0,   153,   154,   155,   156,     0,     0,     0,     0,   533,
       0,     0,   157,     0,     0,   158,   159,   160,     0,   171,
     161,   162,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   163,   164,   165,   166,   167,   168,   169,
     170,     0,     0,   147,   148,   149,   150,   151,   152,     0,
     153,   154,   155,   156,     0,     0,     0,     0,   542,     0,
       0,   157,     0,     0,   158,   159,   160,     0,   171,   161,
     162,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   163,   164,   165,   166,   167,   168,   169,   170,
       0,     0,   147,   148,   149,   150,   151,   152,     0,   153,
     154,   155,   156,     0,     0,     0,     0,   546,     0,     0,
     157,     0,     0,   158,   159,   160,     0,   171,   161,   162,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   163,   164,   165,   166,   167,   168,   169,   170,     0,
       0,   147,   148,   149,   150,   151,   152,     0,   153,   154,
     155,   156,     0,     0,     0,     0,     0,     0,     0,   157,
       0,     0,   158,   159,   160,     0,   171,   161,   162,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     163,   164,   165,   166,   167,   168,   169,   170,     0,     0,
     147,   148,   149,   150,   151,   152,     0,   153,   154,   155,
     156,     0,     0,     0,     0,     0,     0,     0,   157,     0,
       0,   158,   159,   160,     0,   171,   161,   162,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   163,
     164,   165,   166,   167,     0,   169,   170,   147,   148,   149,
     150,   151,   152,     0,   153,   154,   155,   156,     0,     0,
       0,     0,     0,     0,     0,   157,     0,     0,   158,   159,
     160,     0,     0,   161,   162,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   163,   164,   165,   166,
       0,     0,   169,   170
};

static const yytype_int16 yycheck[] =
{
       2,     2,    69,   359,   341,   178,    48,    28,    10,   377,
      12,   277,    48,    48,    55,   306,   330,   194,    48,     0,
      53,    55,    36,    55,     6,   291,    55,    29,    30,    31,
      32,    33,     3,    36,    16,    56,    66,    67,   329,    53,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,    55,   115,   442,    77,    59,   118,   415,   115,
      82,   116,   115,   445,   118,   115,   118,    89,    59,   118,
      53,    93,   462,    53,    53,    97,    98,   465,   100,   101,
     102,   274,   472,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   380,   117,    49,   294,    57,   278,
      55,    55,   281,   197,    59,    59,    89,    24,     2,    89,
     492,    64,    65,    57,   490,    54,    55,   211,    12,    36,
      37,    54,    55,    54,    55,   147,   148,   149,   150,   151,
     152,    53,   154,   155,   156,   157,   158,    53,   526,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   485,   444,   445,    53,   177,   178,   159,   160,    54,
      55,    53,   184,   184,    48,   187,     5,     6,    53,   191,
     349,    36,   266,    55,    53,   509,    53,    59,    23,   471,
     472,    48,    66,    67,    53,    24,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    53,    36,    37,    57,
     492,    55,    53,    48,   496,    59,   385,    54,    55,    55,
      53,   390,   391,    59,   393,   302,    54,    55,   397,    55,
     399,    66,    67,    59,    53,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    55,    54,    55,    53,    59,
      53,   420,    54,    55,    54,    55,   425,    53,   427,   428,
      53,   430,   274,    54,    55,    53,   278,   279,    53,   281,
      54,    55,   284,   285,   286,    53,   288,   289,   290,   448,
     115,    54,    55,    53,   453,    53,   298,   456,    53,   301,
      54,    55,   304,    53,   306,    54,    55,    53,   382,    53,
     184,    54,    55,    54,    55,   474,    42,    43,    44,    45,
     479,    54,    55,    49,    54,    55,    52,   329,   330,   331,
      53,   333,    53,   407,    54,    55,    53,    63,    64,    65,
      53,   500,    68,    69,   503,   347,    57,   349,    53,   351,
     352,    53,   354,    54,    55,    14,   515,    35,   517,    54,
      55,    87,    88,    35,   366,    54,    55,     5,     6,    53,
      58,    36,    36,    35,   376,    36,    53,    23,    23,     3,
      55,    54,    53,   385,    54,    39,   388,    55,   390,   391,
      53,   393,    58,   395,   118,   397,   398,   399,    56,   401,
      44,    45,    57,    36,   278,    49,    58,   281,    52,    48,
      58,   413,   413,    55,    48,     8,    26,    54,   420,   421,
      64,    65,    57,   425,    54,   427,   428,    54,   430,   431,
      58,   505,    66,    67,    54,    54,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,   448,   449,    54,   523,
      54,   453,    59,    58,   456,   457,    59,    42,    43,    44,
      45,    55,   464,   537,    49,   467,   467,    52,    58,    58,
      54,    48,   474,   475,    36,   349,    59,   479,   480,    64,
      65,   483,   484,   485,    58,    57,    59,    57,   490,   490,
      59,    57,    56,    48,    59,    48,    57,    57,   500,    57,
     336,   503,   337,   472,   435,   304,   508,   509,    -1,    -1,
      -1,   385,    -1,   515,    -1,   517,   390,   391,    -1,   393,
      -1,    -1,    -1,   397,    -1,   399,    -1,    -1,    -1,   531,
      -1,    -1,    -1,   535,   535,    -1,    -1,    -1,   540,   413,
      42,    43,    44,    45,    -1,    -1,   420,    49,    -1,    -1,
      52,   425,    -1,   427,   428,    -1,   430,    -1,    -1,    -1,
      -1,    -1,    64,    65,    -1,    -1,    68,    69,    42,    43,
      44,    45,    46,    47,   448,    49,    50,    51,    52,   453,
      -1,    -1,   456,    -1,    -1,    -1,    60,    -1,    -1,    63,
      64,    65,    -1,   467,    68,    69,    -1,    -1,    -1,    -1,
     474,    -1,    -1,    -1,    -1,   479,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,   490,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   500,    -1,    -1,   503,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,     6,
       7,   515,     9,   517,    11,    -1,    13,    14,    15,    -1,
      -1,    -1,    -1,    20,    21,    22,    -1,    24,    25,    -1,
      27,   535,    29,    30,    -1,    -1,    33,    34,    35,    36,
      -1,    38,    39,    40,    41,    -1,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,     6,     7,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,    30,    -1,
      -1,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
      -1,    43,    44,    42,    43,    44,    45,    46,    47,    -1,
      49,    53,    51,    52,    -1,    -1,    -1,    -1,    -1,    61,
      62,    60,    -1,    -1,    63,    64,    65,    -1,    -1,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    -1,    -1,    87,    88,
      -1,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,     5,     6,     7,    -1,     9,    -1,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,
      21,    22,    -1,    24,    25,    26,    27,    -1,    -1,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    38,    39,    40,
      41,    -1,    43,    44,    42,    43,    44,    45,    46,    47,
      -1,    49,    53,    51,    52,    -1,    -1,    -1,    -1,    -1,
      61,    62,    -1,    -1,    -1,    63,    64,    65,    -1,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    -1,    -1,    87,
      88,    -1,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,     5,     6,     7,    -1,     9,    -1,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    -1,    20,
      21,    22,    -1,    24,    25,    -1,    27,    -1,    -1,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    38,    39,    40,
      41,    -1,    43,    44,    42,    43,    44,    45,    46,    47,
      -1,    49,    53,    -1,    52,    -1,    -1,    58,    -1,    -1,
      61,    62,    -1,    -1,    -1,    63,    64,    65,    -1,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    -1,    -1,    87,
      88,    -1,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,     5,     6,     7,    -1,     9,    -1,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    -1,    20,
      21,    22,    -1,    24,    25,    -1,    27,    -1,    -1,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    38,    39,    40,
      41,    -1,    43,    44,    42,    43,    44,    45,    46,    47,
      -1,    49,    53,    -1,    52,    -1,    -1,    -1,    59,    -1,
      61,    62,    -1,    -1,    -1,    63,    64,    65,    -1,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    84,    -1,    -1,    87,
      88,    -1,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,     5,     6,     7,    -1,     9,    -1,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    -1,    20,
      21,    22,    -1,    24,    25,    -1,    27,    -1,    -1,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    38,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    59,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,     5,     6,     7,    -1,     9,    -1,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    -1,    20,
      21,    22,    -1,    24,    25,    -1,    27,    -1,    -1,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    38,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    59,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,     5,     6,     7,    -1,     9,    -1,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    -1,    20,
      21,    22,    -1,    24,    25,    -1,    27,    -1,    -1,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    38,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
       6,     7,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,    30,    -1,    -1,    33,    34,    35,
      36,    -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    57,    58,    -1,    -1,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,     7,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
       6,     7,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,    30,    -1,    -1,    33,    34,    35,
      36,    -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,     7,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
       6,     7,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,    30,    -1,    -1,    33,    34,    35,
      36,    -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,     7,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
       6,     7,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,    30,    -1,    -1,    33,    34,    35,
      36,    -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,     7,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    -1,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,     5,     6,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
       6,     7,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,    30,    -1,    -1,    33,    34,    35,
      36,    -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,     7,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    -1,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,     5,     6,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
       6,     7,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,    30,    -1,    -1,    33,    34,    35,
      36,    -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,     7,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
       6,     7,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,    30,    -1,    -1,    33,    34,    35,
      36,    -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,     7,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
       6,     7,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,    30,    -1,    -1,    33,    34,    35,
      36,    -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,     7,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
       6,     7,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,    30,    -1,    -1,    33,    34,    35,
      36,    -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,    42,
      43,    44,    45,    46,    47,    -1,    49,    50,    51,    52,
      -1,    54,    55,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      63,    64,    65,    -1,    -1,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    -1,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    52,    -1,
      -1,    55,    -1,    57,    -1,    -1,    60,    -1,    -1,    63,
      64,    65,    -1,   116,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    -1,    42,    43,    44,
      45,    46,    47,    -1,    49,    50,    51,    52,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    63,    64,
      65,    -1,   116,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    90,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    51,    52,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    63,    64,    65,
      -1,   116,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    90,    42,    43,    44,    45,    46,
      47,    -1,    49,    50,    51,    52,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    60,    -1,    -1,    63,    64,    65,    -1,
     116,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    90,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    63,    64,    65,    -1,   116,
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
      46,    47,    -1,    49,    50,    51,    52,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    60,    -1,   116,    63,    64,    65,
      -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,    -1,
     116,    63,    64,    65,    -1,    -1,    68,    69,    -1,    -1,
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
      47,    -1,    49,    50,    51,    52,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    60,    -1,    -1,    63,    64,    65,    -1,
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
      50,    51,    52,    -1,    -1,    -1,    56,    -1,    -1,    -1,
      60,    -1,    -1,    63,    64,    65,    -1,   116,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      -1,    42,    43,    44,    45,    46,    47,    -1,    49,    50,
      51,    52,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,
      -1,    -1,    63,    64,    65,    -1,   116,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    -1,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    -1,    -1,    -1,    56,    -1,    -1,    -1,    60,    -1,
      -1,    63,    64,    65,    -1,   116,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    -1,    42,
      43,    44,    45,    46,    47,    -1,    49,    50,    51,    52,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      63,    64,    65,    -1,   116,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    -1,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    63,
      64,    65,    -1,   116,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    90,    42,    43,    44,
      45,    46,    47,    -1,    49,    50,    51,    52,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    63,    64,
      65,    -1,   116,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    -1,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    51,    52,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    60,    -1,    -1,    63,    64,    65,
      -1,   116,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    -1,    42,    43,    44,    45,    46,
      47,    -1,    49,    50,    51,    52,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    60,    -1,    -1,    63,    64,    65,    -1,
     116,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    -1,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    -1,    -1,    -1,    -1,    57,
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
      -1,    49,    50,    51,    52,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    60,    -1,    -1,    63,    64,    65,    -1,   116,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    -1,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    51,    52,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    60,    -1,    -1,    63,    64,    65,    -1,   116,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    -1,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    51,    52,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      60,    -1,    -1,    63,    64,    65,    -1,   116,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      -1,    42,    43,    44,    45,    46,    47,    -1,    49,    50,
      51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    63,    64,    65,    -1,   116,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    -1,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    63,    64,    65,    -1,   116,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    -1,    87,    88,    42,    43,    44,
      45,    46,    47,    -1,    49,    50,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    63,    64,
      65,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      -1,    -1,    87,    88
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
     147,   147,   147,   147,   147,   147,    58,   147,    35,   128,
     129,   130,    36,    54,   115,   134,   147,   134,    54,    55,
      59,    54,    59,   126,    53,    23,    57,   147,    57,    23,
      23,   147,    54,    54,   124,   127,    54,    55,    55,    57,
     159,    55,   118,   159,    55,    54,    53,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    53,
     115,    56,   159,    48,   116,    54,    55,    53,   134,    56,
     133,   133,   138,   147,    57,   138,   147,    91,   147,    54,
     147,    57,    57,   147,    91,   147,   147,   133,    58,    58,
      59,   127,    39,   147,    59,   147,    48,   151,    59,   154,
     156,   156,   163,   147,    59,   147,    48,    58,   130,   128,
     118,    36,    55,   135,   135,     8,    54,   147,    90,   138,
      54,    54,   147,    54,   147,    57,   147,    54,    90,    54,
      54,    26,   140,   140,    57,    54,    57,    58,   147,    54,
      54,   118,   147,   125,    54,   133,   159,    54,    54,   138,
      54,    90,   147,   138,   138,    54,   138,    54,    54,   147,
      54,    90,   138,   147,   138,    58,   141,   147,    59,    59,
     159,    59,    58,   135,    58,    58,   138,   147,    54,    92,
     138,   138,   138,    54,   138,   147,    54,    92,    24,    36,
      37,   160,   161,   162,    28,    56,    59,   125,    54,   132,
     136,   137,   161,   136,    54,    92,   138,   147,   138,    54,
      92,   138,   147,    48,    48,   115,    36,    59,   162,   147,
     125,    59,    58,    57,    59,   132,   137,    59,   138,   147,
      54,   138,   147,    54,   147,    58,   147,   163,    48,   115,
      57,    19,   140,   136,    57,    54,   138,    54,   138,    57,
     159,    57,   118,    58,   147,   163,    56,    59,   138,   138,
      59,    48,   159,    57,   118,   125,    57,    58,   147,    59,
      48,   159,    57,    57,   147,    59,    57,    57
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
     148,   148,   149,   149,   150,   150,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   152,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   153,   153,   153,   154,   154,   155,   155,   156,   156,
     157,   157,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   159,   159,   160,   160,   161,
     161,   162,   162,   162,   162,   162,   162,   162,   162,   163,
     163
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
       4,     4,     4,     4,     4,     1,     3,     0,     1,     1,
       2,     4,     6,     5,     7,     4,     7,     9,     8,     1,
       3
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
#line 2761 "CMDgram.cpp"
    break;

  case 3: /* decl_list: %empty  */
#line 222 "CMDgram.y"
      { (yyval.stmt) = nil; }
#line 2767 "CMDgram.cpp"
    break;

  case 4: /* decl_list: decl_list decl  */
#line 224 "CMDgram.y"
      { if(!Script::gStatementList) { Script::gStatementList = (yyvsp[0].stmt); } else { Script::gStatementList->append((yyvsp[0].stmt)); } }
#line 2773 "CMDgram.cpp"
    break;

  case 5: /* decl: stmt  */
#line 229 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2779 "CMDgram.cpp"
    break;

  case 6: /* decl: fn_decl_stmt  */
#line 231 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2785 "CMDgram.cpp"
    break;

  case 7: /* decl: package_decl  */
#line 233 "CMDgram.y"
     { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2791 "CMDgram.cpp"
    break;

  case 8: /* package_decl: rwPACKAGE IDENT '{' fn_decl_list '}' ';'  */
#line 238 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-2].stmt); for(StmtNode *walk = ((yyvsp[-2].stmt));walk;walk = walk->getNext() ) walk->setPackage((yyvsp[-4].s).value); }
#line 2797 "CMDgram.cpp"
    break;

  case 9: /* fn_decl_list: fn_decl_stmt  */
#line 243 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2803 "CMDgram.cpp"
    break;

  case 10: /* fn_decl_list: fn_decl_list fn_decl_stmt  */
#line 245 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-1].stmt); ((yyvsp[-1].stmt))->append((yyvsp[0].stmt));  }
#line 2809 "CMDgram.cpp"
    break;

  case 11: /* statement_list: %empty  */
#line 250 "CMDgram.y"
      { (yyval.stmt) = nil; }
#line 2815 "CMDgram.cpp"
    break;

  case 12: /* statement_list: statement_list stmt  */
#line 252 "CMDgram.y"
      { if(!(yyvsp[-1].stmt)) { (yyval.stmt) = (yyvsp[0].stmt); } else { ((yyvsp[-1].stmt))->append((yyvsp[0].stmt)); (yyval.stmt) = (yyvsp[-1].stmt); } }
#line 2821 "CMDgram.cpp"
    break;

  case 19: /* stmt: rwBREAK ';'  */
#line 263 "CMDgram.y"
      { (yyval.stmt) = BreakStmtNode::alloc( (yyvsp[-1].i).lineNumber ); }
#line 2827 "CMDgram.cpp"
    break;

  case 20: /* stmt: rwCONTINUE ';'  */
#line 265 "CMDgram.y"
      { (yyval.stmt) = ContinueStmtNode::alloc( (yyvsp[-1].i).lineNumber ); }
#line 2833 "CMDgram.cpp"
    break;

  case 21: /* stmt: rwRETURN ';'  */
#line 267 "CMDgram.y"
      { (yyval.stmt) = ReturnStmtNode::alloc( (yyvsp[-1].i).lineNumber, NULL ); }
#line 2839 "CMDgram.cpp"
    break;

  case 22: /* stmt: rwRETURN expr ';'  */
#line 269 "CMDgram.y"
      { (yyval.stmt) = ReturnStmtNode::alloc( (yyvsp[-2].i).lineNumber, (yyvsp[-1].expr) ); }
#line 2845 "CMDgram.cpp"
    break;

  case 23: /* stmt: rwRETURN '{' expr_list '}' ';'  */
#line 272 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-4].i).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-2].expr);
         (yyval.stmt) = ReturnStmtNode::alloc( (yyvsp[-4].i).lineNumber, vecNode );
      }
#line 2855 "CMDgram.cpp"
    break;

  case 24: /* stmt: expression_stmt ';'  */
#line 279 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-1].stmt); }
#line 2861 "CMDgram.cpp"
    break;

  case 25: /* stmt: TTAG '=' expr ';'  */
#line 281 "CMDgram.y"
      { (yyval.stmt) = TTagSetStmtNode::alloc( (yyvsp[-3].s).lineNumber, (yyvsp[-3].s).value, (yyvsp[-1].expr), NULL ); }
#line 2867 "CMDgram.cpp"
    break;

  case 26: /* stmt: TTAG '=' expr ',' expr ';'  */
#line 283 "CMDgram.y"
      { (yyval.stmt) = TTagSetStmtNode::alloc( (yyvsp[-5].s).lineNumber, (yyvsp[-5].s).value, (yyvsp[-3].expr), (yyvsp[-1].expr) ); }
#line 2873 "CMDgram.cpp"
    break;

  case 27: /* stmt: DOCBLOCK  */
#line 285 "CMDgram.y"
      { (yyval.stmt) = StrConstNode::alloc( (yyvsp[0].str).lineNumber, (yyvsp[0].str).value, false, true ); }
#line 2879 "CMDgram.cpp"
    break;

  case 28: /* fn_decl_stmt: rwDEFINE IDENT '(' var_list_decl ')' '{' statement_list '}'  */
#line 291 "CMDgram.y"
      { (yyval.stmt) = FunctionDeclStmtNode::alloc( (yyvsp[-7].i).lineNumber, (yyvsp[-6].s).value, NULL, (yyvsp[-4].var), (yyvsp[-1].stmt) ); }
#line 2885 "CMDgram.cpp"
    break;

  case 29: /* fn_decl_stmt: rwDEFINE IDENT opCOLONCOLON IDENT '(' var_list_decl ')' '{' statement_list '}'  */
#line 294 "CMDgram.y"
      { (yyval.stmt) = FunctionDeclStmtNode::alloc( (yyvsp[-9].i).lineNumber, (yyvsp[-6].s).value, (yyvsp[-8].s).value, (yyvsp[-4].var), (yyvsp[-1].stmt) ); }
#line 2891 "CMDgram.cpp"
    break;

  case 30: /* var_list_decl: %empty  */
#line 299 "CMDgram.y"
      { (yyval.var) = NULL; }
#line 2897 "CMDgram.cpp"
    break;

  case 31: /* var_list_decl: var_list  */
#line 301 "CMDgram.y"
      { (yyval.var) = (yyvsp[0].var); }
#line 2903 "CMDgram.cpp"
    break;

  case 32: /* var_list: param  */
#line 306 "CMDgram.y"
      { (yyval.var) = (yyvsp[0].var); }
#line 2909 "CMDgram.cpp"
    break;

  case 33: /* var_list: var_list ',' param  */
#line 308 "CMDgram.y"
      { (yyval.var) = (yyvsp[-2].var); ((StmtNode*)((yyvsp[-2].var)))->append((StmtNode*)(yyvsp[0].var) ); }
#line 2915 "CMDgram.cpp"
    break;

  case 34: /* param: VAR  */
#line 325 "CMDgram.y"
      { (yyval.var) = VarNode::allocParam((yyvsp[0].s).lineNumber, (yyvsp[0].s).value, NULL); }
#line 2921 "CMDgram.cpp"
    break;

  case 35: /* param: VAR '?'  */
#line 327 "CMDgram.y"
      { (yyval.var) = VarNode::allocParam((yyvsp[-1].s).lineNumber, (yyvsp[-1].s).value, NULL); }
#line 2927 "CMDgram.cpp"
    break;

  case 36: /* param: VAR '=' expr  */
#line 329 "CMDgram.y"
      { (yyval.var) = VarNode::allocParam((yyvsp[-2].s).lineNumber, (yyvsp[-2].s).value, (yyvsp[0].expr)); }
#line 2933 "CMDgram.cpp"
    break;

  case 37: /* param: VAR '?' '=' expr  */
#line 331 "CMDgram.y"
      { (yyval.var) = VarNode::allocParam((yyvsp[-3].s).lineNumber, (yyvsp[-3].s).value, (yyvsp[0].expr)); }
#line 2939 "CMDgram.cpp"
    break;

  case 38: /* datablock_decl: rwDATABLOCK class_name_expr '(' expr parent_block ')' '{' slot_assign_list_opt '}' ';'  */
#line 336 "CMDgram.y"
      { (yyval.stmt) = ObjectDeclNode::alloc( (yyvsp[-9].i).lineNumber, (yyvsp[-8].expr), (yyvsp[-6].expr), NULL, (yyvsp[-5].s).value, (yyvsp[-2].slist), NULL, true, false, false); }
#line 2945 "CMDgram.cpp"
    break;

  case 39: /* object_decl: rwDECLARE class_name_expr '(' object_name parent_block object_args ')' '{' object_declare_block '}'  */
#line 341 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-9].i).lineNumber, (yyvsp[-8].expr), (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-5].s).value, (yyvsp[-1].odcl).slots, (yyvsp[-1].odcl).decls, false, false, false); }
#line 2951 "CMDgram.cpp"
    break;

  case 40: /* object_decl: rwDECLARE class_name_expr '(' object_name parent_block object_args ')'  */
#line 343 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-6].i).lineNumber, (yyvsp[-5].expr), (yyvsp[-3].expr), (yyvsp[-1].expr), (yyvsp[-2].s).value, NULL, NULL, false, false, false); }
#line 2957 "CMDgram.cpp"
    break;

  case 41: /* object_decl: rwDECLARE class_name_expr '(' '[' object_name ']' parent_block object_args ')' '{' object_declare_block '}'  */
#line 345 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-11].i).lineNumber, (yyvsp[-10].expr), (yyvsp[-7].expr), (yyvsp[-4].expr), (yyvsp[-5].s).value, (yyvsp[-1].odcl).slots, (yyvsp[-1].odcl).decls, false, true, false); }
#line 2963 "CMDgram.cpp"
    break;

  case 42: /* object_decl: rwDECLARE class_name_expr '(' '[' object_name ']' parent_block object_args ')'  */
#line 347 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-8].i).lineNumber, (yyvsp[-7].expr), (yyvsp[-4].expr), (yyvsp[-1].expr), (yyvsp[-2].s).value, NULL, NULL, false, true, false); }
#line 2969 "CMDgram.cpp"
    break;

  case 43: /* object_decl: rwDECLARESINGLETON class_name_expr '(' object_name parent_block object_args ')' '{' object_declare_block '}'  */
#line 349 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-9].i).lineNumber, (yyvsp[-8].expr), (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-5].s).value, (yyvsp[-1].odcl).slots, (yyvsp[-1].odcl).decls, false, false, true); }
#line 2975 "CMDgram.cpp"
    break;

  case 44: /* object_decl: rwDECLARESINGLETON class_name_expr '(' object_name parent_block object_args ')'  */
#line 351 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-6].i).lineNumber, (yyvsp[-5].expr), (yyvsp[-3].expr), (yyvsp[-1].expr), (yyvsp[-2].s).value, NULL, NULL, false, false, true); }
#line 2981 "CMDgram.cpp"
    break;

  case 45: /* parent_block: %empty  */
#line 356 "CMDgram.y"
      { (yyval.s).value = NULL; }
#line 2987 "CMDgram.cpp"
    break;

  case 46: /* parent_block: ':' IDENT  */
#line 358 "CMDgram.y"
      { (yyval.s) = (yyvsp[0].s); }
#line 2993 "CMDgram.cpp"
    break;

  case 47: /* object_name: %empty  */
#line 363 "CMDgram.y"
      { (yyval.expr) = StrConstNode::alloc( CodeBlock::smCurrentParser->getCurrentLine(), "", false); }
#line 2999 "CMDgram.cpp"
    break;

  case 48: /* object_name: expr  */
#line 365 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3005 "CMDgram.cpp"
    break;

  case 49: /* object_args: %empty  */
#line 370 "CMDgram.y"
      { (yyval.expr) = NULL; }
#line 3011 "CMDgram.cpp"
    break;

  case 50: /* object_args: ',' expr_list  */
#line 372 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3017 "CMDgram.cpp"
    break;

  case 51: /* object_declare_block: %empty  */
#line 377 "CMDgram.y"
      { (yyval.odcl).slots = NULL; (yyval.odcl).decls = NULL; }
#line 3023 "CMDgram.cpp"
    break;

  case 52: /* object_declare_block: slot_assign_list  */
#line 379 "CMDgram.y"
      { (yyval.odcl).slots = (yyvsp[0].slist); (yyval.odcl).decls = NULL; }
#line 3029 "CMDgram.cpp"
    break;

  case 53: /* object_declare_block: object_decl_list  */
#line 381 "CMDgram.y"
      { (yyval.odcl).slots = NULL; (yyval.odcl).decls = (yyvsp[0].od); }
#line 3035 "CMDgram.cpp"
    break;

  case 54: /* object_declare_block: slot_assign_list object_decl_list  */
#line 383 "CMDgram.y"
      { (yyval.odcl).slots = (yyvsp[-1].slist); (yyval.odcl).decls = (yyvsp[0].od); }
#line 3041 "CMDgram.cpp"
    break;

  case 55: /* object_decl_list: object_decl ';'  */
#line 388 "CMDgram.y"
      { (yyval.od) = (yyvsp[-1].od); }
#line 3047 "CMDgram.cpp"
    break;

  case 56: /* object_decl_list: object_decl_list object_decl ';'  */
#line 390 "CMDgram.y"
      { (yyvsp[-2].od)->append((yyvsp[-1].od)); (yyval.od) = (yyvsp[-2].od); }
#line 3053 "CMDgram.cpp"
    break;

  case 57: /* stmt_block: '{' statement_list '}'  */
#line 395 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-1].stmt); }
#line 3059 "CMDgram.cpp"
    break;

  case 58: /* stmt_block: stmt  */
#line 397 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[0].stmt); }
#line 3065 "CMDgram.cpp"
    break;

  case 59: /* switch_stmt: rwSWITCH '(' expr ')' '{' case_block '}'  */
#line 402 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-1].ifnode); (yyvsp[-1].ifnode)->propagateSwitchExpr((yyvsp[-4].expr), false); }
#line 3071 "CMDgram.cpp"
    break;

  case 60: /* switch_stmt: rwSWITCHSTR '(' expr ')' '{' case_block '}'  */
#line 404 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-1].ifnode); (yyvsp[-1].ifnode)->propagateSwitchExpr((yyvsp[-4].expr), true); }
#line 3077 "CMDgram.cpp"
    break;

  case 61: /* case_block: rwCASE case_expr ':' statement_list  */
#line 412 "CMDgram.y"
      { (yyval.ifnode) = IfStmtNode::alloc( (yyvsp[-3].i).lineNumber, (yyvsp[-2].expr), (yyvsp[0].stmt), NULL, false); }
#line 3083 "CMDgram.cpp"
    break;

  case 62: /* case_block: rwCASE case_expr ':' statement_list rwDEFAULT ':' statement_list  */
#line 414 "CMDgram.y"
      { (yyval.ifnode) = IfStmtNode::alloc( (yyvsp[-6].i).lineNumber, (yyvsp[-5].expr), (yyvsp[-3].stmt), (yyvsp[0].stmt), false); }
#line 3089 "CMDgram.cpp"
    break;

  case 63: /* case_block: rwCASE case_expr ':' statement_list case_block  */
#line 416 "CMDgram.y"
      { (yyval.ifnode) = IfStmtNode::alloc( (yyvsp[-4].i).lineNumber, (yyvsp[-3].expr), (yyvsp[-1].stmt), (yyvsp[0].ifnode), true); }
#line 3095 "CMDgram.cpp"
    break;

  case 64: /* case_expr: expr  */
#line 421 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3101 "CMDgram.cpp"
    break;

  case 65: /* case_expr: case_expr rwCASEOR expr  */
#line 423 "CMDgram.y"
      { ((yyvsp[-2].expr))->append((yyvsp[0].expr)); (yyval.expr) = (yyvsp[-2].expr); }
#line 3107 "CMDgram.cpp"
    break;

  case 66: /* if_stmt: rwIF '(' expr ')' stmt_block  */
#line 428 "CMDgram.y"
      { (yyval.stmt) = IfStmtNode::alloc((yyvsp[-4].i).lineNumber, (yyvsp[-2].expr), (yyvsp[0].stmt), NULL, false); }
#line 3113 "CMDgram.cpp"
    break;

  case 67: /* if_stmt: rwIF '(' expr ')' stmt_block rwELSE stmt_block  */
#line 430 "CMDgram.y"
      { (yyval.stmt) = IfStmtNode::alloc((yyvsp[-6].i).lineNumber, (yyvsp[-4].expr), (yyvsp[-2].stmt), (yyvsp[0].stmt), false); }
#line 3119 "CMDgram.cpp"
    break;

  case 68: /* while_stmt: rwWHILE '(' expr ')' stmt_block  */
#line 435 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-4].i).lineNumber, nil, (yyvsp[-2].expr), nil, (yyvsp[0].stmt), false); }
#line 3125 "CMDgram.cpp"
    break;

  case 69: /* while_stmt: rwDO stmt_block rwWHILE '(' expr ')'  */
#line 437 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-3].i).lineNumber, nil, (yyvsp[-1].expr), nil, (yyvsp[-4].stmt), true); }
#line 3131 "CMDgram.cpp"
    break;

  case 70: /* for_stmt: rwFOR '(' expr ';' expr ';' expr ')' stmt_block  */
#line 442 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-8].i).lineNumber, (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), false); }
#line 3137 "CMDgram.cpp"
    break;

  case 71: /* for_stmt: rwFOR '(' expr ';' expr ';' ')' stmt_block  */
#line 444 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-7].i).lineNumber, (yyvsp[-5].expr), (yyvsp[-3].expr), NULL, (yyvsp[0].stmt), false); }
#line 3143 "CMDgram.cpp"
    break;

  case 72: /* for_stmt: rwFOR '(' expr ';' ';' expr ')' stmt_block  */
#line 446 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-7].i).lineNumber, (yyvsp[-5].expr), NULL, (yyvsp[-2].expr), (yyvsp[0].stmt), false); }
#line 3149 "CMDgram.cpp"
    break;

  case 73: /* for_stmt: rwFOR '(' expr ';' ';' ')' stmt_block  */
#line 448 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-6].i).lineNumber, (yyvsp[-4].expr), NULL, NULL, (yyvsp[0].stmt), false); }
#line 3155 "CMDgram.cpp"
    break;

  case 74: /* for_stmt: rwFOR '(' ';' expr ';' expr ')' stmt_block  */
#line 450 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-7].i).lineNumber, NULL, (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), false); }
#line 3161 "CMDgram.cpp"
    break;

  case 75: /* for_stmt: rwFOR '(' ';' expr ';' ')' stmt_block  */
#line 452 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-6].i).lineNumber, NULL, (yyvsp[-3].expr), NULL, (yyvsp[0].stmt), false); }
#line 3167 "CMDgram.cpp"
    break;

  case 76: /* for_stmt: rwFOR '(' ';' ';' expr ')' stmt_block  */
#line 454 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-6].i).lineNumber, NULL, NULL, (yyvsp[-2].expr), (yyvsp[0].stmt), false); }
#line 3173 "CMDgram.cpp"
    break;

  case 77: /* for_stmt: rwFOR '(' ';' ';' ')' stmt_block  */
#line 456 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-5].i).lineNumber, NULL, NULL, NULL, (yyvsp[0].stmt), false); }
#line 3179 "CMDgram.cpp"
    break;

  case 78: /* for_stmt: rwFOR '(' VAR rwIN expr opDOTDOT expr ')' stmt_block  */
#line 460 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-8].i).lineNumber, (yyvsp[-6].s).value, (yyvsp[-4].expr), (yyvsp[-2].expr), NULL, (yyvsp[0].stmt), 2 ); }
#line 3185 "CMDgram.cpp"
    break;

  case 79: /* for_stmt: rwFOR '(' VAR rwIN rwRANGE expr opDOTDOT expr ')' stmt_block  */
#line 463 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-9].i).lineNumber, (yyvsp[-7].s).value, (yyvsp[-4].expr), (yyvsp[-2].expr), NULL, (yyvsp[0].stmt), 102 ); }
#line 3191 "CMDgram.cpp"
    break;

  case 80: /* for_stmt: rwFOR '(' VAR rwIN expr opDOTDOT expr rwSTEP expr ')' stmt_block  */
#line 466 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-10].i).lineNumber, (yyvsp[-8].s).value, (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), 3 ); }
#line 3197 "CMDgram.cpp"
    break;

  case 81: /* for_stmt: rwFOR '(' VAR rwIN rwRANGE expr opDOTDOT expr rwSTEP expr ')' stmt_block  */
#line 469 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-11].i).lineNumber, (yyvsp[-9].s).value, (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), 103 ); }
#line 3203 "CMDgram.cpp"
    break;

  case 82: /* for_stmt: rwFOR '(' VAR rwIN rwRANGE expr ')' stmt_block  */
#line 472 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-7].i).lineNumber, (yyvsp[-5].s).value, (yyvsp[-2].expr), NULL, NULL, (yyvsp[0].stmt), 104 ); }
#line 3209 "CMDgram.cpp"
    break;

  case 83: /* foreach_stmt: rwFOREACH '(' VAR rwIN expr ')' stmt_block  */
#line 483 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc( (yyvsp[-6].i).lineNumber, (yyvsp[-4].s).value, (yyvsp[-2].expr), NULL,NULL, (yyvsp[0].stmt), 0 ); }
#line 3215 "CMDgram.cpp"
    break;

  case 84: /* foreach_stmt: rwFOREACHSTR '(' VAR rwIN expr ')' stmt_block  */
#line 486 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc( (yyvsp[-6].i).lineNumber, (yyvsp[-4].s).value, (yyvsp[-2].expr), NULL,NULL, (yyvsp[0].stmt), 1 ); }
#line 3221 "CMDgram.cpp"
    break;

  case 85: /* foreach_stmt: rwFOREACH '(' VAR rwIN expr opDOTDOT expr ')' stmt_block  */
#line 489 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-8].i).lineNumber, (yyvsp[-6].s).value, (yyvsp[-4].expr), (yyvsp[-2].expr), NULL, (yyvsp[0].stmt), 2 ); }
#line 3227 "CMDgram.cpp"
    break;

  case 86: /* foreach_stmt: rwFOREACH '(' VAR rwIN rwRANGE expr opDOTDOT expr ')' stmt_block  */
#line 492 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-9].i).lineNumber, (yyvsp[-7].s).value, (yyvsp[-4].expr), (yyvsp[-2].expr), NULL, (yyvsp[0].stmt), 102 ); }
#line 3233 "CMDgram.cpp"
    break;

  case 87: /* foreach_stmt: rwFOREACH '(' VAR rwIN expr opDOTDOT expr rwSTEP expr ')' stmt_block  */
#line 495 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-10].i).lineNumber, (yyvsp[-8].s).value, (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), 3 ); }
#line 3239 "CMDgram.cpp"
    break;

  case 88: /* foreach_stmt: rwFOREACH '(' VAR rwIN rwRANGE expr opDOTDOT expr rwSTEP expr ')' stmt_block  */
#line 498 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-11].i).lineNumber, (yyvsp[-9].s).value, (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), 103 ); }
#line 3245 "CMDgram.cpp"
    break;

  case 89: /* foreach_stmt: rwFOREACH '(' VAR rwIN rwRANGE expr ')' stmt_block  */
#line 501 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-7].i).lineNumber, (yyvsp[-5].s).value, (yyvsp[-2].expr), NULL, NULL, (yyvsp[0].stmt), 104 ); }
#line 3251 "CMDgram.cpp"
    break;

  case 90: /* expression_stmt: stmt_expr  */
#line 506 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[0].expr); }
#line 3257 "CMDgram.cpp"
    break;

  case 91: /* expr: stmt_expr  */
#line 511 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3263 "CMDgram.cpp"
    break;

  case 92: /* expr: '(' expr ')'  */
#line 513 "CMDgram.y"
      { (yyval.expr) = (yyvsp[-1].expr); }
#line 3269 "CMDgram.cpp"
    break;

  case 93: /* expr: expr '^' expr  */
#line 515 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3275 "CMDgram.cpp"
    break;

  case 94: /* expr: expr '%' expr  */
#line 517 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3281 "CMDgram.cpp"
    break;

  case 95: /* expr: expr '&' expr  */
#line 519 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3287 "CMDgram.cpp"
    break;

  case 96: /* expr: expr '|' expr  */
#line 521 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3293 "CMDgram.cpp"
    break;

  case 97: /* expr: expr '+' expr  */
#line 523 "CMDgram.y"
      { (yyval.expr) = FloatBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3299 "CMDgram.cpp"
    break;

  case 98: /* expr: expr '-' expr  */
#line 525 "CMDgram.y"
      { (yyval.expr) = FloatBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3305 "CMDgram.cpp"
    break;

  case 99: /* expr: expr '*' expr  */
#line 527 "CMDgram.y"
      { (yyval.expr) = FloatBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3311 "CMDgram.cpp"
    break;

  case 100: /* expr: expr '/' expr  */
#line 529 "CMDgram.y"
      { (yyval.expr) = FloatBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3317 "CMDgram.cpp"
    break;

  case 101: /* expr: '-' expr  */
#line 531 "CMDgram.y"
      { (yyval.expr) = FloatUnaryExprNode::alloc( (yyvsp[-1].i).lineNumber, (yyvsp[-1].i).value, (yyvsp[0].expr)); }
#line 3323 "CMDgram.cpp"
    break;

  case 102: /* expr: '*' expr  */
#line 533 "CMDgram.y"
      { (yyval.expr) = TTagDerefNode::alloc( (yyvsp[-1].i).lineNumber, (yyvsp[0].expr) ); }
#line 3329 "CMDgram.cpp"
    break;

  case 103: /* expr: TTAG  */
#line 535 "CMDgram.y"
      { (yyval.expr) = TTagExprNode::alloc( (yyvsp[0].s).lineNumber, (yyvsp[0].s).value ); }
#line 3335 "CMDgram.cpp"
    break;

  case 104: /* expr: expr '?' expr ':' expr  */
#line 537 "CMDgram.y"
      { (yyval.expr) = ConditionalExprNode::alloc( (yyvsp[-4].expr)->dbgLineNumber, (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3341 "CMDgram.cpp"
    break;

  case 105: /* expr: expr '<' expr  */
#line 539 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3347 "CMDgram.cpp"
    break;

  case 106: /* expr: expr '>' expr  */
#line 541 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3353 "CMDgram.cpp"
    break;

  case 107: /* expr: expr opGE expr  */
#line 543 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3359 "CMDgram.cpp"
    break;

  case 108: /* expr: expr opLE expr  */
#line 545 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3365 "CMDgram.cpp"
    break;

  case 109: /* expr: expr opEQ expr  */
#line 547 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3371 "CMDgram.cpp"
    break;

  case 110: /* expr: expr opNE expr  */
#line 549 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3377 "CMDgram.cpp"
    break;

  case 111: /* expr: expr opOR expr  */
#line 551 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3383 "CMDgram.cpp"
    break;

  case 112: /* expr: expr opSHL expr  */
#line 553 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3389 "CMDgram.cpp"
    break;

  case 113: /* expr: expr opSHR expr  */
#line 555 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3395 "CMDgram.cpp"
    break;

  case 114: /* expr: expr opAND expr  */
#line 557 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3401 "CMDgram.cpp"
    break;

  case 115: /* expr: expr opSTREQ expr  */
#line 559 "CMDgram.y"
      { (yyval.expr) = StreqExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-2].expr), (yyvsp[0].expr), true); }
#line 3407 "CMDgram.cpp"
    break;

  case 116: /* expr: expr opSTRNE expr  */
#line 561 "CMDgram.y"
      { (yyval.expr) = StreqExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-2].expr), (yyvsp[0].expr), false); }
#line 3413 "CMDgram.cpp"
    break;

  case 117: /* expr: expr '@' expr  */
#line 569 "CMDgram.y"
      { (yyval.expr) = StrcatExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-2].expr), (yyvsp[0].expr), (yyvsp[-1].i).value); }
#line 3419 "CMDgram.cpp"
    break;

  case 118: /* expr: '!' expr  */
#line 571 "CMDgram.y"
      { (yyval.expr) = IntUnaryExprNode::alloc((yyvsp[-1].i).lineNumber, (yyvsp[-1].i).value, (yyvsp[0].expr)); }
#line 3425 "CMDgram.cpp"
    break;

  case 119: /* expr: '~' expr  */
#line 573 "CMDgram.y"
      { (yyval.expr) = IntUnaryExprNode::alloc((yyvsp[-1].i).lineNumber, (yyvsp[-1].i).value, (yyvsp[0].expr)); }
#line 3431 "CMDgram.cpp"
    break;

  case 120: /* expr: TAGATOM  */
#line 575 "CMDgram.y"
      { (yyval.expr) = StrConstNode::alloc( (yyvsp[0].str).lineNumber, (yyvsp[0].str).value, true); }
#line 3437 "CMDgram.cpp"
    break;

  case 121: /* expr: FLTCONST  */
#line 577 "CMDgram.y"
      { (yyval.expr) = FloatNode::alloc( (yyvsp[0].f).lineNumber, (yyvsp[0].f).value ); }
#line 3443 "CMDgram.cpp"
    break;

  case 122: /* expr: INTCONST  */
#line 579 "CMDgram.y"
      { (yyval.expr) = IntNode::alloc( (yyvsp[0].i).lineNumber, (yyvsp[0].i).value ); }
#line 3449 "CMDgram.cpp"
    break;

  case 123: /* expr: rwBREAK  */
#line 581 "CMDgram.y"
      { (yyval.expr) = ConstantNode::alloc( (yyvsp[0].i).lineNumber, StringTable->insert("break")); }
#line 3455 "CMDgram.cpp"
    break;

  case 124: /* expr: slot_acc  */
#line 583 "CMDgram.y"
      { (yyval.expr) = SlotAccessNode::alloc( (yyvsp[0].slot).lineNumber, (yyvsp[0].slot).object, (yyvsp[0].slot).array, (yyvsp[0].slot).slotName ); }
#line 3461 "CMDgram.cpp"
    break;

  case 125: /* expr: intslot_acc  */
#line 585 "CMDgram.y"
      { (yyval.expr) = InternalSlotAccessNode::alloc( (yyvsp[0].intslot).lineNumber, (yyvsp[0].intslot).object, (yyvsp[0].intslot).slotExpr, (yyvsp[0].intslot).recurse); }
#line 3467 "CMDgram.cpp"
    break;

  case 126: /* expr: IDENT  */
#line 587 "CMDgram.y"
      { (yyval.expr) = ConstantNode::alloc( (yyvsp[0].s).lineNumber, (yyvsp[0].s).value ); }
#line 3473 "CMDgram.cpp"
    break;

  case 127: /* expr: STRATOM  */
#line 589 "CMDgram.y"
      { (yyval.expr) = StrConstNode::alloc( (yyvsp[0].str).lineNumber, (yyvsp[0].str).value, false); }
#line 3479 "CMDgram.cpp"
    break;

  case 128: /* expr: VAR  */
#line 591 "CMDgram.y"
      { (yyval.expr) = (ExprNode*)VarNode::alloc( (yyvsp[0].s).lineNumber, (yyvsp[0].s).value, NULL); }
#line 3485 "CMDgram.cpp"
    break;

  case 129: /* expr: VAR '[' aidx_expr ']'  */
#line 593 "CMDgram.y"
      { (yyval.expr) = (ExprNode*)VarNode::alloc( (yyvsp[-3].s).lineNumber, (yyvsp[-3].s).value, (yyvsp[-1].expr) ); }
#line 3491 "CMDgram.cpp"
    break;

  case 130: /* slot_acc: expr '.' IDENT  */
#line 599 "CMDgram.y"
      { (yyval.slot).lineNumber = (yyvsp[-2].expr)->dbgLineNumber; (yyval.slot).object = (yyvsp[-2].expr); (yyval.slot).slotName = (yyvsp[0].s).value; (yyval.slot).array = NULL; }
#line 3497 "CMDgram.cpp"
    break;

  case 131: /* slot_acc: expr '.' IDENT '[' aidx_expr ']'  */
#line 601 "CMDgram.y"
      { (yyval.slot).lineNumber = (yyvsp[-5].expr)->dbgLineNumber; (yyval.slot).object = (yyvsp[-5].expr); (yyval.slot).slotName = (yyvsp[-3].s).value; (yyval.slot).array = (yyvsp[-1].expr); }
#line 3503 "CMDgram.cpp"
    break;

  case 132: /* intslot_acc: expr opINTNAME class_name_expr  */
#line 606 "CMDgram.y"
      { (yyval.intslot).lineNumber = (yyvsp[-2].expr)->dbgLineNumber; (yyval.intslot).object = (yyvsp[-2].expr); (yyval.intslot).slotExpr = (yyvsp[0].expr); (yyval.intslot).recurse = false; }
#line 3509 "CMDgram.cpp"
    break;

  case 133: /* intslot_acc: expr opINTNAMER class_name_expr  */
#line 608 "CMDgram.y"
      { (yyval.intslot).lineNumber = (yyvsp[-2].expr)->dbgLineNumber; (yyval.intslot).object = (yyvsp[-2].expr); (yyval.intslot).slotExpr = (yyvsp[0].expr); (yyval.intslot).recurse = true; }
#line 3515 "CMDgram.cpp"
    break;

  case 134: /* class_name_expr: IDENT  */
#line 613 "CMDgram.y"
      { (yyval.expr) = ConstantNode::alloc( (yyvsp[0].s).lineNumber, (yyvsp[0].s).value ); }
#line 3521 "CMDgram.cpp"
    break;

  case 135: /* class_name_expr: '(' expr ')'  */
#line 615 "CMDgram.y"
      { (yyval.expr) = (yyvsp[-1].expr); }
#line 3527 "CMDgram.cpp"
    break;

  case 136: /* assign_op_struct: opPLUSPLUS  */
#line 620 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[0].i).lineNumber; (yyval.asn).token = opPLUSPLUS; (yyval.asn).expr = FloatNode::alloc( (yyvsp[0].i).lineNumber, 1 ); }
#line 3533 "CMDgram.cpp"
    break;

  case 137: /* assign_op_struct: opMINUSMINUS  */
#line 622 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[0].i).lineNumber; (yyval.asn).token = opMINUSMINUS; (yyval.asn).expr = FloatNode::alloc( (yyvsp[0].i).lineNumber, 1 ); }
#line 3539 "CMDgram.cpp"
    break;

  case 138: /* assign_op_struct: opPLASN expr  */
#line 624 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '+'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3545 "CMDgram.cpp"
    break;

  case 139: /* assign_op_struct: opMIASN expr  */
#line 626 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '-'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3551 "CMDgram.cpp"
    break;

  case 140: /* assign_op_struct: opMLASN expr  */
#line 628 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '*'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3557 "CMDgram.cpp"
    break;

  case 141: /* assign_op_struct: opDVASN expr  */
#line 630 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '/'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3563 "CMDgram.cpp"
    break;

  case 142: /* assign_op_struct: opMODASN expr  */
#line 632 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '%'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3569 "CMDgram.cpp"
    break;

  case 143: /* assign_op_struct: opANDASN expr  */
#line 634 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '&'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3575 "CMDgram.cpp"
    break;

  case 144: /* assign_op_struct: opXORASN expr  */
#line 636 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '^'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3581 "CMDgram.cpp"
    break;

  case 145: /* assign_op_struct: opORASN expr  */
#line 638 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '|'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3587 "CMDgram.cpp"
    break;

  case 146: /* assign_op_struct: opSLASN expr  */
#line 640 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = opSHL; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3593 "CMDgram.cpp"
    break;

  case 147: /* assign_op_struct: opSRASN expr  */
#line 642 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = opSHR; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3599 "CMDgram.cpp"
    break;

  case 148: /* stmt_expr: funcall_expr  */
#line 648 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3605 "CMDgram.cpp"
    break;

  case 149: /* stmt_expr: assert_expr  */
#line 650 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3611 "CMDgram.cpp"
    break;

  case 150: /* stmt_expr: inline_command_expr  */
#line 652 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3617 "CMDgram.cpp"
    break;

  case 151: /* stmt_expr: object_decl  */
#line 654 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].od); }
#line 3623 "CMDgram.cpp"
    break;

  case 152: /* stmt_expr: VAR '=' expr  */
#line 656 "CMDgram.y"
      { (yyval.expr) = AssignExprNode::alloc( (yyvsp[-2].s).lineNumber, (yyvsp[-2].s).value, NULL, (yyvsp[0].expr)); }
#line 3629 "CMDgram.cpp"
    break;

  case 153: /* stmt_expr: VAR '=' '{' expr_list '}'  */
#line 660 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-4].s).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-1].expr);
         (yyval.expr) = AssignExprNode::alloc( (yyvsp[-4].s).lineNumber, (yyvsp[-4].s).value, NULL, vecNode);
      }
#line 3639 "CMDgram.cpp"
    break;

  case 154: /* stmt_expr: VAR '[' aidx_expr ']' '=' expr  */
#line 668 "CMDgram.y"
      { (yyval.expr) = AssignExprNode::alloc( (yyvsp[-5].s).lineNumber, (yyvsp[-5].s).value, (yyvsp[-3].expr), (yyvsp[0].expr)); }
#line 3645 "CMDgram.cpp"
    break;

  case 155: /* stmt_expr: VAR '[' aidx_expr ']' '=' '{' expr_list '}'  */
#line 672 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-7].s).lineNumber);
          vecNode->argList = (ExprNode*)(yyvsp[-1].expr);
         (yyval.expr) = AssignExprNode::alloc( (yyvsp[-7].s).lineNumber, (yyvsp[-7].s).value, (yyvsp[-5].expr), vecNode);
      }
#line 3655 "CMDgram.cpp"
    break;

  case 156: /* stmt_expr: VAR assign_op_struct  */
#line 680 "CMDgram.y"
      { (yyval.expr) = AssignOpExprNode::alloc( (yyvsp[-1].s).lineNumber, (yyvsp[-1].s).value, NULL, (yyvsp[0].asn).expr, (yyvsp[0].asn).token); }
#line 3661 "CMDgram.cpp"
    break;

  case 157: /* stmt_expr: VAR '[' aidx_expr ']' assign_op_struct  */
#line 682 "CMDgram.y"
      { (yyval.expr) = AssignOpExprNode::alloc( (yyvsp[-4].s).lineNumber, (yyvsp[-4].s).value, (yyvsp[-2].expr), (yyvsp[0].asn).expr, (yyvsp[0].asn).token); }
#line 3667 "CMDgram.cpp"
    break;

  case 158: /* stmt_expr: slot_acc assign_op_struct  */
#line 684 "CMDgram.y"
      { (yyval.expr) = SlotAssignOpNode::alloc( (yyvsp[-1].slot).lineNumber, (yyvsp[-1].slot).object, (yyvsp[-1].slot).slotName, (yyvsp[-1].slot).array, (yyvsp[0].asn).token, (yyvsp[0].asn).expr); }
#line 3673 "CMDgram.cpp"
    break;

  case 159: /* stmt_expr: slot_acc '=' expr  */
#line 686 "CMDgram.y"
      { (yyval.expr) = SlotAssignNode::alloc( (yyvsp[-2].slot).lineNumber, (yyvsp[-2].slot).object, (yyvsp[-2].slot).array, (yyvsp[-2].slot).slotName, (yyvsp[0].expr)); }
#line 3679 "CMDgram.cpp"
    break;

  case 160: /* stmt_expr: slot_acc '=' '{' expr_list '}'  */
#line 688 "CMDgram.y"
      { (yyval.expr) = SlotAssignNode::alloc( (yyvsp[-4].slot).lineNumber, (yyvsp[-4].slot).object, (yyvsp[-4].slot).array, (yyvsp[-4].slot).slotName, (yyvsp[-1].expr)); }
#line 3685 "CMDgram.cpp"
    break;

  case 161: /* funcall_expr: IDENT '(' func_arg_list_decl ')'  */
#line 720 "CMDgram.y"
      { (yyval.expr) = FuncCallExprNode::alloc( (yyvsp[-3].s).lineNumber, (yyvsp[-3].s).value, NULL, (yyvsp[-1].expr), false); }
#line 3691 "CMDgram.cpp"
    break;

  case 162: /* funcall_expr: IDENT opCOLONCOLON IDENT '(' func_arg_list_decl ')'  */
#line 723 "CMDgram.y"
      { (yyval.expr) = FuncCallExprNode::alloc( (yyvsp[-5].s).lineNumber, (yyvsp[-3].s).value, (yyvsp[-5].s).value, (yyvsp[-1].expr), false); }
#line 3697 "CMDgram.cpp"
    break;

  case 163: /* funcall_expr: expr '.' IDENT '(' func_arg_list_decl ')'  */
#line 726 "CMDgram.y"
      { (yyvsp[-5].expr)->append((yyvsp[-1].expr)); (yyval.expr) = FuncCallExprNode::alloc( (yyvsp[-5].expr)->dbgLineNumber, (yyvsp[-3].s).value, NULL, (yyvsp[-5].expr), true); }
#line 3703 "CMDgram.cpp"
    break;

  case 164: /* func_arg_item: expr  */
#line 732 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3709 "CMDgram.cpp"
    break;

  case 165: /* func_arg_item: '{' expr_list '}'  */
#line 734 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-2].i).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-1].expr);
//          for (ExprNode* expr = (ExprNode*)$2; expr; expr = (ExprNode*)(expr->next)) {
//             vecNode->elements.push_back(expr);
//          }
         (yyval.expr) = vecNode;
      }
#line 3722 "CMDgram.cpp"
    break;

  case 166: /* func_arg_list: func_arg_item  */
#line 746 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3728 "CMDgram.cpp"
    break;

  case 167: /* func_arg_list: func_arg_list ',' func_arg_item  */
#line 748 "CMDgram.y"
      { ((yyvsp[-2].expr))->append((yyvsp[0].expr)); (yyval.expr) = (yyvsp[-2].expr); }
#line 3734 "CMDgram.cpp"
    break;

  case 168: /* func_arg_list_decl: %empty  */
#line 753 "CMDgram.y"
      { (yyval.expr) = NULL; }
#line 3740 "CMDgram.cpp"
    break;

  case 169: /* func_arg_list_decl: func_arg_list  */
#line 755 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3746 "CMDgram.cpp"
    break;

  case 170: /* assert_expr: rwASSERT '(' expr ')'  */
#line 776 "CMDgram.y"
      { (yyval.expr) = AssertCallExprNode::alloc( (yyvsp[-3].i).lineNumber, (yyvsp[-1].expr), NULL ); }
#line 3752 "CMDgram.cpp"
    break;

  case 171: /* assert_expr: rwASSERT '(' expr ',' STRATOM ')'  */
#line 778 "CMDgram.y"
      { (yyval.expr) = AssertCallExprNode::alloc( (yyvsp[-5].i).lineNumber, (yyvsp[-3].expr), (yyvsp[-1].str).value ); }
#line 3758 "CMDgram.cpp"
    break;

  case 172: /* inline_command_expr: rwPRINT '(' expr_list ')'  */
#line 785 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::PRINT, (yyvsp[-1].expr)); }
#line 3764 "CMDgram.cpp"
    break;

  case 173: /* inline_command_expr: rwPRINTF '(' expr_list ')'  */
#line 787 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::PRINTF, (yyvsp[-1].expr)); }
#line 3770 "CMDgram.cpp"
    break;

  case 174: /* inline_command_expr: rwSPRINTF '(' expr_list ')'  */
#line 789 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::SPRINTF, (yyvsp[-1].expr)); }
#line 3776 "CMDgram.cpp"
    break;

  case 175: /* inline_command_expr: rwRANDOMF '(' ')'  */
#line 791 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-2].i).lineNumber, CommandStmtNode::RANDOMF, NULL); }
#line 3782 "CMDgram.cpp"
    break;

  case 176: /* inline_command_expr: rwRANDOMF '(' expr_list ')'  */
#line 793 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::RANDOMF, (yyvsp[-1].expr)); }
#line 3788 "CMDgram.cpp"
    break;

  case 177: /* inline_command_expr: rwFLOOR '(' expr_list ')'  */
#line 795 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::FLOOR, (yyvsp[-1].expr)); }
#line 3794 "CMDgram.cpp"
    break;

  case 178: /* inline_command_expr: rwCEIL '(' expr_list ')'  */
#line 797 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::CEIL, (yyvsp[-1].expr)); }
#line 3800 "CMDgram.cpp"
    break;

  case 179: /* inline_command_expr: rwFABS '(' expr_list ')'  */
#line 799 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::FABS, (yyvsp[-1].expr)); }
#line 3806 "CMDgram.cpp"
    break;

  case 180: /* inline_command_expr: rwSIN '(' expr_list ')'  */
#line 801 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::SIN, (yyvsp[-1].expr)); }
#line 3812 "CMDgram.cpp"
    break;

  case 181: /* inline_command_expr: rwCOS '(' expr_list ')'  */
#line 803 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::COS, (yyvsp[-1].expr)); }
#line 3818 "CMDgram.cpp"
    break;

  case 182: /* inline_command_expr: rwATAN '(' expr_list ')'  */
#line 805 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::ATAN, (yyvsp[-1].expr)); }
#line 3824 "CMDgram.cpp"
    break;

  case 183: /* inline_command_expr: rwTANH '(' expr_list ')'  */
#line 807 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::TANH, (yyvsp[-1].expr)); }
#line 3830 "CMDgram.cpp"
    break;

  case 184: /* inline_command_expr: rwSQRT '(' expr_list ')'  */
#line 809 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::SQRT, (yyvsp[-1].expr)); }
#line 3836 "CMDgram.cpp"
    break;

  case 185: /* inline_command_expr: rwISZERO '(' expr_list ')'  */
#line 811 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::ISZERO, (yyvsp[-1].expr)); }
#line 3842 "CMDgram.cpp"
    break;

  case 186: /* inline_command_expr: rwFMOD '(' expr_list ')'  */
#line 813 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::FMOD, (yyvsp[-1].expr)); }
#line 3848 "CMDgram.cpp"
    break;

  case 187: /* inline_command_expr: rwMIN '(' expr_list ')'  */
#line 815 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::MIN, (yyvsp[-1].expr)); }
#line 3854 "CMDgram.cpp"
    break;

  case 188: /* inline_command_expr: rwMAX '(' expr_list ')'  */
#line 817 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::MAX, (yyvsp[-1].expr)); }
#line 3860 "CMDgram.cpp"
    break;

  case 189: /* inline_command_expr: rwATAN2 '(' expr_list ')'  */
#line 819 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::ATAN2, (yyvsp[-1].expr)); }
#line 3866 "CMDgram.cpp"
    break;

  case 190: /* inline_command_expr: rwPOW '(' expr_list ')'  */
#line 821 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::POW, (yyvsp[-1].expr)); }
#line 3872 "CMDgram.cpp"
    break;

  case 191: /* inline_command_expr: rwCLAMP '(' expr_list ')'  */
#line 823 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::CLAMP, (yyvsp[-1].expr)); }
#line 3878 "CMDgram.cpp"
    break;

  case 192: /* inline_command_expr: rwCLAMPF '(' expr_list ')'  */
#line 825 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::CLAMPF, (yyvsp[-1].expr)); }
#line 3884 "CMDgram.cpp"
    break;

  case 193: /* inline_command_expr: rwLERP '(' expr_list ')'  */
#line 827 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::LERP, (yyvsp[-1].expr)); }
#line 3890 "CMDgram.cpp"
    break;

  case 194: /* inline_command_expr: rwSMOOTHSTEP '(' expr_list ')'  */
#line 829 "CMDgram.y"
      { (yyval.expr) = CommandStmtNode::alloc( (yyvsp[-3].i).lineNumber, CommandStmtNode::SMOOTHSTEP, (yyvsp[-1].expr)); }
#line 3896 "CMDgram.cpp"
    break;

  case 195: /* expr_list: expr  */
#line 841 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3902 "CMDgram.cpp"
    break;

  case 196: /* expr_list: expr_list ',' expr  */
#line 843 "CMDgram.y"
      { ((yyvsp[-2].expr))->append((yyvsp[0].expr)); (yyval.expr) = (yyvsp[-2].expr); }
#line 3908 "CMDgram.cpp"
    break;

  case 197: /* slot_assign_list_opt: %empty  */
#line 848 "CMDgram.y"
      { (yyval.slist) = NULL; }
#line 3914 "CMDgram.cpp"
    break;

  case 198: /* slot_assign_list_opt: slot_assign_list  */
#line 850 "CMDgram.y"
      { (yyval.slist) = (yyvsp[0].slist); }
#line 3920 "CMDgram.cpp"
    break;

  case 199: /* slot_assign_list: slot_assign  */
#line 855 "CMDgram.y"
      { (yyval.slist) = (yyvsp[0].slist); }
#line 3926 "CMDgram.cpp"
    break;

  case 200: /* slot_assign_list: slot_assign_list slot_assign  */
#line 857 "CMDgram.y"
      { (yyvsp[-1].slist)->append((yyvsp[0].slist)); (yyval.slist) = (yyvsp[-1].slist); }
#line 3932 "CMDgram.cpp"
    break;

  case 201: /* slot_assign: IDENT '=' expr ';'  */
#line 863 "CMDgram.y"
      { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-3].s).lineNumber, NULL, NULL, (yyvsp[-3].s).value, (yyvsp[-1].expr)); }
#line 3938 "CMDgram.cpp"
    break;

  case 202: /* slot_assign: IDENT '=' '{' expr_list '}' ';'  */
#line 867 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-5].s).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-2].expr);
         (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-5].s).lineNumber, NULL, NULL, (yyvsp[-5].s).value, vecNode);
      }
#line 3948 "CMDgram.cpp"
    break;

  case 203: /* slot_assign: TYPEIDENT IDENT '=' expr ';'  */
#line 875 "CMDgram.y"
      { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-4].i).lineNumber, NULL, NULL, (yyvsp[-3].s).value, (yyvsp[-1].expr), (yyvsp[-4].i).value); }
#line 3954 "CMDgram.cpp"
    break;

  case 204: /* slot_assign: TYPEIDENT IDENT '=' '{' expr_list '}' ';'  */
#line 879 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-6].i).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-2].expr);
         (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-6].i).lineNumber, NULL, NULL, (yyvsp[-5].s).value, vecNode, (yyvsp[-6].i).value);
      }
#line 3964 "CMDgram.cpp"
    break;

  case 205: /* slot_assign: rwDATABLOCK '=' expr ';'  */
#line 887 "CMDgram.y"
      { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-3].i).lineNumber, NULL, NULL, StringTable->insert("datablock"), (yyvsp[-1].expr)); }
#line 3970 "CMDgram.cpp"
    break;

  case 206: /* slot_assign: IDENT '[' aidx_expr ']' '=' expr ';'  */
#line 889 "CMDgram.y"
      { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-6].s).lineNumber, NULL, (yyvsp[-4].expr), (yyvsp[-6].s).value, (yyvsp[-1].expr)); }
#line 3976 "CMDgram.cpp"
    break;

  case 207: /* slot_assign: IDENT '[' aidx_expr ']' '=' '{' expr_list '}' ';'  */
#line 893 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-8].s).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-2].expr);
         (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-8].s).lineNumber, NULL, (yyvsp[-6].expr), (yyvsp[-8].s).value, vecNode);
      }
#line 3986 "CMDgram.cpp"
    break;

  case 208: /* slot_assign: TYPEIDENT IDENT '[' aidx_expr ']' '=' expr ';'  */
#line 901 "CMDgram.y"
      { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-7].i).lineNumber, NULL, (yyvsp[-4].expr), (yyvsp[-6].s).value, (yyvsp[-1].expr), (yyvsp[-7].i).value); }
#line 3992 "CMDgram.cpp"
    break;

  case 209: /* aidx_expr: expr  */
#line 924 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3998 "CMDgram.cpp"
    break;

  case 210: /* aidx_expr: aidx_expr ',' expr  */
#line 926 "CMDgram.y"
      { (yyval.expr) = CommaCatExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4004 "CMDgram.cpp"
    break;


#line 4008 "CMDgram.cpp"

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

#line 929 "CMDgram.y"


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
