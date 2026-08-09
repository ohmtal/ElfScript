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
#line 4 "CMDgram.y"


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

#line 52 "CMDgram.y"

   /* Reserved word token definitions */
#line 71 "CMDgram.y"

   /* Constant and identifier token definitions */
#line 86 "CMDgram.y"

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
  YYSYMBOL_93_ = 93,                       /* '['  */
  YYSYMBOL_94_ = 94,                       /* '?'  */
  YYSYMBOL_UNARY = 95,                     /* UNARY  */
  YYSYMBOL_96_ = 96,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 97,                  /* $accept  */
  YYSYMBOL_start = 98,                     /* start  */
  YYSYMBOL_decl_list = 99,                 /* decl_list  */
  YYSYMBOL_decl = 100,                     /* decl  */
  YYSYMBOL_package_decl = 101,             /* package_decl  */
  YYSYMBOL_fn_decl_list = 102,             /* fn_decl_list  */
  YYSYMBOL_statement_list = 103,           /* statement_list  */
  YYSYMBOL_stmt = 104,                     /* stmt  */
  YYSYMBOL_fn_decl_stmt = 105,             /* fn_decl_stmt  */
  YYSYMBOL_var_list_decl = 106,            /* var_list_decl  */
  YYSYMBOL_var_list = 107,                 /* var_list  */
  YYSYMBOL_param = 108,                    /* param  */
  YYSYMBOL_datablock_decl = 109,           /* datablock_decl  */
  YYSYMBOL_object_decl = 110,              /* object_decl  */
  YYSYMBOL_parent_block = 111,             /* parent_block  */
  YYSYMBOL_object_name = 112,              /* object_name  */
  YYSYMBOL_object_args = 113,              /* object_args  */
  YYSYMBOL_object_declare_block = 114,     /* object_declare_block  */
  YYSYMBOL_object_decl_list = 115,         /* object_decl_list  */
  YYSYMBOL_stmt_block = 116,               /* stmt_block  */
  YYSYMBOL_switch_stmt = 117,              /* switch_stmt  */
  YYSYMBOL_case_block = 118,               /* case_block  */
  YYSYMBOL_case_expr = 119,                /* case_expr  */
  YYSYMBOL_if_stmt = 120,                  /* if_stmt  */
  YYSYMBOL_while_stmt = 121,               /* while_stmt  */
  YYSYMBOL_for_stmt = 122,                 /* for_stmt  */
  YYSYMBOL_foreach_stmt = 123,             /* foreach_stmt  */
  YYSYMBOL_expression_stmt = 124,          /* expression_stmt  */
  YYSYMBOL_expr = 125,                     /* expr  */
  YYSYMBOL_slot_acc = 126,                 /* slot_acc  */
  YYSYMBOL_intslot_acc = 127,              /* intslot_acc  */
  YYSYMBOL_class_name_expr = 128,          /* class_name_expr  */
  YYSYMBOL_assign_op_struct = 129,         /* assign_op_struct  */
  YYSYMBOL_stmt_expr = 130,                /* stmt_expr  */
  YYSYMBOL_funcall_expr = 131,             /* funcall_expr  */
  YYSYMBOL_func_arg_item = 132,            /* func_arg_item  */
  YYSYMBOL_func_arg_list = 133,            /* func_arg_list  */
  YYSYMBOL_func_arg_list_decl = 134,       /* func_arg_list_decl  */
  YYSYMBOL_assert_expr = 135,              /* assert_expr  */
  YYSYMBOL_expr_list = 136,                /* expr_list  */
  YYSYMBOL_slot_assign_list_opt = 137,     /* slot_assign_list_opt  */
  YYSYMBOL_slot_assign_list = 138,         /* slot_assign_list  */
  YYSYMBOL_slot_assign = 139,              /* slot_assign  */
  YYSYMBOL_aidx_expr = 140                 /* aidx_expr  */
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
#define YYLAST   3951

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  97
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  186
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  458

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   326


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
      46,    48,    47,    94,    63,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    93,     2,    96,    60,     2,     2,     2,     2,     2,
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
      87,    88,    89,    90,    91,    92,    95
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   205,   205,   211,   212,   217,   219,   221,   226,   231,
     233,   239,   240,   245,   246,   247,   248,   249,   250,   251,
     253,   255,   257,   260,   270,   272,   274,   276,   282,   285,
     291,   292,   297,   299,   316,   318,   320,   322,   327,   332,
     334,   336,   338,   340,   342,   348,   349,   355,   356,   362,
     363,   369,   370,   372,   374,   379,   381,   386,   388,   393,
     395,   403,   405,   407,   412,   414,   419,   421,   426,   428,
     433,   435,   437,   439,   441,   443,   445,   447,   451,   454,
     457,   460,   463,   474,   477,   480,   483,   486,   489,   492,
     497,   502,   504,   506,   508,   510,   512,   514,   516,   518,
     520,   522,   524,   526,   528,   530,   532,   534,   536,   538,
     540,   542,   544,   546,   548,   550,   552,   560,   562,   564,
     566,   568,   570,   572,   574,   576,   578,   580,   582,   584,
     590,   592,   597,   599,   604,   606,   611,   613,   615,   617,
     619,   621,   623,   625,   627,   629,   631,   633,   639,   641,
     643,   645,   649,   660,   664,   675,   677,   679,   681,   683,
     715,   718,   721,   727,   729,   741,   743,   749,   750,   771,
     773,   785,   787,   793,   794,   799,   801,   807,   811,   822,
     826,   837,   839,   843,   854,   877,   879
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
  "rwRANGE", "rwSTEP", "'['", "'?'", "UNARY", "']'", "$accept", "start",
  "decl_list", "decl", "package_decl", "fn_decl_list", "statement_list",
  "stmt", "fn_decl_stmt", "var_list_decl", "var_list", "param",
  "datablock_decl", "object_decl", "parent_block", "object_name",
  "object_args", "object_declare_block", "object_decl_list", "stmt_block",
  "switch_stmt", "case_block", "case_expr", "if_stmt", "while_stmt",
  "for_stmt", "foreach_stmt", "expression_stmt", "expr", "slot_acc",
  "intslot_acc", "class_name_expr", "assign_op_struct", "stmt_expr",
  "funcall_expr", "func_arg_item", "func_arg_list", "func_arg_list_decl",
  "assert_expr", "expr_list", "slot_assign_list_opt", "slot_assign_list",
  "slot_assign", "aidx_expr", YY_NULLPTR
  };
  return yy_sname[yysymbol];
}
#endif

#define YYPACT_NINF (-334)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-91)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -334,    26,   794,  -334,    17,     2,     2,    -3,    22,    34,
     309,    58,   882,    59,    66,    68,     2,    74,    76,    78,
      88,  -334,    10,   713,    -9,  -334,  -334,  -334,  -334,  1589,
    1589,  1589,  1589,  1589,  -334,  -334,  -334,  -334,  -334,  -334,
    -334,  -334,  -334,  -334,  -334,    95,  3608,  3858,  -334,    97,
    -334,  -334,    29,  -334,  1589,   102,   104,  -334,  -334,  1589,
    -334,  -334,  -334,  1589,  2071,  -334,  1589,  -334,  -334,   149,
     652,   138,   139,   144,  1589,  1589,   140,  1589,  1589,   711,
    -334,  -334,  1589,  1589,  1589,  1589,  1589,  1589,  1589,  1589,
    1589,  1589,  1589,  -334,  1109,   156,    83,    83,  2124,    83,
      83,  -334,  1589,  1589,  1589,  1589,  1589,  1589,   163,  1589,
    1589,  1589,  1589,  1589,     2,     2,  1589,  1589,  1589,  1589,
    1589,  1589,  1589,  1589,  1589,  1589,  1589,  1149,  -334,   167,
     168,  2177,     6,  1589,  2230,  3608,    65,  -334,  2283,   940,
     152,   469,  1189,  2336,   184,   186,  1589,  2389,  2442,   207,
    1594,  1647,  1589,  3608,  3608,  3608,  3608,  3608,  3608,  3608,
    3608,  3608,  3608,  3608,  3608,   -35,  1589,  3608,  -334,   157,
     159,   161,  -334,    61,    61,    83,    83,    21,    21,   -10,
    3755,  3811,    83,  3783,   101,  -334,  -334,   136,   136,  3839,
    3839,    21,    21,  3708,   507,   101,   101,  2495,  1589,  3608,
     -23,   162,   160,  -334,   164,  -334,  1589,   165,  3608,   165,
     882,  1589,   169,   882,  -334,  -334,  1589,   189,  1229,  2548,
    1269,   233,  1589,  2601,   173,   176,    16,  -334,  -334,   188,
    1589,  -334,    81,  1589,  3872,   109,  1109,  -334,  1109,  1109,
    1589,  1589,   116,  1589,   187,   178,   167,   167,   141,   205,
     190,   190,   235,  3608,  -334,  -334,  2654,  1589,  2707,   882,
    2760,  1309,  1349,  2813,  1589,  1700,  2866,   192,   218,   218,
     191,  -334,   193,  2919,  -334,  3608,  1389,  -334,  -334,  -334,
     195,   198,   -34,  3661,  -334,  3608,  1589,  -334,  -334,   199,
     165,  -334,  1589,   200,   201,   882,  -334,  1753,  1589,  -334,
     882,   882,  2972,   882,  3025,  1429,  1806,   882,  1589,   882,
     202,  1589,   197,   203,  -334,  -334,  -334,  1589,  3608,  -334,
    -334,  -334,  3608,   983,   206,   190,   204,   212,   213,  -334,
     882,  1589,  1859,  -334,  -334,   882,  -334,   882,   882,  3078,
     882,  1589,  -334,  1912,  -334,   125,    -5,  3608,  -334,  -334,
     117,  -334,  -334,   221,    98,    98,  -334,  1965,   882,  1589,
    -334,  -334,  -334,   882,  -334,  2018,   882,  1589,   210,   -21,
     225,   219,   125,  -334,  1589,  -334,  -334,  1026,   223,   222,
     226,    27,    98,   228,   882,  1589,  -334,  3131,  -334,   882,
    1589,  -334,  3184,  1589,  1469,  1589,   -17,   227,  -334,  3608,
     839,  -334,    98,  -334,  -334,   231,    27,  -334,  -334,  3237,
     882,  -334,  3290,   882,  3343,  1589,  3396,   -18,  1509,  1589,
    -334,   234,  -334,   230,  -334,   882,  -334,   882,  -334,  -334,
     128,  -334,   243,  1589,  3449,     5,  -334,  -334,  -334,  -334,
     239,  1549,   131,  -334,   244,  1069,  -334,  1589,  3502,   245,
    1589,   134,  -334,  -334,  3555,   246,  -334,  -334
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     2,     1,     0,     0,     0,   123,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   122,   103,   128,   126,    27,   127,   120,   121,     0,
       0,     0,     0,     0,     4,     7,     5,     6,    17,   150,
      18,    13,    14,    15,    16,     0,     0,   124,   125,    91,
     148,   149,     0,   134,     0,     0,     0,    19,    20,     0,
     123,   103,    21,     0,     0,    91,     0,    11,    58,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     137,   136,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   155,   167,     0,   101,   102,     0,   119,
     118,    24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   157,    30,
       0,     0,    47,    47,     0,   171,     0,    22,     0,     0,
       0,   128,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   151,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   185,     0,     0,   163,   165,   168,
       0,     0,    92,    97,    98,    99,   100,   105,   106,   130,
      96,    95,    94,    93,   117,   132,   133,   112,   113,   109,
     110,   107,   108,   114,   111,   115,   116,     0,     0,   158,
      34,     0,    31,    32,     0,   135,    47,    45,    48,    45,
       0,     0,     0,     0,    57,    12,     0,     0,     0,     0,
       0,     0,     0,    45,     0,     0,     0,     9,   169,     0,
       0,    25,     0,     0,   129,     0,     0,   160,   167,   167,
       0,     0,     0,     0,    35,     0,     0,    30,     0,     0,
      49,    49,    66,   172,    23,    68,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,     0,     0,   152,   186,     0,   156,   164,   166,
       0,     0,     0,   104,   159,    36,     0,    11,    33,     0,
      45,    46,     0,     0,     0,     0,    69,     0,     0,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     8,   170,    26,     0,   153,   161,
     162,   131,    37,     0,     0,    49,    50,    40,    44,    67,
       0,     0,     0,    76,    75,     0,    73,     0,     0,     0,
       0,     0,    83,     0,    84,   173,     0,    64,    59,    60,
       0,    28,    11,     0,    51,    51,    82,     0,     0,     0,
      74,    72,    71,     0,    89,     0,     0,     0,     0,     0,
       0,     0,   174,   175,     0,    11,   154,     0,    42,     0,
       0,    53,    52,     0,     0,     0,    78,     0,    70,     0,
       0,    85,     0,     0,     0,     0,     0,     0,   176,    65,
      61,    29,    51,    55,    39,     0,    54,    43,    79,     0,
       0,    86,     0,     0,     0,     0,     0,     0,     0,     0,
      38,     0,    63,     0,    56,     0,    80,     0,    87,   181,
       0,   177,     0,     0,     0,     0,    11,    41,    81,    88,
       0,     0,     0,   179,     0,    62,   178,     0,     0,     0,
       0,     0,   182,   180,     0,     0,   184,   183
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -334,  -334,  -334,  -334,  -334,  -334,  -278,    -1,  -134,    35,
    -334,    54,  -334,  -325,  -195,  -115,  -227,  -333,   -78,  -207,
    -334,  -261,  -334,  -334,  -334,  -334,  -334,  -334,   363,  -334,
    -334,     1,   -43,    -2,  -334,    70,  -334,  -204,  -334,  -150,
    -334,   -37,  -265,  -235
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,    34,    35,   226,   139,    68,    37,   201,
     202,   203,    38,    39,   250,   207,   293,   380,   381,    69,
      40,   312,   346,    41,    42,    43,    44,    45,    46,    47,
      48,    55,    93,    65,    50,   168,   169,   170,    51,   136,
     371,   382,   373,   165
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      49,    36,   232,   252,   128,   282,   255,    56,   313,   323,
      49,     5,     6,    60,   251,   227,   235,    73,   209,     4,
     233,   233,   383,   374,   294,   243,     3,   394,   267,   379,
     379,   418,     5,     6,   280,   281,    20,   233,    53,    21,
      61,    23,    24,   239,    94,    26,    27,    28,   242,    29,
      30,   375,   299,    52,    57,    54,   405,   379,    78,    31,
     233,   234,   321,   102,   103,   104,   105,    32,    33,   423,
     108,   244,   395,   111,   377,   270,   419,   379,   432,    58,
      95,   405,   129,   240,   113,   114,   115,    59,   329,   116,
     117,   248,   271,   333,   334,   325,   336,   400,   353,   206,
     342,   444,   344,     5,     6,   104,   105,   398,   124,   125,
     108,    66,    70,   111,    76,   185,   186,   398,   130,    71,
     211,    72,   368,   356,   212,   114,   115,    74,   360,    75,
     361,   362,   108,   364,   369,   370,   211,    49,   215,   422,
     274,    77,   326,   102,   103,   104,   105,   114,   115,   368,
     108,   386,   101,   111,   -90,   132,   388,   133,   445,   391,
     417,   369,   370,   140,   211,   114,   115,   350,   278,   116,
     117,   211,   211,   144,   145,   284,   376,   408,   102,   103,
     104,   105,   411,   211,   435,   108,   211,   440,   111,   211,
     449,   277,   171,   455,     5,     6,    60,   146,   149,   179,
     114,   115,   200,   426,   204,   216,   428,   221,    49,   222,
       4,    49,   236,   237,   238,   246,   245,   247,   438,    20,
     439,   249,    21,    61,    23,    24,   254,   272,    26,    27,
      28,   268,    29,    30,   269,   286,   287,   290,     5,     6,
      60,   291,    31,   295,   311,   292,   310,   315,   314,   319,
      32,    33,   320,   324,   327,   328,   348,    49,   393,   211,
     345,   396,   349,    20,   352,   430,    21,    61,    23,    24,
     354,   355,    26,    27,    28,   378,    29,    30,   397,   403,
     257,   402,   289,   442,   420,   404,    31,   407,   424,   437,
     436,   441,   450,    49,    32,    33,   446,   451,    49,    49,
     288,    49,   453,   457,   406,    49,   279,    49,   372,     0,
       0,     0,     0,     0,     5,     6,    60,     0,     0,     0,
       0,    49,   215,     0,   264,     0,     0,     0,    49,     0,
       0,     0,     0,    49,     0,    49,    49,     0,    49,    20,
       0,     0,    21,    61,    23,    24,     0,     0,    26,    27,
      28,     0,    29,    30,     0,     0,    49,     0,     0,     0,
       0,    49,    31,     0,    49,     0,    62,    63,     0,     0,
      32,    33,     0,    64,     0,    49,   215,     0,     0,     0,
       0,     0,    49,     0,     0,     0,     0,    49,     0,     0,
       0,     0,    96,    97,    98,    99,   100,     0,    49,   215,
       0,     0,     0,     0,     0,     0,     0,     0,    49,     0,
       0,    49,     0,     0,     0,     0,     0,   131,     0,     0,
       0,     0,   134,    49,     0,    49,   135,     0,     0,   138,
       0,     0,     0,   143,     0,     0,     0,   147,   148,     0,
     150,   151,   153,    49,   215,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,     0,   167,     0,     0,
       0,     0,     0,     0,     0,   173,   174,   175,   176,   177,
     178,     0,   180,   181,   182,   183,   184,     0,     0,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     199,     0,   217,     0,     0,   208,   208,     0,     0,     0,
       0,     0,     0,     0,     0,   219,     0,     0,     0,   223,
       0,     0,     0,     0,     0,   135,     0,    79,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   135,
       0,     0,     0,     0,     0,    80,    81,     0,     0,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,   102,
     103,   104,   105,   106,   107,     0,   108,   109,   110,   111,
       0,   135,    92,     0,     0,     0,     0,   112,     0,   208,
     113,   114,   115,     0,   253,   116,   117,     0,     0,   256,
     258,   260,     0,   263,   265,   266,     0,     0,   118,   119,
     120,   121,   122,   273,   124,   125,   275,     0,     0,   167,
       0,   167,   167,   164,   283,     0,   285,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     297,     0,     0,     0,   302,   304,     0,   306,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   318,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   322,
       0,     0,     0,     0,     0,   135,     0,     5,     6,    60,
       0,   332,     0,     0,     0,     0,     0,     0,   339,     0,
       0,   343,     0,     0,   347,     0,     0,     0,     0,     0,
     135,     0,    20,     0,     0,    21,    61,   141,    24,     0,
       0,    26,    27,    28,   357,    29,    30,     0,     0,     0,
       0,     0,     0,     0,   365,    31,     0,     0,     0,   142,
       0,     0,     0,    32,    33,     0,     5,     6,    60,     0,
       0,     0,   387,     0,     0,     0,     0,     0,     0,     0,
     392,     0,     0,     0,     0,     0,     0,   399,     0,     0,
       0,    20,     0,     0,    21,    61,    23,    24,   409,     0,
      26,    27,    28,   412,    29,    30,   414,   416,   164,     0,
       0,    79,     0,     0,    31,     0,     0,     0,     0,   152,
       0,     0,    32,    33,     0,     0,     0,     0,   135,    80,
      81,   434,   164,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,     0,     0,     0,   135,     4,     0,     5,
       6,     7,     0,     8,   448,     9,    92,    10,    11,    12,
     135,     0,     0,   454,    13,    14,    15,     0,    16,    17,
       0,    18,     0,    19,    20,     0,     0,    21,    22,    23,
      24,     0,    25,    26,    27,    28,     0,    29,    30,     0,
       0,     0,     0,     0,     5,     6,     7,    31,     8,     0,
       9,     0,    10,    11,    12,    32,    33,     0,   421,    13,
      14,    15,     0,    16,    17,   311,    18,     0,     0,    20,
       0,     0,    21,    22,    23,    24,     0,    25,    26,    27,
      28,     0,    29,    30,     0,     0,     0,     5,     6,     7,
       0,     8,    31,     9,     0,    10,    11,    12,     0,     0,
      32,    33,    13,    14,    15,     0,    16,    17,     0,    18,
       0,     0,    20,     0,     0,    21,    22,    23,    24,     0,
      25,    26,    27,    28,     0,    29,    30,     0,     0,     0,
       0,     0,     0,     0,     0,    31,     0,     0,     0,     0,
      67,     0,     0,    32,    33,     5,     6,     7,     0,     8,
       0,     9,     0,    10,    11,    12,     0,     0,     0,     0,
      13,    14,    15,     0,    16,    17,     0,    18,     0,     0,
      20,     0,     0,    21,    22,    23,    24,     0,    25,    26,
      27,    28,     0,    29,    30,     0,     0,     0,     5,     6,
       7,     0,     8,    31,     9,     0,    10,    11,    12,   214,
       0,    32,    33,    13,    14,    15,     0,    16,    17,     0,
      18,     0,     0,    20,     0,     0,    21,    22,    23,    24,
       0,    25,    26,    27,    28,     0,    29,    30,     0,     0,
       0,     5,     6,     7,     0,     8,    31,     9,     0,    10,
      11,    12,   351,     0,    32,    33,    13,    14,    15,     0,
      16,    17,     0,    18,     0,     0,    20,     0,     0,    21,
      22,    23,    24,     0,    25,    26,    27,    28,     0,    29,
      30,     0,     0,     0,     5,     6,     7,     0,     8,    31,
       9,     0,    10,    11,    12,   401,     0,    32,    33,    13,
      14,    15,     0,    16,    17,     0,    18,     0,     0,    20,
       0,     0,    21,    22,    23,    24,     0,    25,    26,    27,
      28,     0,    29,    30,     5,     6,    60,     0,     0,     0,
       0,     0,    31,     0,     0,     0,     0,     0,     0,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,    21,    61,    23,    24,     0,     0,    26,    27,
      28,     0,    29,    30,     5,     6,    60,     0,     0,     0,
       0,     0,    31,     0,     0,     0,     0,   166,     0,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,    21,    61,    23,    24,     0,     0,    26,    27,
      28,     0,    29,    30,     5,     6,    60,     0,     0,     0,
       0,     0,    31,     0,     0,     0,     0,   198,     0,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,    21,    61,    23,    24,     0,     0,    26,    27,
      28,     0,    29,    30,     5,     6,    60,     0,     0,     0,
       0,     0,    31,     0,     0,     0,   218,     0,     0,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,    21,    61,    23,    24,     0,     0,    26,    27,
      28,     0,    29,    30,     5,     6,    60,     0,     0,     0,
       0,     0,    31,   259,     0,     0,     0,     0,     0,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,    21,    61,    23,    24,     0,     0,    26,    27,
      28,     0,    29,    30,     5,     6,    60,     0,     0,     0,
       0,     0,    31,     0,     0,     0,   262,     0,     0,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,    21,    61,    23,    24,     0,     0,    26,    27,
      28,     0,    29,    30,     5,     6,    60,     0,     0,     0,
       0,     0,    31,   301,     0,     0,     0,     0,     0,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,    21,    61,    23,    24,     0,     0,    26,    27,
      28,     0,    29,    30,     5,     6,    60,     0,     0,     0,
       0,     0,    31,   303,     0,     0,     0,     0,     0,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,    21,    61,    23,    24,     0,     0,    26,    27,
      28,     0,    29,    30,     5,     6,    60,     0,     0,     0,
       0,     0,    31,     0,     0,     0,     0,   317,     0,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,    21,    61,    23,    24,     0,     0,    26,    27,
      28,     0,    29,    30,     5,     6,    60,     0,     0,     0,
       0,     0,    31,   338,     0,     0,     0,     0,     0,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,    21,    61,    23,    24,     0,     0,    26,    27,
      28,     0,    29,    30,     5,     6,    60,     0,     0,     0,
       0,     0,    31,     0,     0,     0,     0,   415,     0,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,    21,    61,    23,    24,     0,     0,    26,    27,
      28,     0,    29,    30,     5,     6,    60,     0,     0,     0,
       0,     0,    31,     0,     0,     0,     0,   433,     0,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,    21,    61,    23,    24,     0,     0,    26,    27,
      28,     0,    29,    30,     5,     6,    60,     0,     0,     0,
       0,     0,    31,     0,     0,     0,     0,   447,     0,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,    21,    61,    23,    24,     0,     0,    26,    27,
      28,     0,    29,    30,     0,     0,   102,   103,   104,   105,
     106,   107,    31,   108,   109,   110,   111,     0,   228,   229,
      32,    33,     0,     0,   112,     0,     0,   113,   114,   115,
       0,     0,   116,   117,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   118,   119,   120,   121,   122,
     123,   124,   125,     0,     0,     0,     0,     0,   126,   102,
     103,   104,   105,   106,   107,     0,   108,   109,   110,   111,
       0,     0,   230,     0,   231,     0,     0,   112,     0,     0,
     113,   114,   115,     0,     0,   116,   117,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   118,   119,
     120,   121,   122,   123,   124,   125,     0,     0,     0,     0,
       0,   126,   102,   103,   104,   105,   106,   107,     0,   108,
     109,   110,   111,     0,   307,     0,     0,     0,     0,     0,
     112,     0,     0,   113,   114,   115,     0,     0,   116,   117,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   118,   119,   120,   121,   122,   123,   124,   125,     0,
     308,     0,     0,     0,   126,   102,   103,   104,   105,   106,
     107,     0,   108,   109,   110,   111,     0,   330,     0,     0,
       0,     0,     0,   112,     0,     0,   113,   114,   115,     0,
       0,   116,   117,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   118,   119,   120,   121,   122,   123,
     124,   125,     0,   331,     0,     0,     0,   126,   102,   103,
     104,   105,   106,   107,     0,   108,   109,   110,   111,     0,
     340,     0,     0,     0,     0,     0,   112,     0,     0,   113,
     114,   115,     0,     0,   116,   117,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   118,   119,   120,
     121,   122,   123,   124,   125,     0,   341,     0,     0,     0,
     126,   102,   103,   104,   105,   106,   107,     0,   108,   109,
     110,   111,     0,   358,     0,     0,     0,     0,     0,   112,
       0,     0,   113,   114,   115,     0,     0,   116,   117,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     118,   119,   120,   121,   122,   123,   124,   125,     0,     0,
       0,   359,     0,   126,   102,   103,   104,   105,   106,   107,
       0,   108,   109,   110,   111,     0,   366,     0,     0,     0,
       0,     0,   112,     0,     0,   113,   114,   115,     0,     0,
     116,   117,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   118,   119,   120,   121,   122,   123,   124,
     125,     0,     0,     0,   367,     0,   126,   102,   103,   104,
     105,   106,   107,     0,   108,   109,   110,   111,     0,   384,
       0,     0,     0,     0,     0,   112,     0,     0,   113,   114,
     115,     0,     0,   116,   117,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   118,   119,   120,   121,
     122,   123,   124,   125,     0,     0,     0,   385,     0,   126,
     102,   103,   104,   105,   106,   107,     0,   108,   109,   110,
     111,     0,   389,     0,     0,     0,     0,     0,   112,     0,
       0,   113,   114,   115,     0,     0,   116,   117,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
     119,   120,   121,   122,   123,   124,   125,     0,     0,     0,
     390,     0,   126,   102,   103,   104,   105,   106,   107,     0,
     108,   109,   110,   111,     0,     0,     0,     0,   137,     0,
       0,   112,     0,     0,   113,   114,   115,     0,     0,   116,
     117,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   118,   119,   120,   121,   122,   123,   124,   125,
       0,     0,     0,     0,     0,   126,   102,   103,   104,   105,
     106,   107,     0,   108,   109,   110,   111,     0,   172,     0,
       0,     0,     0,     0,   112,     0,     0,   113,   114,   115,
       0,     0,   116,   117,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   118,   119,   120,   121,   122,
     123,   124,   125,     0,     0,     0,     0,     0,   126,   102,
     103,   104,   105,   106,   107,     0,   108,   109,   110,   111,
       0,   205,     0,     0,     0,     0,     0,   112,     0,     0,
     113,   114,   115,     0,     0,   116,   117,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   118,   119,
     120,   121,   122,   123,   124,   125,     0,     0,     0,     0,
       0,   126,   102,   103,   104,   105,   106,   107,     0,   108,
     109,   110,   111,     0,   210,     0,     0,     0,     0,     0,
     112,     0,     0,   113,   114,   115,     0,     0,   116,   117,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   118,   119,   120,   121,   122,   123,   124,   125,     0,
       0,     0,     0,     0,   126,   102,   103,   104,   105,   106,
     107,     0,   108,   109,   110,   111,     0,   213,     0,     0,
       0,     0,     0,   112,     0,     0,   113,   114,   115,     0,
       0,   116,   117,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   118,   119,   120,   121,   122,   123,
     124,   125,     0,     0,     0,     0,     0,   126,   102,   103,
     104,   105,   106,   107,     0,   108,   109,   110,   111,     0,
       0,     0,     0,   220,     0,     0,   112,     0,     0,   113,
     114,   115,     0,     0,   116,   117,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   118,   119,   120,
     121,   122,   123,   124,   125,     0,     0,     0,     0,     0,
     126,   102,   103,   104,   105,   106,   107,     0,   108,   109,
     110,   111,     0,   224,     0,     0,     0,     0,     0,   112,
       0,     0,   113,   114,   115,     0,     0,   116,   117,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     118,   119,   120,   121,   122,   123,   124,   125,     0,     0,
       0,     0,     0,   126,   102,   103,   104,   105,   106,   107,
       0,   108,   109,   110,   111,     0,   225,     0,     0,     0,
       0,     0,   112,     0,     0,   113,   114,   115,     0,     0,
     116,   117,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   118,   119,   120,   121,   122,   123,   124,
     125,     0,     0,     0,     0,     0,   126,   102,   103,   104,
     105,   106,   107,     0,   108,   109,   110,   111,     0,     0,
       0,   241,     0,     0,     0,   112,     0,     0,   113,   114,
     115,     0,     0,   116,   117,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   118,   119,   120,   121,
     122,   123,   124,   125,     0,     0,     0,     0,     0,   126,
     102,   103,   104,   105,   106,   107,     0,   108,   109,   110,
     111,     0,     0,     0,     0,   261,     0,     0,   112,     0,
       0,   113,   114,   115,     0,     0,   116,   117,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
     119,   120,   121,   122,   123,   124,   125,     0,     0,     0,
       0,     0,   126,   102,   103,   104,   105,   106,   107,     0,
     108,   109,   110,   111,     0,     0,     0,   249,     0,     0,
       0,   112,     0,     0,   113,   114,   115,     0,     0,   116,
     117,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   118,   119,   120,   121,   122,   123,   124,   125,
       0,     0,     0,     0,     0,   126,   102,   103,   104,   105,
     106,   107,     0,   108,   109,   110,   111,     0,   296,     0,
       0,     0,     0,     0,   112,     0,     0,   113,   114,   115,
       0,     0,   116,   117,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   118,   119,   120,   121,   122,
     123,   124,   125,     0,     0,     0,     0,     0,   126,   102,
     103,   104,   105,   106,   107,     0,   108,   109,   110,   111,
       0,     0,     0,     0,     0,     0,     0,   112,     0,     0,
     113,   114,   115,     0,     0,   116,   117,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   118,   119,
     120,   121,   122,   123,   124,   125,     0,   298,     0,     0,
       0,   126,   102,   103,   104,   105,   106,   107,     0,   108,
     109,   110,   111,     0,   300,     0,     0,     0,     0,     0,
     112,     0,     0,   113,   114,   115,     0,     0,   116,   117,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   118,   119,   120,   121,   122,   123,   124,   125,     0,
       0,     0,     0,     0,   126,   102,   103,   104,   105,   106,
     107,     0,   108,   109,   110,   111,     0,     0,     0,     0,
     305,     0,     0,   112,     0,     0,   113,   114,   115,     0,
       0,   116,   117,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   118,   119,   120,   121,   122,   123,
     124,   125,     0,     0,     0,     0,     0,   126,   102,   103,
     104,   105,   106,   107,     0,   108,   109,   110,   111,     0,
     309,     0,     0,     0,     0,     0,   112,     0,     0,   113,
     114,   115,     0,     0,   116,   117,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   118,   119,   120,
     121,   122,   123,   124,   125,     0,     0,     0,     0,     0,
     126,   102,   103,   104,   105,   106,   107,     0,   108,   109,
     110,   111,     0,     0,     0,     0,   316,     0,     0,   112,
       0,     0,   113,   114,   115,     0,     0,   116,   117,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     118,   119,   120,   121,   122,   123,   124,   125,     0,     0,
       0,     0,     0,   126,   102,   103,   104,   105,   106,   107,
       0,   108,   109,   110,   111,     0,   335,     0,     0,     0,
       0,     0,   112,     0,     0,   113,   114,   115,     0,     0,
     116,   117,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   118,   119,   120,   121,   122,   123,   124,
     125,     0,     0,     0,     0,     0,   126,   102,   103,   104,
     105,   106,   107,     0,   108,   109,   110,   111,     0,   337,
       0,     0,     0,     0,     0,   112,     0,     0,   113,   114,
     115,     0,     0,   116,   117,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   118,   119,   120,   121,
     122,   123,   124,   125,     0,     0,     0,     0,     0,   126,
     102,   103,   104,   105,   106,   107,     0,   108,   109,   110,
     111,     0,   363,     0,     0,     0,     0,     0,   112,     0,
       0,   113,   114,   115,     0,     0,   116,   117,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
     119,   120,   121,   122,   123,   124,   125,     0,     0,     0,
       0,     0,   126,   102,   103,   104,   105,   106,   107,     0,
     108,   109,   110,   111,     0,   410,     0,     0,     0,     0,
       0,   112,     0,     0,   113,   114,   115,     0,     0,   116,
     117,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   118,   119,   120,   121,   122,   123,   124,   125,
       0,     0,     0,     0,     0,   126,   102,   103,   104,   105,
     106,   107,     0,   108,   109,   110,   111,     0,   413,     0,
       0,     0,     0,     0,   112,     0,     0,   113,   114,   115,
       0,     0,   116,   117,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   118,   119,   120,   121,   122,
     123,   124,   125,     0,     0,     0,     0,     0,   126,   102,
     103,   104,   105,   106,   107,     0,   108,   109,   110,   111,
       0,   425,     0,     0,     0,     0,     0,   112,     0,     0,
     113,   114,   115,     0,     0,   116,   117,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   118,   119,
     120,   121,   122,   123,   124,   125,     0,     0,     0,     0,
       0,   126,   102,   103,   104,   105,   106,   107,     0,   108,
     109,   110,   111,     0,   427,     0,     0,     0,     0,     0,
     112,     0,     0,   113,   114,   115,     0,     0,   116,   117,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   118,   119,   120,   121,   122,   123,   124,   125,     0,
       0,     0,     0,     0,   126,   102,   103,   104,   105,   106,
     107,     0,   108,   109,   110,   111,     0,     0,     0,     0,
     429,     0,     0,   112,     0,     0,   113,   114,   115,     0,
       0,   116,   117,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   118,   119,   120,   121,   122,   123,
     124,   125,     0,     0,     0,     0,     0,   126,   102,   103,
     104,   105,   106,   107,     0,   108,   109,   110,   111,     0,
       0,     0,     0,   431,     0,     0,   112,     0,     0,   113,
     114,   115,     0,     0,   116,   117,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   118,   119,   120,
     121,   122,   123,   124,   125,     0,     0,     0,     0,     0,
     126,   102,   103,   104,   105,   106,   107,     0,   108,   109,
     110,   111,     0,     0,     0,     0,   443,     0,     0,   112,
       0,     0,   113,   114,   115,     0,     0,   116,   117,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     118,   119,   120,   121,   122,   123,   124,   125,     0,     0,
       0,     0,     0,   126,   102,   103,   104,   105,   106,   107,
       0,   108,   109,   110,   111,     0,     0,     0,     0,   452,
       0,     0,   112,     0,     0,   113,   114,   115,     0,     0,
     116,   117,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   118,   119,   120,   121,   122,   123,   124,
     125,     0,     0,     0,     0,     0,   126,   102,   103,   104,
     105,   106,   107,     0,   108,   109,   110,   111,     0,     0,
       0,     0,   456,     0,     0,   112,     0,     0,   113,   114,
     115,     0,     0,   116,   117,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   118,   119,   120,   121,
     122,   123,   124,   125,     0,     0,     0,     0,     0,   126,
     102,   103,   104,   105,   106,   107,     0,   108,   109,   110,
     111,     0,     0,     0,     0,     0,     0,     0,   112,     0,
       0,   113,   114,   115,     0,     0,   116,   117,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
     119,   120,   121,   122,   123,   124,   125,     0,     0,     0,
       0,     0,   126,   102,   103,   104,   105,   106,   107,     0,
     108,   109,   110,   111,     0,     0,     0,     0,     0,     0,
       0,   112,     0,     0,   113,   114,   115,     0,     0,   116,
     117,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   118,   119,   120,   121,   122,   123,   124,   125,
     102,   103,   104,   105,   106,   107,     0,   108,   109,   110,
     111,     0,     0,     0,     0,     0,     0,     0,   112,     0,
       0,   113,   114,   115,     0,     0,   116,   117,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
     119,   120,   121,     0,     0,   124,   125,   102,   103,   104,
     105,   106,   107,     0,   108,     0,   110,   111,     0,     0,
       0,     0,     0,     0,     0,   112,     0,     0,   113,   114,
     115,     0,     0,   116,   117,   102,   103,   104,   105,   106,
     107,     0,   108,     0,   110,   111,   118,   119,   120,   121,
       0,     0,   124,   125,     0,     0,   113,   114,   115,     0,
       0,   116,   117,   102,   103,   104,   105,   106,   107,     0,
     108,     0,     0,   111,   118,   119,   120,   121,     0,     0,
     124,   125,     0,     0,   113,   114,   115,     0,     0,   116,
     117,   102,   103,   104,   105,   106,   107,     0,   108,     0,
       0,   111,   118,   119,   120,   121,     0,     0,   124,   125,
       0,     0,   113,   114,   115,     0,   127,   116,   117,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     276,     0,   120,   121,    80,    81,   124,   125,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    80,    81,
       0,     0,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91
};

static const yytype_int16 yycheck[] =
{
       2,     2,   152,   210,    47,   240,   213,     6,   269,   287,
      12,     5,     6,     7,   209,   149,   166,    16,   133,     3,
      55,    55,   355,    28,   251,    48,     0,    48,   223,   354,
     355,    48,     5,     6,   238,   239,    30,    55,    36,    33,
      34,    35,    36,    53,    53,    39,    40,    41,   198,    43,
      44,    56,   259,    36,    57,    53,   381,   382,    48,    53,
      55,    96,    96,    42,    43,    44,    45,    61,    62,   402,
      49,    94,    93,    52,   352,    59,    93,   402,    96,    57,
      89,   406,    53,    93,    63,    64,    65,    53,   295,    68,
      69,   206,   226,   300,   301,   290,   303,   375,   325,    93,
     307,    96,   309,     5,     6,    44,    45,   372,    87,    88,
      49,    53,    53,    52,    36,   114,   115,   382,    89,    53,
      55,    53,    24,   330,    59,    64,    65,    53,   335,    53,
     337,   338,    49,   340,    36,    37,    55,   139,   139,   400,
      59,    53,   292,    42,    43,    44,    45,    64,    65,    24,
      49,   358,    57,    52,    57,    53,   363,    53,   436,   366,
     395,    36,    37,    14,    55,    64,    65,   317,    59,    68,
      69,    55,    55,    35,    35,    59,    59,   384,    42,    43,
      44,    45,   389,    55,   419,    49,    55,    59,    52,    55,
      59,   234,    36,    59,     5,     6,     7,    53,    58,    36,
      64,    65,    35,   410,    36,    53,   413,    23,   210,    23,
       3,   213,    55,    54,    53,    55,    54,    53,   425,    30,
     427,    56,    33,    34,    35,    36,    57,    39,    39,    40,
      41,    58,    43,    44,    58,    48,    58,    96,     5,     6,
       7,    36,    53,     8,    26,    55,    54,    54,    57,    54,
      61,    62,    54,    54,    54,    54,    59,   259,    48,    55,
      58,    36,    59,    30,    58,   415,    33,    34,    35,    36,
      58,    58,    39,    40,    41,    54,    43,    44,    59,    57,
      91,    58,   247,   433,    57,    59,    53,    59,    57,    59,
      56,    48,    48,   295,    61,    62,    57,   447,   300,   301,
     246,   303,    57,    57,   382,   307,   236,   309,   345,    -1,
      -1,    -1,    -1,    -1,     5,     6,     7,    -1,    -1,    -1,
      -1,   323,   323,    -1,    91,    -1,    -1,    -1,   330,    -1,
      -1,    -1,    -1,   335,    -1,   337,   338,    -1,   340,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    -1,    -1,   358,    -1,    -1,    -1,
      -1,   363,    53,    -1,   366,    -1,    57,    58,    -1,    -1,
      61,    62,    -1,    10,    -1,   377,   377,    -1,    -1,    -1,
      -1,    -1,   384,    -1,    -1,    -1,    -1,   389,    -1,    -1,
      -1,    -1,    29,    30,    31,    32,    33,    -1,   400,   400,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   410,    -1,
      -1,   413,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    59,   425,    -1,   427,    63,    -1,    -1,    66,
      -1,    -1,    -1,    70,    -1,    -1,    -1,    74,    75,    -1,
      77,    78,    79,   445,   445,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    -1,    94,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   102,   103,   104,   105,   106,
     107,    -1,   109,   110,   111,   112,   113,    -1,    -1,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,    -1,    23,    -1,    -1,   132,   133,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,   146,
      -1,    -1,    -1,    -1,    -1,   152,    -1,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   166,
      -1,    -1,    -1,    -1,    -1,    66,    67,    -1,    -1,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    42,
      43,    44,    45,    46,    47,    -1,    49,    50,    51,    52,
      -1,   198,    93,    -1,    -1,    -1,    -1,    60,    -1,   206,
      63,    64,    65,    -1,   211,    68,    69,    -1,    -1,   216,
     217,   218,    -1,   220,   221,   222,    -1,    -1,    81,    82,
      83,    84,    85,   230,    87,    88,   233,    -1,    -1,   236,
      -1,   238,   239,   240,   241,    -1,   243,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     257,    -1,    -1,    -1,   261,   262,    -1,   264,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   276,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   286,
      -1,    -1,    -1,    -1,    -1,   292,    -1,     5,     6,     7,
      -1,   298,    -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,
      -1,   308,    -1,    -1,   311,    -1,    -1,    -1,    -1,    -1,
     317,    -1,    30,    -1,    -1,    33,    34,    35,    36,    -1,
      -1,    39,    40,    41,   331,    43,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   341,    53,    -1,    -1,    -1,    57,
      -1,    -1,    -1,    61,    62,    -1,     5,     6,     7,    -1,
      -1,    -1,   359,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     367,    -1,    -1,    -1,    -1,    -1,    -1,   374,    -1,    -1,
      -1,    30,    -1,    -1,    33,    34,    35,    36,   385,    -1,
      39,    40,    41,   390,    43,    44,   393,   394,   395,    -1,
      -1,    48,    -1,    -1,    53,    -1,    -1,    -1,    -1,    58,
      -1,    -1,    61,    62,    -1,    -1,    -1,    -1,   415,    66,
      67,   418,   419,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    -1,    -1,    -1,   433,     3,    -1,     5,
       6,     7,    -1,     9,   441,    11,    93,    13,    14,    15,
     447,    -1,    -1,   450,    20,    21,    22,    -1,    24,    25,
      -1,    27,    -1,    29,    30,    -1,    -1,    33,    34,    35,
      36,    -1,    38,    39,    40,    41,    -1,    43,    44,    -1,
      -1,    -1,    -1,    -1,     5,     6,     7,    53,     9,    -1,
      11,    -1,    13,    14,    15,    61,    62,    -1,    19,    20,
      21,    22,    -1,    24,    25,    26,    27,    -1,    -1,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    38,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    -1,     5,     6,     7,
      -1,     9,    53,    11,    -1,    13,    14,    15,    -1,    -1,
      61,    62,    20,    21,    22,    -1,    24,    25,    -1,    27,
      -1,    -1,    30,    -1,    -1,    33,    34,    35,    36,    -1,
      38,    39,    40,    41,    -1,    43,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    61,    62,     5,     6,     7,    -1,     9,
      -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    -1,
      20,    21,    22,    -1,    24,    25,    -1,    27,    -1,    -1,
      30,    -1,    -1,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    -1,    43,    44,    -1,    -1,    -1,     5,     6,
       7,    -1,     9,    53,    11,    -1,    13,    14,    15,    59,
      -1,    61,    62,    20,    21,    22,    -1,    24,    25,    -1,
      27,    -1,    -1,    30,    -1,    -1,    33,    34,    35,    36,
      -1,    38,    39,    40,    41,    -1,    43,    44,    -1,    -1,
      -1,     5,     6,     7,    -1,     9,    53,    11,    -1,    13,
      14,    15,    59,    -1,    61,    62,    20,    21,    22,    -1,
      24,    25,    -1,    27,    -1,    -1,    30,    -1,    -1,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    -1,    43,
      44,    -1,    -1,    -1,     5,     6,     7,    -1,     9,    53,
      11,    -1,    13,    14,    15,    59,    -1,    61,    62,    20,
      21,    22,    -1,    24,    25,    -1,    27,    -1,    -1,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    38,    39,    40,
      41,    -1,    43,    44,     5,     6,     7,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,    -1,    43,    44,     5,     6,     7,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,    -1,    43,    44,     5,     6,     7,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,    -1,    43,    44,     5,     6,     7,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,    -1,    43,    44,     5,     6,     7,    -1,    -1,    -1,
      -1,    -1,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,    -1,    43,    44,     5,     6,     7,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,    -1,    43,    44,     5,     6,     7,    -1,    -1,    -1,
      -1,    -1,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,    -1,    43,    44,     5,     6,     7,    -1,    -1,    -1,
      -1,    -1,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,    -1,    43,    44,     5,     6,     7,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,    -1,    43,    44,     5,     6,     7,    -1,    -1,    -1,
      -1,    -1,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,    -1,    43,    44,     5,     6,     7,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,    -1,    43,    44,     5,     6,     7,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,    -1,    43,    44,     5,     6,     7,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    42,    43,    44,    45,
      46,    47,    53,    49,    50,    51,    52,    -1,    54,    55,
      61,    62,    -1,    -1,    60,    -1,    -1,    63,    64,    65,
      -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    94,    42,
      43,    44,    45,    46,    47,    -1,    49,    50,    51,    52,
      -1,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    -1,
      63,    64,    65,    -1,    -1,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    94,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    63,    64,    65,    -1,    -1,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      90,    -1,    -1,    -1,    94,    42,    43,    44,    45,    46,
      47,    -1,    49,    50,    51,    52,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    60,    -1,    -1,    63,    64,    65,    -1,
      -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    90,    -1,    -1,    -1,    94,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    52,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    63,
      64,    65,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    90,    -1,    -1,    -1,
      94,    42,    43,    44,    45,    46,    47,    -1,    49,    50,
      51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    63,    64,    65,    -1,    -1,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    -1,
      -1,    92,    -1,    94,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    63,    64,    65,    -1,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    92,    -1,    94,    42,    43,    44,
      45,    46,    47,    -1,    49,    50,    51,    52,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    63,    64,
      65,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    -1,    -1,    92,    -1,    94,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    63,    64,    65,    -1,    -1,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    -1,    -1,
      92,    -1,    94,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    51,    52,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    60,    -1,    -1,    63,    64,    65,    -1,    -1,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    -1,    -1,    -1,    -1,    94,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    51,    52,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    63,    64,    65,
      -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    94,    42,
      43,    44,    45,    46,    47,    -1,    49,    50,    51,    52,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      63,    64,    65,    -1,    -1,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    94,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    63,    64,    65,    -1,    -1,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      -1,    -1,    -1,    -1,    94,    42,    43,    44,    45,    46,
      47,    -1,    49,    50,    51,    52,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    60,    -1,    -1,    63,    64,    65,    -1,
      -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    -1,    -1,    -1,    -1,    94,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    52,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    60,    -1,    -1,    63,
      64,    65,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,
      94,    42,    43,    44,    45,    46,    47,    -1,    49,    50,
      51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    63,    64,    65,    -1,    -1,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    94,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    63,    64,    65,    -1,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    94,    42,    43,    44,
      45,    46,    47,    -1,    49,    50,    51,    52,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    60,    -1,    -1,    63,    64,
      65,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,    94,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,    -1,
      -1,    63,    64,    65,    -1,    -1,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    -1,    -1,
      -1,    -1,    94,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    51,    52,    -1,    -1,    -1,    56,    -1,    -1,
      -1,    60,    -1,    -1,    63,    64,    65,    -1,    -1,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    -1,    -1,    -1,    -1,    94,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    51,    52,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    63,    64,    65,
      -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    94,    42,
      43,    44,    45,    46,    47,    -1,    49,    50,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      63,    64,    65,    -1,    -1,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    90,    -1,    -1,
      -1,    94,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    63,    64,    65,    -1,    -1,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      -1,    -1,    -1,    -1,    94,    42,    43,    44,    45,    46,
      47,    -1,    49,    50,    51,    52,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    60,    -1,    -1,    63,    64,    65,    -1,
      -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    -1,    -1,    -1,    -1,    94,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    52,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    63,
      64,    65,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,
      94,    42,    43,    44,    45,    46,    47,    -1,    49,    50,
      51,    52,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,
      -1,    -1,    63,    64,    65,    -1,    -1,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    94,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    63,    64,    65,    -1,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    94,    42,    43,    44,
      45,    46,    47,    -1,    49,    50,    51,    52,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    63,    64,
      65,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,    94,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    63,    64,    65,    -1,    -1,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    -1,    -1,
      -1,    -1,    94,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    51,    52,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    63,    64,    65,    -1,    -1,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    -1,    -1,    -1,    -1,    94,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    51,    52,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    63,    64,    65,
      -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    94,    42,
      43,    44,    45,    46,    47,    -1,    49,    50,    51,    52,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      63,    64,    65,    -1,    -1,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    94,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    63,    64,    65,    -1,    -1,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      -1,    -1,    -1,    -1,    94,    42,    43,    44,    45,    46,
      47,    -1,    49,    50,    51,    52,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    60,    -1,    -1,    63,    64,    65,    -1,
      -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    -1,    -1,    -1,    -1,    94,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    52,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    60,    -1,    -1,    63,
      64,    65,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,
      94,    42,    43,    44,    45,    46,    47,    -1,    49,    50,
      51,    52,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,
      -1,    -1,    63,    64,    65,    -1,    -1,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    94,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    60,    -1,    -1,    63,    64,    65,    -1,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    94,    42,    43,    44,
      45,    46,    47,    -1,    49,    50,    51,    52,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    60,    -1,    -1,    63,    64,
      65,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,    94,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    63,    64,    65,    -1,    -1,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    -1,    -1,
      -1,    -1,    94,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    63,    64,    65,    -1,    -1,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    63,    64,    65,    -1,    -1,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    -1,    -1,    87,    88,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    63,    64,
      65,    -1,    -1,    68,    69,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    51,    52,    81,    82,    83,    84,
      -1,    -1,    87,    88,    -1,    -1,    63,    64,    65,    -1,
      -1,    68,    69,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,    52,    81,    82,    83,    84,    -1,    -1,
      87,    88,    -1,    -1,    63,    64,    65,    -1,    -1,    68,
      69,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    52,    81,    82,    83,    84,    -1,    -1,    87,    88,
      -1,    -1,    63,    64,    65,    -1,    48,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    -1,    83,    84,    66,    67,    87,    88,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    66,    67,
      -1,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    98,    99,     0,     3,     5,     6,     7,     9,    11,
      13,    14,    15,    20,    21,    22,    24,    25,    27,    29,
      30,    33,    34,    35,    36,    38,    39,    40,    41,    43,
      44,    53,    61,    62,   100,   101,   104,   105,   109,   110,
     117,   120,   121,   122,   123,   124,   125,   126,   127,   130,
     131,   135,    36,    36,    53,   128,   128,    57,    57,    53,
       7,    34,    57,    58,   125,   130,    53,    58,   104,   116,
      53,    53,    53,   128,    53,    53,    36,    53,    48,    48,
      66,    67,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    93,   129,    53,    89,   125,   125,   125,   125,
     125,    57,    42,    43,    44,    45,    46,    47,    49,    50,
      51,    52,    60,    63,    64,    65,    68,    69,    81,    82,
      83,    84,    85,    86,    87,    88,    94,    48,   129,    53,
      89,   125,    53,    53,   125,   125,   136,    57,   125,   103,
      14,    35,    57,   125,    35,    35,    53,   125,   125,    58,
     125,   125,    58,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   140,    58,   125,   132,   133,
     134,    36,    54,   125,   125,   125,   125,   125,   125,    36,
     125,   125,   125,   125,   125,   128,   128,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,    58,   125,
      35,   106,   107,   108,    36,    54,    93,   112,   125,   112,
      54,    55,    59,    54,    59,   104,    53,    23,    57,   125,
      57,    23,    23,   125,    54,    54,   102,   105,    54,    55,
      55,    57,   136,    55,    96,   136,    55,    54,    53,    53,
      93,    56,   136,    48,    94,    54,    55,    53,   112,    56,
     111,   111,   116,   125,    57,   116,   125,    91,   125,    54,
     125,    57,    57,   125,    91,   125,   125,   111,    58,    58,
      59,   105,    39,   125,    59,   125,    48,   129,    59,   132,
     134,   134,   140,   125,    59,   125,    48,    58,   108,   106,
      96,    36,    55,   113,   113,     8,    54,   125,    90,   116,
      54,    54,   125,    54,   125,    57,   125,    54,    90,    54,
      54,    26,   118,   118,    57,    54,    57,    58,   125,    54,
      54,    96,   125,   103,    54,   111,   136,    54,    54,   116,
      54,    90,   125,   116,   116,    54,   116,    54,    54,   125,
      54,    90,   116,   125,   116,    58,   119,   125,    59,    59,
     136,    59,    58,   113,    58,    58,   116,   125,    54,    92,
     116,   116,   116,    54,   116,   125,    54,    92,    24,    36,
      37,   137,   138,   139,    28,    56,    59,   103,    54,   110,
     114,   115,   138,   114,    54,    92,   116,   125,   116,    54,
      92,   116,   125,    48,    48,    93,    36,    59,   139,   125,
     103,    59,    58,    57,    59,   110,   115,    59,   116,   125,
      54,   116,   125,    54,   125,    58,   125,   140,    48,    93,
      57,    19,   118,   114,    57,    54,   116,    54,   116,    57,
     136,    57,    96,    58,   125,   140,    56,    59,   116,   116,
      59,    48,   136,    57,    96,   103,    57,    58,   125,    59,
      48,   136,    57,    57,   125,    59,    57,    57
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    97,    98,    99,    99,   100,   100,   100,   101,   102,
     102,   103,   103,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   105,   105,
     106,   106,   107,   107,   108,   108,   108,   108,   109,   110,
     110,   110,   110,   110,   110,   111,   111,   112,   112,   113,
     113,   114,   114,   114,   114,   115,   115,   116,   116,   117,
     117,   118,   118,   118,   119,   119,   120,   120,   121,   121,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   123,   123,   123,   123,   123,   123,   123,
     124,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     126,   126,   127,   127,   128,   128,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     131,   131,   131,   132,   132,   133,   133,   134,   134,   135,
     135,   136,   136,   137,   137,   138,   138,   139,   139,   139,
     139,   139,   139,   139,   139,   140,   140
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
       1,     3,     5,     6,     8,     2,     5,     2,     3,     5,
       4,     6,     6,     1,     3,     1,     3,     0,     1,     4,
       6,     1,     3,     0,     1,     1,     2,     4,     6,     5,
       7,     4,     7,     9,     8,     1,     3
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
#line 206 "CMDgram.y"
      { }
#line 2450 "CMDgram.cpp"
    break;

  case 3: /* decl_list: %empty  */
#line 211 "CMDgram.y"
      { (yyval.stmt) = nil; }
#line 2456 "CMDgram.cpp"
    break;

  case 4: /* decl_list: decl_list decl  */
#line 213 "CMDgram.y"
      { if(!Script::gStatementList) { Script::gStatementList = (yyvsp[0].stmt); } else { Script::gStatementList->append((yyvsp[0].stmt)); } }
#line 2462 "CMDgram.cpp"
    break;

  case 5: /* decl: stmt  */
#line 218 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2468 "CMDgram.cpp"
    break;

  case 6: /* decl: fn_decl_stmt  */
#line 220 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2474 "CMDgram.cpp"
    break;

  case 7: /* decl: package_decl  */
#line 222 "CMDgram.y"
     { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2480 "CMDgram.cpp"
    break;

  case 8: /* package_decl: rwPACKAGE IDENT '{' fn_decl_list '}' ';'  */
#line 227 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-2].stmt); for(StmtNode *walk = ((yyvsp[-2].stmt));walk;walk = walk->getNext() ) walk->setPackage((yyvsp[-4].s).value); }
#line 2486 "CMDgram.cpp"
    break;

  case 9: /* fn_decl_list: fn_decl_stmt  */
#line 232 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2492 "CMDgram.cpp"
    break;

  case 10: /* fn_decl_list: fn_decl_list fn_decl_stmt  */
#line 234 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-1].stmt); ((yyvsp[-1].stmt))->append((yyvsp[0].stmt));  }
#line 2498 "CMDgram.cpp"
    break;

  case 11: /* statement_list: %empty  */
#line 239 "CMDgram.y"
      { (yyval.stmt) = nil; }
#line 2504 "CMDgram.cpp"
    break;

  case 12: /* statement_list: statement_list stmt  */
#line 241 "CMDgram.y"
      { if(!(yyvsp[-1].stmt)) { (yyval.stmt) = (yyvsp[0].stmt); } else { ((yyvsp[-1].stmt))->append((yyvsp[0].stmt)); (yyval.stmt) = (yyvsp[-1].stmt); } }
#line 2510 "CMDgram.cpp"
    break;

  case 19: /* stmt: rwBREAK ';'  */
#line 252 "CMDgram.y"
      { (yyval.stmt) = BreakStmtNode::alloc( (yyvsp[-1].i).lineNumber ); }
#line 2516 "CMDgram.cpp"
    break;

  case 20: /* stmt: rwCONTINUE ';'  */
#line 254 "CMDgram.y"
      { (yyval.stmt) = ContinueStmtNode::alloc( (yyvsp[-1].i).lineNumber ); }
#line 2522 "CMDgram.cpp"
    break;

  case 21: /* stmt: rwRETURN ';'  */
#line 256 "CMDgram.y"
      { (yyval.stmt) = ReturnStmtNode::alloc( (yyvsp[-1].i).lineNumber, NULL ); }
#line 2528 "CMDgram.cpp"
    break;

  case 22: /* stmt: rwRETURN expr ';'  */
#line 258 "CMDgram.y"
      { (yyval.stmt) = ReturnStmtNode::alloc( (yyvsp[-2].i).lineNumber, (yyvsp[-1].expr) ); }
#line 2534 "CMDgram.cpp"
    break;

  case 23: /* stmt: rwRETURN '{' expr_list '}' ';'  */
#line 261 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-4].i).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-2].expr);
//          for (ExprNode* expr = (ExprNode*)$3; expr; expr = (ExprNode*)(expr->next)) {
//             vecNode->elements.push_back(expr);
//          }
         (yyval.stmt) = ReturnStmtNode::alloc( (yyvsp[-4].i).lineNumber, vecNode );
      }
#line 2547 "CMDgram.cpp"
    break;

  case 24: /* stmt: expression_stmt ';'  */
#line 271 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-1].stmt); }
#line 2553 "CMDgram.cpp"
    break;

  case 25: /* stmt: TTAG '=' expr ';'  */
#line 273 "CMDgram.y"
      { (yyval.stmt) = TTagSetStmtNode::alloc( (yyvsp[-3].s).lineNumber, (yyvsp[-3].s).value, (yyvsp[-1].expr), NULL ); }
#line 2559 "CMDgram.cpp"
    break;

  case 26: /* stmt: TTAG '=' expr ',' expr ';'  */
#line 275 "CMDgram.y"
      { (yyval.stmt) = TTagSetStmtNode::alloc( (yyvsp[-5].s).lineNumber, (yyvsp[-5].s).value, (yyvsp[-3].expr), (yyvsp[-1].expr) ); }
#line 2565 "CMDgram.cpp"
    break;

  case 27: /* stmt: DOCBLOCK  */
#line 277 "CMDgram.y"
      { (yyval.stmt) = StrConstNode::alloc( (yyvsp[0].str).lineNumber, (yyvsp[0].str).value, false, true ); }
#line 2571 "CMDgram.cpp"
    break;

  case 28: /* fn_decl_stmt: rwDEFINE IDENT '(' var_list_decl ')' '{' statement_list '}'  */
#line 283 "CMDgram.y"
      { (yyval.stmt) = FunctionDeclStmtNode::alloc( (yyvsp[-7].i).lineNumber, (yyvsp[-6].s).value, NULL, (yyvsp[-4].var), (yyvsp[-1].stmt) ); }
#line 2577 "CMDgram.cpp"
    break;

  case 29: /* fn_decl_stmt: rwDEFINE IDENT opCOLONCOLON IDENT '(' var_list_decl ')' '{' statement_list '}'  */
#line 286 "CMDgram.y"
      { (yyval.stmt) = FunctionDeclStmtNode::alloc( (yyvsp[-9].i).lineNumber, (yyvsp[-6].s).value, (yyvsp[-8].s).value, (yyvsp[-4].var), (yyvsp[-1].stmt) ); }
#line 2583 "CMDgram.cpp"
    break;

  case 30: /* var_list_decl: %empty  */
#line 291 "CMDgram.y"
      { (yyval.var) = NULL; }
#line 2589 "CMDgram.cpp"
    break;

  case 31: /* var_list_decl: var_list  */
#line 293 "CMDgram.y"
      { (yyval.var) = (yyvsp[0].var); }
#line 2595 "CMDgram.cpp"
    break;

  case 32: /* var_list: param  */
#line 298 "CMDgram.y"
      { (yyval.var) = (yyvsp[0].var); }
#line 2601 "CMDgram.cpp"
    break;

  case 33: /* var_list: var_list ',' param  */
#line 300 "CMDgram.y"
      { (yyval.var) = (yyvsp[-2].var); ((StmtNode*)((yyvsp[-2].var)))->append((StmtNode*)(yyvsp[0].var) ); }
#line 2607 "CMDgram.cpp"
    break;

  case 34: /* param: VAR  */
#line 317 "CMDgram.y"
      { (yyval.var) = VarNode::allocParam((yyvsp[0].s).lineNumber, (yyvsp[0].s).value, NULL); }
#line 2613 "CMDgram.cpp"
    break;

  case 35: /* param: VAR '?'  */
#line 319 "CMDgram.y"
      { (yyval.var) = VarNode::allocParam((yyvsp[-1].s).lineNumber, (yyvsp[-1].s).value, NULL); }
#line 2619 "CMDgram.cpp"
    break;

  case 36: /* param: VAR '=' expr  */
#line 321 "CMDgram.y"
      { (yyval.var) = VarNode::allocParam((yyvsp[-2].s).lineNumber, (yyvsp[-2].s).value, (yyvsp[0].expr)); }
#line 2625 "CMDgram.cpp"
    break;

  case 37: /* param: VAR '?' '=' expr  */
#line 323 "CMDgram.y"
      { (yyval.var) = VarNode::allocParam((yyvsp[-3].s).lineNumber, (yyvsp[-3].s).value, (yyvsp[0].expr)); }
#line 2631 "CMDgram.cpp"
    break;

  case 38: /* datablock_decl: rwDATABLOCK class_name_expr '(' expr parent_block ')' '{' slot_assign_list_opt '}' ';'  */
#line 328 "CMDgram.y"
      { (yyval.stmt) = ObjectDeclNode::alloc( (yyvsp[-9].i).lineNumber, (yyvsp[-8].expr), (yyvsp[-6].expr), NULL, (yyvsp[-5].s).value, (yyvsp[-2].slist), NULL, true, false, false); }
#line 2637 "CMDgram.cpp"
    break;

  case 39: /* object_decl: rwDECLARE class_name_expr '(' object_name parent_block object_args ')' '{' object_declare_block '}'  */
#line 333 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-9].i).lineNumber, (yyvsp[-8].expr), (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-5].s).value, (yyvsp[-1].odcl).slots, (yyvsp[-1].odcl).decls, false, false, false); }
#line 2643 "CMDgram.cpp"
    break;

  case 40: /* object_decl: rwDECLARE class_name_expr '(' object_name parent_block object_args ')'  */
#line 335 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-6].i).lineNumber, (yyvsp[-5].expr), (yyvsp[-3].expr), (yyvsp[-1].expr), (yyvsp[-2].s).value, NULL, NULL, false, false, false); }
#line 2649 "CMDgram.cpp"
    break;

  case 41: /* object_decl: rwDECLARE class_name_expr '(' '[' object_name ']' parent_block object_args ')' '{' object_declare_block '}'  */
#line 337 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-11].i).lineNumber, (yyvsp[-10].expr), (yyvsp[-7].expr), (yyvsp[-4].expr), (yyvsp[-5].s).value, (yyvsp[-1].odcl).slots, (yyvsp[-1].odcl).decls, false, true, false); }
#line 2655 "CMDgram.cpp"
    break;

  case 42: /* object_decl: rwDECLARE class_name_expr '(' '[' object_name ']' parent_block object_args ')'  */
#line 339 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-8].i).lineNumber, (yyvsp[-7].expr), (yyvsp[-4].expr), (yyvsp[-1].expr), (yyvsp[-2].s).value, NULL, NULL, false, true, false); }
#line 2661 "CMDgram.cpp"
    break;

  case 43: /* object_decl: rwDECLARESINGLETON class_name_expr '(' object_name parent_block object_args ')' '{' object_declare_block '}'  */
#line 341 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-9].i).lineNumber, (yyvsp[-8].expr), (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-5].s).value, (yyvsp[-1].odcl).slots, (yyvsp[-1].odcl).decls, false, false, true); }
#line 2667 "CMDgram.cpp"
    break;

  case 44: /* object_decl: rwDECLARESINGLETON class_name_expr '(' object_name parent_block object_args ')'  */
#line 343 "CMDgram.y"
      { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[-6].i).lineNumber, (yyvsp[-5].expr), (yyvsp[-3].expr), (yyvsp[-1].expr), (yyvsp[-2].s).value, NULL, NULL, false, false, true); }
#line 2673 "CMDgram.cpp"
    break;

  case 45: /* parent_block: %empty  */
#line 348 "CMDgram.y"
      { (yyval.s).value = NULL; }
#line 2679 "CMDgram.cpp"
    break;

  case 46: /* parent_block: ':' IDENT  */
#line 350 "CMDgram.y"
      { (yyval.s) = (yyvsp[0].s); }
#line 2685 "CMDgram.cpp"
    break;

  case 47: /* object_name: %empty  */
#line 355 "CMDgram.y"
      { (yyval.expr) = StrConstNode::alloc( CodeBlock::smCurrentParser->getCurrentLine(), "", false); }
#line 2691 "CMDgram.cpp"
    break;

  case 48: /* object_name: expr  */
#line 357 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 2697 "CMDgram.cpp"
    break;

  case 49: /* object_args: %empty  */
#line 362 "CMDgram.y"
      { (yyval.expr) = NULL; }
#line 2703 "CMDgram.cpp"
    break;

  case 50: /* object_args: ',' expr_list  */
#line 364 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 2709 "CMDgram.cpp"
    break;

  case 51: /* object_declare_block: %empty  */
#line 369 "CMDgram.y"
      { (yyval.odcl).slots = NULL; (yyval.odcl).decls = NULL; }
#line 2715 "CMDgram.cpp"
    break;

  case 52: /* object_declare_block: slot_assign_list  */
#line 371 "CMDgram.y"
      { (yyval.odcl).slots = (yyvsp[0].slist); (yyval.odcl).decls = NULL; }
#line 2721 "CMDgram.cpp"
    break;

  case 53: /* object_declare_block: object_decl_list  */
#line 373 "CMDgram.y"
      { (yyval.odcl).slots = NULL; (yyval.odcl).decls = (yyvsp[0].od); }
#line 2727 "CMDgram.cpp"
    break;

  case 54: /* object_declare_block: slot_assign_list object_decl_list  */
#line 375 "CMDgram.y"
      { (yyval.odcl).slots = (yyvsp[-1].slist); (yyval.odcl).decls = (yyvsp[0].od); }
#line 2733 "CMDgram.cpp"
    break;

  case 55: /* object_decl_list: object_decl ';'  */
#line 380 "CMDgram.y"
      { (yyval.od) = (yyvsp[-1].od); }
#line 2739 "CMDgram.cpp"
    break;

  case 56: /* object_decl_list: object_decl_list object_decl ';'  */
#line 382 "CMDgram.y"
      { (yyvsp[-2].od)->append((yyvsp[-1].od)); (yyval.od) = (yyvsp[-2].od); }
#line 2745 "CMDgram.cpp"
    break;

  case 57: /* stmt_block: '{' statement_list '}'  */
#line 387 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-1].stmt); }
#line 2751 "CMDgram.cpp"
    break;

  case 58: /* stmt_block: stmt  */
#line 389 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2757 "CMDgram.cpp"
    break;

  case 59: /* switch_stmt: rwSWITCH '(' expr ')' '{' case_block '}'  */
#line 394 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-1].ifnode); (yyvsp[-1].ifnode)->propagateSwitchExpr((yyvsp[-4].expr), false); }
#line 2763 "CMDgram.cpp"
    break;

  case 60: /* switch_stmt: rwSWITCHSTR '(' expr ')' '{' case_block '}'  */
#line 396 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[-1].ifnode); (yyvsp[-1].ifnode)->propagateSwitchExpr((yyvsp[-4].expr), true); }
#line 2769 "CMDgram.cpp"
    break;

  case 61: /* case_block: rwCASE case_expr ':' statement_list  */
#line 404 "CMDgram.y"
      { (yyval.ifnode) = IfStmtNode::alloc( (yyvsp[-3].i).lineNumber, (yyvsp[-2].expr), (yyvsp[0].stmt), NULL, false); }
#line 2775 "CMDgram.cpp"
    break;

  case 62: /* case_block: rwCASE case_expr ':' statement_list rwDEFAULT ':' statement_list  */
#line 406 "CMDgram.y"
      { (yyval.ifnode) = IfStmtNode::alloc( (yyvsp[-6].i).lineNumber, (yyvsp[-5].expr), (yyvsp[-3].stmt), (yyvsp[0].stmt), false); }
#line 2781 "CMDgram.cpp"
    break;

  case 63: /* case_block: rwCASE case_expr ':' statement_list case_block  */
#line 408 "CMDgram.y"
      { (yyval.ifnode) = IfStmtNode::alloc( (yyvsp[-4].i).lineNumber, (yyvsp[-3].expr), (yyvsp[-1].stmt), (yyvsp[0].ifnode), true); }
#line 2787 "CMDgram.cpp"
    break;

  case 64: /* case_expr: expr  */
#line 413 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 2793 "CMDgram.cpp"
    break;

  case 65: /* case_expr: case_expr rwCASEOR expr  */
#line 415 "CMDgram.y"
      { ((yyvsp[-2].expr))->append((yyvsp[0].expr)); (yyval.expr) = (yyvsp[-2].expr); }
#line 2799 "CMDgram.cpp"
    break;

  case 66: /* if_stmt: rwIF '(' expr ')' stmt_block  */
#line 420 "CMDgram.y"
      { (yyval.stmt) = IfStmtNode::alloc((yyvsp[-4].i).lineNumber, (yyvsp[-2].expr), (yyvsp[0].stmt), NULL, false); }
#line 2805 "CMDgram.cpp"
    break;

  case 67: /* if_stmt: rwIF '(' expr ')' stmt_block rwELSE stmt_block  */
#line 422 "CMDgram.y"
      { (yyval.stmt) = IfStmtNode::alloc((yyvsp[-6].i).lineNumber, (yyvsp[-4].expr), (yyvsp[-2].stmt), (yyvsp[0].stmt), false); }
#line 2811 "CMDgram.cpp"
    break;

  case 68: /* while_stmt: rwWHILE '(' expr ')' stmt_block  */
#line 427 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-4].i).lineNumber, nil, (yyvsp[-2].expr), nil, (yyvsp[0].stmt), false); }
#line 2817 "CMDgram.cpp"
    break;

  case 69: /* while_stmt: rwDO stmt_block rwWHILE '(' expr ')'  */
#line 429 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-3].i).lineNumber, nil, (yyvsp[-1].expr), nil, (yyvsp[-4].stmt), true); }
#line 2823 "CMDgram.cpp"
    break;

  case 70: /* for_stmt: rwFOR '(' expr ';' expr ';' expr ')' stmt_block  */
#line 434 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-8].i).lineNumber, (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), false); }
#line 2829 "CMDgram.cpp"
    break;

  case 71: /* for_stmt: rwFOR '(' expr ';' expr ';' ')' stmt_block  */
#line 436 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-7].i).lineNumber, (yyvsp[-5].expr), (yyvsp[-3].expr), NULL, (yyvsp[0].stmt), false); }
#line 2835 "CMDgram.cpp"
    break;

  case 72: /* for_stmt: rwFOR '(' expr ';' ';' expr ')' stmt_block  */
#line 438 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-7].i).lineNumber, (yyvsp[-5].expr), NULL, (yyvsp[-2].expr), (yyvsp[0].stmt), false); }
#line 2841 "CMDgram.cpp"
    break;

  case 73: /* for_stmt: rwFOR '(' expr ';' ';' ')' stmt_block  */
#line 440 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-6].i).lineNumber, (yyvsp[-4].expr), NULL, NULL, (yyvsp[0].stmt), false); }
#line 2847 "CMDgram.cpp"
    break;

  case 74: /* for_stmt: rwFOR '(' ';' expr ';' expr ')' stmt_block  */
#line 442 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-7].i).lineNumber, NULL, (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), false); }
#line 2853 "CMDgram.cpp"
    break;

  case 75: /* for_stmt: rwFOR '(' ';' expr ';' ')' stmt_block  */
#line 444 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-6].i).lineNumber, NULL, (yyvsp[-3].expr), NULL, (yyvsp[0].stmt), false); }
#line 2859 "CMDgram.cpp"
    break;

  case 76: /* for_stmt: rwFOR '(' ';' ';' expr ')' stmt_block  */
#line 446 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-6].i).lineNumber, NULL, NULL, (yyvsp[-2].expr), (yyvsp[0].stmt), false); }
#line 2865 "CMDgram.cpp"
    break;

  case 77: /* for_stmt: rwFOR '(' ';' ';' ')' stmt_block  */
#line 448 "CMDgram.y"
      { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[-5].i).lineNumber, NULL, NULL, NULL, (yyvsp[0].stmt), false); }
#line 2871 "CMDgram.cpp"
    break;

  case 78: /* for_stmt: rwFOR '(' VAR rwIN expr opDOTDOT expr ')' stmt_block  */
#line 452 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-8].i).lineNumber, (yyvsp[-6].s).value, (yyvsp[-4].expr), (yyvsp[-2].expr), NULL, (yyvsp[0].stmt), 2 ); }
#line 2877 "CMDgram.cpp"
    break;

  case 79: /* for_stmt: rwFOR '(' VAR rwIN rwRANGE expr opDOTDOT expr ')' stmt_block  */
#line 455 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-9].i).lineNumber, (yyvsp[-7].s).value, (yyvsp[-4].expr), (yyvsp[-2].expr), NULL, (yyvsp[0].stmt), 102 ); }
#line 2883 "CMDgram.cpp"
    break;

  case 80: /* for_stmt: rwFOR '(' VAR rwIN expr opDOTDOT expr rwSTEP expr ')' stmt_block  */
#line 458 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-10].i).lineNumber, (yyvsp[-8].s).value, (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), 3 ); }
#line 2889 "CMDgram.cpp"
    break;

  case 81: /* for_stmt: rwFOR '(' VAR rwIN rwRANGE expr opDOTDOT expr rwSTEP expr ')' stmt_block  */
#line 461 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-11].i).lineNumber, (yyvsp[-9].s).value, (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), 103 ); }
#line 2895 "CMDgram.cpp"
    break;

  case 82: /* for_stmt: rwFOR '(' VAR rwIN rwRANGE expr ')' stmt_block  */
#line 464 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-7].i).lineNumber, (yyvsp[-5].s).value, (yyvsp[-2].expr), NULL, NULL, (yyvsp[0].stmt), 104 ); }
#line 2901 "CMDgram.cpp"
    break;

  case 83: /* foreach_stmt: rwFOREACH '(' VAR rwIN expr ')' stmt_block  */
#line 475 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc( (yyvsp[-6].i).lineNumber, (yyvsp[-4].s).value, (yyvsp[-2].expr), NULL,NULL, (yyvsp[0].stmt), 0 ); }
#line 2907 "CMDgram.cpp"
    break;

  case 84: /* foreach_stmt: rwFOREACHSTR '(' VAR rwIN expr ')' stmt_block  */
#line 478 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc( (yyvsp[-6].i).lineNumber, (yyvsp[-4].s).value, (yyvsp[-2].expr), NULL,NULL, (yyvsp[0].stmt), 1 ); }
#line 2913 "CMDgram.cpp"
    break;

  case 85: /* foreach_stmt: rwFOREACH '(' VAR rwIN expr opDOTDOT expr ')' stmt_block  */
#line 481 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-8].i).lineNumber, (yyvsp[-6].s).value, (yyvsp[-4].expr), (yyvsp[-2].expr), NULL, (yyvsp[0].stmt), 2 ); }
#line 2919 "CMDgram.cpp"
    break;

  case 86: /* foreach_stmt: rwFOREACH '(' VAR rwIN rwRANGE expr opDOTDOT expr ')' stmt_block  */
#line 484 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-9].i).lineNumber, (yyvsp[-7].s).value, (yyvsp[-4].expr), (yyvsp[-2].expr), NULL, (yyvsp[0].stmt), 102 ); }
#line 2925 "CMDgram.cpp"
    break;

  case 87: /* foreach_stmt: rwFOREACH '(' VAR rwIN expr opDOTDOT expr rwSTEP expr ')' stmt_block  */
#line 487 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-10].i).lineNumber, (yyvsp[-8].s).value, (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), 3 ); }
#line 2931 "CMDgram.cpp"
    break;

  case 88: /* foreach_stmt: rwFOREACH '(' VAR rwIN rwRANGE expr opDOTDOT expr rwSTEP expr ')' stmt_block  */
#line 490 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-11].i).lineNumber, (yyvsp[-9].s).value, (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt), 103 ); }
#line 2937 "CMDgram.cpp"
    break;

  case 89: /* foreach_stmt: rwFOREACH '(' VAR rwIN rwRANGE expr ')' stmt_block  */
#line 493 "CMDgram.y"
      { (yyval.stmt) = IterStmtNode::alloc((yyvsp[-7].i).lineNumber, (yyvsp[-5].s).value, (yyvsp[-2].expr), NULL, NULL, (yyvsp[0].stmt), 104 ); }
#line 2943 "CMDgram.cpp"
    break;

  case 90: /* expression_stmt: stmt_expr  */
#line 498 "CMDgram.y"
      { (yyval.stmt) = (yyvsp[0].expr); }
#line 2949 "CMDgram.cpp"
    break;

  case 91: /* expr: stmt_expr  */
#line 503 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 2955 "CMDgram.cpp"
    break;

  case 92: /* expr: '(' expr ')'  */
#line 505 "CMDgram.y"
      { (yyval.expr) = (yyvsp[-1].expr); }
#line 2961 "CMDgram.cpp"
    break;

  case 93: /* expr: expr '^' expr  */
#line 507 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2967 "CMDgram.cpp"
    break;

  case 94: /* expr: expr '%' expr  */
#line 509 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2973 "CMDgram.cpp"
    break;

  case 95: /* expr: expr '&' expr  */
#line 511 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2979 "CMDgram.cpp"
    break;

  case 96: /* expr: expr '|' expr  */
#line 513 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2985 "CMDgram.cpp"
    break;

  case 97: /* expr: expr '+' expr  */
#line 515 "CMDgram.y"
      { (yyval.expr) = FloatBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2991 "CMDgram.cpp"
    break;

  case 98: /* expr: expr '-' expr  */
#line 517 "CMDgram.y"
      { (yyval.expr) = FloatBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2997 "CMDgram.cpp"
    break;

  case 99: /* expr: expr '*' expr  */
#line 519 "CMDgram.y"
      { (yyval.expr) = FloatBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3003 "CMDgram.cpp"
    break;

  case 100: /* expr: expr '/' expr  */
#line 521 "CMDgram.y"
      { (yyval.expr) = FloatBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3009 "CMDgram.cpp"
    break;

  case 101: /* expr: '-' expr  */
#line 523 "CMDgram.y"
      { (yyval.expr) = FloatUnaryExprNode::alloc( (yyvsp[-1].i).lineNumber, (yyvsp[-1].i).value, (yyvsp[0].expr)); }
#line 3015 "CMDgram.cpp"
    break;

  case 102: /* expr: '*' expr  */
#line 525 "CMDgram.y"
      { (yyval.expr) = TTagDerefNode::alloc( (yyvsp[-1].i).lineNumber, (yyvsp[0].expr) ); }
#line 3021 "CMDgram.cpp"
    break;

  case 103: /* expr: TTAG  */
#line 527 "CMDgram.y"
      { (yyval.expr) = TTagExprNode::alloc( (yyvsp[0].s).lineNumber, (yyvsp[0].s).value ); }
#line 3027 "CMDgram.cpp"
    break;

  case 104: /* expr: expr '?' expr ':' expr  */
#line 529 "CMDgram.y"
      { (yyval.expr) = ConditionalExprNode::alloc( (yyvsp[-4].expr)->dbgLineNumber, (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3033 "CMDgram.cpp"
    break;

  case 105: /* expr: expr '<' expr  */
#line 531 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3039 "CMDgram.cpp"
    break;

  case 106: /* expr: expr '>' expr  */
#line 533 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3045 "CMDgram.cpp"
    break;

  case 107: /* expr: expr opGE expr  */
#line 535 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3051 "CMDgram.cpp"
    break;

  case 108: /* expr: expr opLE expr  */
#line 537 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3057 "CMDgram.cpp"
    break;

  case 109: /* expr: expr opEQ expr  */
#line 539 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3063 "CMDgram.cpp"
    break;

  case 110: /* expr: expr opNE expr  */
#line 541 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3069 "CMDgram.cpp"
    break;

  case 111: /* expr: expr opOR expr  */
#line 543 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3075 "CMDgram.cpp"
    break;

  case 112: /* expr: expr opSHL expr  */
#line 545 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3081 "CMDgram.cpp"
    break;

  case 113: /* expr: expr opSHR expr  */
#line 547 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3087 "CMDgram.cpp"
    break;

  case 114: /* expr: expr opAND expr  */
#line 549 "CMDgram.y"
      { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-1].i).value, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3093 "CMDgram.cpp"
    break;

  case 115: /* expr: expr opSTREQ expr  */
#line 551 "CMDgram.y"
      { (yyval.expr) = StreqExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-2].expr), (yyvsp[0].expr), true); }
#line 3099 "CMDgram.cpp"
    break;

  case 116: /* expr: expr opSTRNE expr  */
#line 553 "CMDgram.y"
      { (yyval.expr) = StreqExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-2].expr), (yyvsp[0].expr), false); }
#line 3105 "CMDgram.cpp"
    break;

  case 117: /* expr: expr '@' expr  */
#line 561 "CMDgram.y"
      { (yyval.expr) = StrcatExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-2].expr), (yyvsp[0].expr), (yyvsp[-1].i).value); }
#line 3111 "CMDgram.cpp"
    break;

  case 118: /* expr: '!' expr  */
#line 563 "CMDgram.y"
      { (yyval.expr) = IntUnaryExprNode::alloc((yyvsp[-1].i).lineNumber, (yyvsp[-1].i).value, (yyvsp[0].expr)); }
#line 3117 "CMDgram.cpp"
    break;

  case 119: /* expr: '~' expr  */
#line 565 "CMDgram.y"
      { (yyval.expr) = IntUnaryExprNode::alloc((yyvsp[-1].i).lineNumber, (yyvsp[-1].i).value, (yyvsp[0].expr)); }
#line 3123 "CMDgram.cpp"
    break;

  case 120: /* expr: TAGATOM  */
#line 567 "CMDgram.y"
      { (yyval.expr) = StrConstNode::alloc( (yyvsp[0].str).lineNumber, (yyvsp[0].str).value, true); }
#line 3129 "CMDgram.cpp"
    break;

  case 121: /* expr: FLTCONST  */
#line 569 "CMDgram.y"
      { (yyval.expr) = FloatNode::alloc( (yyvsp[0].f).lineNumber, (yyvsp[0].f).value ); }
#line 3135 "CMDgram.cpp"
    break;

  case 122: /* expr: INTCONST  */
#line 571 "CMDgram.y"
      { (yyval.expr) = IntNode::alloc( (yyvsp[0].i).lineNumber, (yyvsp[0].i).value ); }
#line 3141 "CMDgram.cpp"
    break;

  case 123: /* expr: rwBREAK  */
#line 573 "CMDgram.y"
      { (yyval.expr) = ConstantNode::alloc( (yyvsp[0].i).lineNumber, StringTable->insert("break")); }
#line 3147 "CMDgram.cpp"
    break;

  case 124: /* expr: slot_acc  */
#line 575 "CMDgram.y"
      { (yyval.expr) = SlotAccessNode::alloc( (yyvsp[0].slot).lineNumber, (yyvsp[0].slot).object, (yyvsp[0].slot).array, (yyvsp[0].slot).slotName ); }
#line 3153 "CMDgram.cpp"
    break;

  case 125: /* expr: intslot_acc  */
#line 577 "CMDgram.y"
      { (yyval.expr) = InternalSlotAccessNode::alloc( (yyvsp[0].intslot).lineNumber, (yyvsp[0].intslot).object, (yyvsp[0].intslot).slotExpr, (yyvsp[0].intslot).recurse); }
#line 3159 "CMDgram.cpp"
    break;

  case 126: /* expr: IDENT  */
#line 579 "CMDgram.y"
      { (yyval.expr) = ConstantNode::alloc( (yyvsp[0].s).lineNumber, (yyvsp[0].s).value ); }
#line 3165 "CMDgram.cpp"
    break;

  case 127: /* expr: STRATOM  */
#line 581 "CMDgram.y"
      { (yyval.expr) = StrConstNode::alloc( (yyvsp[0].str).lineNumber, (yyvsp[0].str).value, false); }
#line 3171 "CMDgram.cpp"
    break;

  case 128: /* expr: VAR  */
#line 583 "CMDgram.y"
      { (yyval.expr) = (ExprNode*)VarNode::alloc( (yyvsp[0].s).lineNumber, (yyvsp[0].s).value, NULL); }
#line 3177 "CMDgram.cpp"
    break;

  case 129: /* expr: VAR '[' aidx_expr ']'  */
#line 585 "CMDgram.y"
      { (yyval.expr) = (ExprNode*)VarNode::alloc( (yyvsp[-3].s).lineNumber, (yyvsp[-3].s).value, (yyvsp[-1].expr) ); }
#line 3183 "CMDgram.cpp"
    break;

  case 130: /* slot_acc: expr '.' IDENT  */
#line 591 "CMDgram.y"
      { (yyval.slot).lineNumber = (yyvsp[-2].expr)->dbgLineNumber; (yyval.slot).object = (yyvsp[-2].expr); (yyval.slot).slotName = (yyvsp[0].s).value; (yyval.slot).array = NULL; }
#line 3189 "CMDgram.cpp"
    break;

  case 131: /* slot_acc: expr '.' IDENT '[' aidx_expr ']'  */
#line 593 "CMDgram.y"
      { (yyval.slot).lineNumber = (yyvsp[-5].expr)->dbgLineNumber; (yyval.slot).object = (yyvsp[-5].expr); (yyval.slot).slotName = (yyvsp[-3].s).value; (yyval.slot).array = (yyvsp[-1].expr); }
#line 3195 "CMDgram.cpp"
    break;

  case 132: /* intslot_acc: expr opINTNAME class_name_expr  */
#line 598 "CMDgram.y"
      { (yyval.intslot).lineNumber = (yyvsp[-2].expr)->dbgLineNumber; (yyval.intslot).object = (yyvsp[-2].expr); (yyval.intslot).slotExpr = (yyvsp[0].expr); (yyval.intslot).recurse = false; }
#line 3201 "CMDgram.cpp"
    break;

  case 133: /* intslot_acc: expr opINTNAMER class_name_expr  */
#line 600 "CMDgram.y"
      { (yyval.intslot).lineNumber = (yyvsp[-2].expr)->dbgLineNumber; (yyval.intslot).object = (yyvsp[-2].expr); (yyval.intslot).slotExpr = (yyvsp[0].expr); (yyval.intslot).recurse = true; }
#line 3207 "CMDgram.cpp"
    break;

  case 134: /* class_name_expr: IDENT  */
#line 605 "CMDgram.y"
      { (yyval.expr) = ConstantNode::alloc( (yyvsp[0].s).lineNumber, (yyvsp[0].s).value ); }
#line 3213 "CMDgram.cpp"
    break;

  case 135: /* class_name_expr: '(' expr ')'  */
#line 607 "CMDgram.y"
      { (yyval.expr) = (yyvsp[-1].expr); }
#line 3219 "CMDgram.cpp"
    break;

  case 136: /* assign_op_struct: opPLUSPLUS  */
#line 612 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[0].i).lineNumber; (yyval.asn).token = opPLUSPLUS; (yyval.asn).expr = FloatNode::alloc( (yyvsp[0].i).lineNumber, 1 ); }
#line 3225 "CMDgram.cpp"
    break;

  case 137: /* assign_op_struct: opMINUSMINUS  */
#line 614 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[0].i).lineNumber; (yyval.asn).token = opMINUSMINUS; (yyval.asn).expr = FloatNode::alloc( (yyvsp[0].i).lineNumber, 1 ); }
#line 3231 "CMDgram.cpp"
    break;

  case 138: /* assign_op_struct: opPLASN expr  */
#line 616 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '+'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3237 "CMDgram.cpp"
    break;

  case 139: /* assign_op_struct: opMIASN expr  */
#line 618 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '-'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3243 "CMDgram.cpp"
    break;

  case 140: /* assign_op_struct: opMLASN expr  */
#line 620 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '*'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3249 "CMDgram.cpp"
    break;

  case 141: /* assign_op_struct: opDVASN expr  */
#line 622 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '/'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3255 "CMDgram.cpp"
    break;

  case 142: /* assign_op_struct: opMODASN expr  */
#line 624 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '%'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3261 "CMDgram.cpp"
    break;

  case 143: /* assign_op_struct: opANDASN expr  */
#line 626 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '&'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3267 "CMDgram.cpp"
    break;

  case 144: /* assign_op_struct: opXORASN expr  */
#line 628 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '^'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3273 "CMDgram.cpp"
    break;

  case 145: /* assign_op_struct: opORASN expr  */
#line 630 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = '|'; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3279 "CMDgram.cpp"
    break;

  case 146: /* assign_op_struct: opSLASN expr  */
#line 632 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = opSHL; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3285 "CMDgram.cpp"
    break;

  case 147: /* assign_op_struct: opSRASN expr  */
#line 634 "CMDgram.y"
      { (yyval.asn).lineNumber = (yyvsp[-1].i).lineNumber; (yyval.asn).token = opSHR; (yyval.asn).expr = (yyvsp[0].expr); }
#line 3291 "CMDgram.cpp"
    break;

  case 148: /* stmt_expr: funcall_expr  */
#line 640 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3297 "CMDgram.cpp"
    break;

  case 149: /* stmt_expr: assert_expr  */
#line 642 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3303 "CMDgram.cpp"
    break;

  case 150: /* stmt_expr: object_decl  */
#line 644 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].od); }
#line 3309 "CMDgram.cpp"
    break;

  case 151: /* stmt_expr: VAR '=' expr  */
#line 646 "CMDgram.y"
      { (yyval.expr) = AssignExprNode::alloc( (yyvsp[-2].s).lineNumber, (yyvsp[-2].s).value, NULL, (yyvsp[0].expr)); }
#line 3315 "CMDgram.cpp"
    break;

  case 152: /* stmt_expr: VAR '=' '{' expr_list '}'  */
#line 650 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-4].s).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-1].expr);
//          for (ExprNode* expr = (ExprNode*)$4; expr; expr = (ExprNode*)(expr->next)) {
//              vecNode->elements.push_back(expr);
//          }
         (yyval.expr) = AssignExprNode::alloc( (yyvsp[-4].s).lineNumber, (yyvsp[-4].s).value, NULL, vecNode);
      }
#line 3328 "CMDgram.cpp"
    break;

  case 153: /* stmt_expr: VAR '[' aidx_expr ']' '=' expr  */
#line 661 "CMDgram.y"
      { (yyval.expr) = AssignExprNode::alloc( (yyvsp[-5].s).lineNumber, (yyvsp[-5].s).value, (yyvsp[-3].expr), (yyvsp[0].expr)); }
#line 3334 "CMDgram.cpp"
    break;

  case 154: /* stmt_expr: VAR '[' aidx_expr ']' '=' '{' expr_list '}'  */
#line 665 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-7].s).lineNumber);
          vecNode->argList = (ExprNode*)(yyvsp[-1].expr);
//          for (ExprNode* expr = (ExprNode*)$7; expr; expr = (ExprNode*)(expr->next)) {
//             vecNode->elements.push_back(expr);
//          }
         (yyval.expr) = AssignExprNode::alloc( (yyvsp[-7].s).lineNumber, (yyvsp[-7].s).value, (yyvsp[-5].expr), vecNode);
      }
#line 3347 "CMDgram.cpp"
    break;

  case 155: /* stmt_expr: VAR assign_op_struct  */
#line 676 "CMDgram.y"
      { (yyval.expr) = AssignOpExprNode::alloc( (yyvsp[-1].s).lineNumber, (yyvsp[-1].s).value, NULL, (yyvsp[0].asn).expr, (yyvsp[0].asn).token); }
#line 3353 "CMDgram.cpp"
    break;

  case 156: /* stmt_expr: VAR '[' aidx_expr ']' assign_op_struct  */
#line 678 "CMDgram.y"
      { (yyval.expr) = AssignOpExprNode::alloc( (yyvsp[-4].s).lineNumber, (yyvsp[-4].s).value, (yyvsp[-2].expr), (yyvsp[0].asn).expr, (yyvsp[0].asn).token); }
#line 3359 "CMDgram.cpp"
    break;

  case 157: /* stmt_expr: slot_acc assign_op_struct  */
#line 680 "CMDgram.y"
      { (yyval.expr) = SlotAssignOpNode::alloc( (yyvsp[-1].slot).lineNumber, (yyvsp[-1].slot).object, (yyvsp[-1].slot).slotName, (yyvsp[-1].slot).array, (yyvsp[0].asn).token, (yyvsp[0].asn).expr); }
#line 3365 "CMDgram.cpp"
    break;

  case 158: /* stmt_expr: slot_acc '=' expr  */
#line 682 "CMDgram.y"
      { (yyval.expr) = SlotAssignNode::alloc( (yyvsp[-2].slot).lineNumber, (yyvsp[-2].slot).object, (yyvsp[-2].slot).array, (yyvsp[-2].slot).slotName, (yyvsp[0].expr)); }
#line 3371 "CMDgram.cpp"
    break;

  case 159: /* stmt_expr: slot_acc '=' '{' expr_list '}'  */
#line 684 "CMDgram.y"
      { (yyval.expr) = SlotAssignNode::alloc( (yyvsp[-4].slot).lineNumber, (yyvsp[-4].slot).object, (yyvsp[-4].slot).array, (yyvsp[-4].slot).slotName, (yyvsp[-1].expr)); }
#line 3377 "CMDgram.cpp"
    break;

  case 160: /* funcall_expr: IDENT '(' func_arg_list_decl ')'  */
#line 716 "CMDgram.y"
      { (yyval.expr) = FuncCallExprNode::alloc( (yyvsp[-3].s).lineNumber, (yyvsp[-3].s).value, NULL, (yyvsp[-1].expr), false); }
#line 3383 "CMDgram.cpp"
    break;

  case 161: /* funcall_expr: IDENT opCOLONCOLON IDENT '(' func_arg_list_decl ')'  */
#line 719 "CMDgram.y"
      { (yyval.expr) = FuncCallExprNode::alloc( (yyvsp[-5].s).lineNumber, (yyvsp[-3].s).value, (yyvsp[-5].s).value, (yyvsp[-1].expr), false); }
#line 3389 "CMDgram.cpp"
    break;

  case 162: /* funcall_expr: expr '.' IDENT '(' func_arg_list_decl ')'  */
#line 722 "CMDgram.y"
      { (yyvsp[-5].expr)->append((yyvsp[-1].expr)); (yyval.expr) = FuncCallExprNode::alloc( (yyvsp[-5].expr)->dbgLineNumber, (yyvsp[-3].s).value, NULL, (yyvsp[-5].expr), true); }
#line 3395 "CMDgram.cpp"
    break;

  case 163: /* func_arg_item: expr  */
#line 728 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3401 "CMDgram.cpp"
    break;

  case 164: /* func_arg_item: '{' expr_list '}'  */
#line 730 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-2].i).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-1].expr);
//          for (ExprNode* expr = (ExprNode*)$2; expr; expr = (ExprNode*)(expr->next)) {
//             vecNode->elements.push_back(expr);
//          }
         (yyval.expr) = vecNode;
      }
#line 3414 "CMDgram.cpp"
    break;

  case 165: /* func_arg_list: func_arg_item  */
#line 742 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3420 "CMDgram.cpp"
    break;

  case 166: /* func_arg_list: func_arg_list ',' func_arg_item  */
#line 744 "CMDgram.y"
      { ((yyvsp[-2].expr))->append((yyvsp[0].expr)); (yyval.expr) = (yyvsp[-2].expr); }
#line 3426 "CMDgram.cpp"
    break;

  case 167: /* func_arg_list_decl: %empty  */
#line 749 "CMDgram.y"
      { (yyval.expr) = NULL; }
#line 3432 "CMDgram.cpp"
    break;

  case 168: /* func_arg_list_decl: func_arg_list  */
#line 751 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3438 "CMDgram.cpp"
    break;

  case 169: /* assert_expr: rwASSERT '(' expr ')'  */
#line 772 "CMDgram.y"
      { (yyval.expr) = AssertCallExprNode::alloc( (yyvsp[-3].i).lineNumber, (yyvsp[-1].expr), NULL ); }
#line 3444 "CMDgram.cpp"
    break;

  case 170: /* assert_expr: rwASSERT '(' expr ',' STRATOM ')'  */
#line 774 "CMDgram.y"
      { (yyval.expr) = AssertCallExprNode::alloc( (yyvsp[-5].i).lineNumber, (yyvsp[-3].expr), (yyvsp[-1].str).value ); }
#line 3450 "CMDgram.cpp"
    break;

  case 171: /* expr_list: expr  */
#line 786 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3456 "CMDgram.cpp"
    break;

  case 172: /* expr_list: expr_list ',' expr  */
#line 788 "CMDgram.y"
      { ((yyvsp[-2].expr))->append((yyvsp[0].expr)); (yyval.expr) = (yyvsp[-2].expr); }
#line 3462 "CMDgram.cpp"
    break;

  case 173: /* slot_assign_list_opt: %empty  */
#line 793 "CMDgram.y"
      { (yyval.slist) = NULL; }
#line 3468 "CMDgram.cpp"
    break;

  case 174: /* slot_assign_list_opt: slot_assign_list  */
#line 795 "CMDgram.y"
      { (yyval.slist) = (yyvsp[0].slist); }
#line 3474 "CMDgram.cpp"
    break;

  case 175: /* slot_assign_list: slot_assign  */
#line 800 "CMDgram.y"
      { (yyval.slist) = (yyvsp[0].slist); }
#line 3480 "CMDgram.cpp"
    break;

  case 176: /* slot_assign_list: slot_assign_list slot_assign  */
#line 802 "CMDgram.y"
      { (yyvsp[-1].slist)->append((yyvsp[0].slist)); (yyval.slist) = (yyvsp[-1].slist); }
#line 3486 "CMDgram.cpp"
    break;

  case 177: /* slot_assign: IDENT '=' expr ';'  */
#line 808 "CMDgram.y"
      { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-3].s).lineNumber, NULL, NULL, (yyvsp[-3].s).value, (yyvsp[-1].expr)); }
#line 3492 "CMDgram.cpp"
    break;

  case 178: /* slot_assign: IDENT '=' '{' expr_list '}' ';'  */
#line 812 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-5].s).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-2].expr);
//          for (ExprNode* expr = (ExprNode*)$4; expr; expr = (ExprNode*)(expr->next)) {
//             vecNode->elements.push_back(expr);
//          }
         (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-5].s).lineNumber, NULL, NULL, (yyvsp[-5].s).value, vecNode);
      }
#line 3505 "CMDgram.cpp"
    break;

  case 179: /* slot_assign: TYPEIDENT IDENT '=' expr ';'  */
#line 823 "CMDgram.y"
      { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-4].i).lineNumber, NULL, NULL, (yyvsp[-3].s).value, (yyvsp[-1].expr), (yyvsp[-4].i).value); }
#line 3511 "CMDgram.cpp"
    break;

  case 180: /* slot_assign: TYPEIDENT IDENT '=' '{' expr_list '}' ';'  */
#line 827 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-6].i).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-2].expr);
//          for (ExprNode* expr = (ExprNode*)$5; expr; expr = (ExprNode*)(expr->next)) {
//             vecNode->elements.push_back(expr);
//          }
         (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-6].i).lineNumber, NULL, NULL, (yyvsp[-5].s).value, vecNode, (yyvsp[-6].i).value);
      }
#line 3524 "CMDgram.cpp"
    break;

  case 181: /* slot_assign: rwDATABLOCK '=' expr ';'  */
#line 838 "CMDgram.y"
      { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-3].i).lineNumber, NULL, NULL, StringTable->insert("datablock"), (yyvsp[-1].expr)); }
#line 3530 "CMDgram.cpp"
    break;

  case 182: /* slot_assign: IDENT '[' aidx_expr ']' '=' expr ';'  */
#line 840 "CMDgram.y"
      { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-6].s).lineNumber, NULL, (yyvsp[-4].expr), (yyvsp[-6].s).value, (yyvsp[-1].expr)); }
#line 3536 "CMDgram.cpp"
    break;

  case 183: /* slot_assign: IDENT '[' aidx_expr ']' '=' '{' expr_list '}' ';'  */
#line 844 "CMDgram.y"
      {
         VectorConstructorNode* vecNode = VectorConstructorNode::alloc((yyvsp[-8].s).lineNumber);
         vecNode->argList = (ExprNode*)(yyvsp[-2].expr);
//          for (ExprNode* expr = (ExprNode*)$7; expr; expr = (ExprNode*)(expr->next)) {
//             vecNode->elements.push_back(expr);
//          }
         (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-8].s).lineNumber, NULL, (yyvsp[-6].expr), (yyvsp[-8].s).value, vecNode);
      }
#line 3549 "CMDgram.cpp"
    break;

  case 184: /* slot_assign: TYPEIDENT IDENT '[' aidx_expr ']' '=' expr ';'  */
#line 855 "CMDgram.y"
      { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[-7].i).lineNumber, NULL, (yyvsp[-4].expr), (yyvsp[-6].s).value, (yyvsp[-1].expr), (yyvsp[-7].i).value); }
#line 3555 "CMDgram.cpp"
    break;

  case 185: /* aidx_expr: expr  */
#line 878 "CMDgram.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 3561 "CMDgram.cpp"
    break;

  case 186: /* aidx_expr: aidx_expr ',' expr  */
#line 880 "CMDgram.y"
      { (yyval.expr) = CommaCatExprNode::alloc( (yyvsp[-2].expr)->dbgLineNumber, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3567 "CMDgram.cpp"
    break;


#line 3571 "CMDgram.cpp"

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

#line 883 "CMDgram.y"


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
