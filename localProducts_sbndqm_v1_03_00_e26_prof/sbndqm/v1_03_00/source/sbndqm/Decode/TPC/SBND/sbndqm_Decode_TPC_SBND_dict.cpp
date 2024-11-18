// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedInfsdIsbnddqmdIDQM_DevAreasdICRT_DQM_NP_29Oct2024dIbuild_slf7dOx86_64dIsbndqmdIsbndqmdIDecodedITPCdISBNDdIsbndqm_Decode_TPC_SBND_dict
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "ROOT/RConfig.hxx"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Header files passed as explicit arguments
#include "/home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/srcs/sbndqm/sbndqm/Decode/TPC/SBND/classes.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *artcLcLWrapperlEsbndqmcLcLDQMTPCDecodeAnagR_Dictionary();
   static void artcLcLWrapperlEsbndqmcLcLDQMTPCDecodeAnagR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEsbndqmcLcLDQMTPCDecodeAnagR(void *p = nullptr);
   static void *newArray_artcLcLWrapperlEsbndqmcLcLDQMTPCDecodeAnagR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEsbndqmcLcLDQMTPCDecodeAnagR(void *p);
   static void deleteArray_artcLcLWrapperlEsbndqmcLcLDQMTPCDecodeAnagR(void *p);
   static void destruct_artcLcLWrapperlEsbndqmcLcLDQMTPCDecodeAnagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<sbndqm::DQMTPCDecodeAna>*)
   {
      ::art::Wrapper<sbndqm::DQMTPCDecodeAna> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<sbndqm::DQMTPCDecodeAna>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<sbndqm::DQMTPCDecodeAna>", ::art::Wrapper<sbndqm::DQMTPCDecodeAna>::Class_Version(), "canvas/Persistency/Common/Wrapper.h", 79,
                  typeid(::art::Wrapper<sbndqm::DQMTPCDecodeAna>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEsbndqmcLcLDQMTPCDecodeAnagR_Dictionary, isa_proxy, 4,
                  sizeof(::art::Wrapper<sbndqm::DQMTPCDecodeAna>) );
      instance.SetNew(&new_artcLcLWrapperlEsbndqmcLcLDQMTPCDecodeAnagR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEsbndqmcLcLDQMTPCDecodeAnagR);
      instance.SetDelete(&delete_artcLcLWrapperlEsbndqmcLcLDQMTPCDecodeAnagR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEsbndqmcLcLDQMTPCDecodeAnagR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEsbndqmcLcLDQMTPCDecodeAnagR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<sbndqm::DQMTPCDecodeAna>*)
   {
      return GenerateInitInstanceLocal(static_cast<::art::Wrapper<sbndqm::DQMTPCDecodeAna>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::art::Wrapper<sbndqm::DQMTPCDecodeAna>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEsbndqmcLcLDQMTPCDecodeAnagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::art::Wrapper<sbndqm::DQMTPCDecodeAna>*>(nullptr))->GetClass();
      artcLcLWrapperlEsbndqmcLcLDQMTPCDecodeAnagR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEsbndqmcLcLDQMTPCDecodeAnagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEvectorlEsbndqmcLcLDQMTPCDecodeAnagRsPgR_Dictionary();
   static void artcLcLWrapperlEvectorlEsbndqmcLcLDQMTPCDecodeAnagRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEvectorlEsbndqmcLcLDQMTPCDecodeAnagRsPgR(void *p = nullptr);
   static void *newArray_artcLcLWrapperlEvectorlEsbndqmcLcLDQMTPCDecodeAnagRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEvectorlEsbndqmcLcLDQMTPCDecodeAnagRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEvectorlEsbndqmcLcLDQMTPCDecodeAnagRsPgR(void *p);
   static void destruct_artcLcLWrapperlEvectorlEsbndqmcLcLDQMTPCDecodeAnagRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<vector<sbndqm::DQMTPCDecodeAna> >*)
   {
      ::art::Wrapper<vector<sbndqm::DQMTPCDecodeAna> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<vector<sbndqm::DQMTPCDecodeAna> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<vector<sbndqm::DQMTPCDecodeAna> >", ::art::Wrapper<vector<sbndqm::DQMTPCDecodeAna> >::Class_Version(), "canvas/Persistency/Common/Wrapper.h", 79,
                  typeid(::art::Wrapper<vector<sbndqm::DQMTPCDecodeAna> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEvectorlEsbndqmcLcLDQMTPCDecodeAnagRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::art::Wrapper<vector<sbndqm::DQMTPCDecodeAna> >) );
      instance.SetNew(&new_artcLcLWrapperlEvectorlEsbndqmcLcLDQMTPCDecodeAnagRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEvectorlEsbndqmcLcLDQMTPCDecodeAnagRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEvectorlEsbndqmcLcLDQMTPCDecodeAnagRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEvectorlEsbndqmcLcLDQMTPCDecodeAnagRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEvectorlEsbndqmcLcLDQMTPCDecodeAnagRsPgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("art::Wrapper<vector<sbndqm::DQMTPCDecodeAna> >","art::Wrapper<std::vector<sbndqm::DQMTPCDecodeAna> >"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("art::Wrapper<vector<sbndqm::DQMTPCDecodeAna> >","art::Wrapper<std::vector<sbndqm::DQMTPCDecodeAna, std::allocator<sbndqm::DQMTPCDecodeAna> > >"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<vector<sbndqm::DQMTPCDecodeAna> >*)
   {
      return GenerateInitInstanceLocal(static_cast<::art::Wrapper<vector<sbndqm::DQMTPCDecodeAna> >*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::art::Wrapper<vector<sbndqm::DQMTPCDecodeAna> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEvectorlEsbndqmcLcLDQMTPCDecodeAnagRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::art::Wrapper<vector<sbndqm::DQMTPCDecodeAna> >*>(nullptr))->GetClass();
      artcLcLWrapperlEvectorlEsbndqmcLcLDQMTPCDecodeAnagRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEvectorlEsbndqmcLcLDQMTPCDecodeAnagRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *sbndqmcLcLDQMTPCDecodeAna_Dictionary();
   static void sbndqmcLcLDQMTPCDecodeAna_TClassManip(TClass*);
   static void *new_sbndqmcLcLDQMTPCDecodeAna(void *p = nullptr);
   static void *newArray_sbndqmcLcLDQMTPCDecodeAna(Long_t size, void *p);
   static void delete_sbndqmcLcLDQMTPCDecodeAna(void *p);
   static void deleteArray_sbndqmcLcLDQMTPCDecodeAna(void *p);
   static void destruct_sbndqmcLcLDQMTPCDecodeAna(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::sbndqm::DQMTPCDecodeAna*)
   {
      ::sbndqm::DQMTPCDecodeAna *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::sbndqm::DQMTPCDecodeAna));
      static ::ROOT::TGenericClassInfo 
         instance("sbndqm::DQMTPCDecodeAna", 13, "sbndqm/Decode/TPC/SBND/DQMTPCDecodeAna.h", 15,
                  typeid(::sbndqm::DQMTPCDecodeAna), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &sbndqmcLcLDQMTPCDecodeAna_Dictionary, isa_proxy, 12,
                  sizeof(::sbndqm::DQMTPCDecodeAna) );
      instance.SetNew(&new_sbndqmcLcLDQMTPCDecodeAna);
      instance.SetNewArray(&newArray_sbndqmcLcLDQMTPCDecodeAna);
      instance.SetDelete(&delete_sbndqmcLcLDQMTPCDecodeAna);
      instance.SetDeleteArray(&deleteArray_sbndqmcLcLDQMTPCDecodeAna);
      instance.SetDestructor(&destruct_sbndqmcLcLDQMTPCDecodeAna);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::sbndqm::DQMTPCDecodeAna*)
   {
      return GenerateInitInstanceLocal(static_cast<::sbndqm::DQMTPCDecodeAna*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::sbndqm::DQMTPCDecodeAna*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *sbndqmcLcLDQMTPCDecodeAna_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::sbndqm::DQMTPCDecodeAna*>(nullptr))->GetClass();
      sbndqmcLcLDQMTPCDecodeAna_TClassManip(theClass);
   return theClass;
   }

   static void sbndqmcLcLDQMTPCDecodeAna_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEsbndqmcLcLDQMTPCDecodeAnagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<sbndqm::DQMTPCDecodeAna> : new ::art::Wrapper<sbndqm::DQMTPCDecodeAna>;
   }
   static void *newArray_artcLcLWrapperlEsbndqmcLcLDQMTPCDecodeAnagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<sbndqm::DQMTPCDecodeAna>[nElements] : new ::art::Wrapper<sbndqm::DQMTPCDecodeAna>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEsbndqmcLcLDQMTPCDecodeAnagR(void *p) {
      delete (static_cast<::art::Wrapper<sbndqm::DQMTPCDecodeAna>*>(p));
   }
   static void deleteArray_artcLcLWrapperlEsbndqmcLcLDQMTPCDecodeAnagR(void *p) {
      delete [] (static_cast<::art::Wrapper<sbndqm::DQMTPCDecodeAna>*>(p));
   }
   static void destruct_artcLcLWrapperlEsbndqmcLcLDQMTPCDecodeAnagR(void *p) {
      typedef ::art::Wrapper<sbndqm::DQMTPCDecodeAna> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<sbndqm::DQMTPCDecodeAna>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEvectorlEsbndqmcLcLDQMTPCDecodeAnagRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<sbndqm::DQMTPCDecodeAna> > : new ::art::Wrapper<vector<sbndqm::DQMTPCDecodeAna> >;
   }
   static void *newArray_artcLcLWrapperlEvectorlEsbndqmcLcLDQMTPCDecodeAnagRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<sbndqm::DQMTPCDecodeAna> >[nElements] : new ::art::Wrapper<vector<sbndqm::DQMTPCDecodeAna> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEvectorlEsbndqmcLcLDQMTPCDecodeAnagRsPgR(void *p) {
      delete (static_cast<::art::Wrapper<vector<sbndqm::DQMTPCDecodeAna> >*>(p));
   }
   static void deleteArray_artcLcLWrapperlEvectorlEsbndqmcLcLDQMTPCDecodeAnagRsPgR(void *p) {
      delete [] (static_cast<::art::Wrapper<vector<sbndqm::DQMTPCDecodeAna> >*>(p));
   }
   static void destruct_artcLcLWrapperlEvectorlEsbndqmcLcLDQMTPCDecodeAnagRsPgR(void *p) {
      typedef ::art::Wrapper<vector<sbndqm::DQMTPCDecodeAna> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<vector<sbndqm::DQMTPCDecodeAna> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_sbndqmcLcLDQMTPCDecodeAna(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::sbndqm::DQMTPCDecodeAna : new ::sbndqm::DQMTPCDecodeAna;
   }
   static void *newArray_sbndqmcLcLDQMTPCDecodeAna(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::sbndqm::DQMTPCDecodeAna[nElements] : new ::sbndqm::DQMTPCDecodeAna[nElements];
   }
   // Wrapper around operator delete
   static void delete_sbndqmcLcLDQMTPCDecodeAna(void *p) {
      delete (static_cast<::sbndqm::DQMTPCDecodeAna*>(p));
   }
   static void deleteArray_sbndqmcLcLDQMTPCDecodeAna(void *p) {
      delete [] (static_cast<::sbndqm::DQMTPCDecodeAna*>(p));
   }
   static void destruct_sbndqmcLcLDQMTPCDecodeAna(void *p) {
      typedef ::sbndqm::DQMTPCDecodeAna current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::sbndqm::DQMTPCDecodeAna

namespace ROOT {
   static TClass *vectorlEsbndqmcLcLDQMTPCDecodeAnagR_Dictionary();
   static void vectorlEsbndqmcLcLDQMTPCDecodeAnagR_TClassManip(TClass*);
   static void *new_vectorlEsbndqmcLcLDQMTPCDecodeAnagR(void *p = nullptr);
   static void *newArray_vectorlEsbndqmcLcLDQMTPCDecodeAnagR(Long_t size, void *p);
   static void delete_vectorlEsbndqmcLcLDQMTPCDecodeAnagR(void *p);
   static void deleteArray_vectorlEsbndqmcLcLDQMTPCDecodeAnagR(void *p);
   static void destruct_vectorlEsbndqmcLcLDQMTPCDecodeAnagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<sbndqm::DQMTPCDecodeAna>*)
   {
      vector<sbndqm::DQMTPCDecodeAna> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<sbndqm::DQMTPCDecodeAna>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<sbndqm::DQMTPCDecodeAna>", -2, "vector", 423,
                  typeid(vector<sbndqm::DQMTPCDecodeAna>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEsbndqmcLcLDQMTPCDecodeAnagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<sbndqm::DQMTPCDecodeAna>) );
      instance.SetNew(&new_vectorlEsbndqmcLcLDQMTPCDecodeAnagR);
      instance.SetNewArray(&newArray_vectorlEsbndqmcLcLDQMTPCDecodeAnagR);
      instance.SetDelete(&delete_vectorlEsbndqmcLcLDQMTPCDecodeAnagR);
      instance.SetDeleteArray(&deleteArray_vectorlEsbndqmcLcLDQMTPCDecodeAnagR);
      instance.SetDestructor(&destruct_vectorlEsbndqmcLcLDQMTPCDecodeAnagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<sbndqm::DQMTPCDecodeAna> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<sbndqm::DQMTPCDecodeAna>","std::vector<sbndqm::DQMTPCDecodeAna, std::allocator<sbndqm::DQMTPCDecodeAna> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<sbndqm::DQMTPCDecodeAna>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEsbndqmcLcLDQMTPCDecodeAnagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<sbndqm::DQMTPCDecodeAna>*>(nullptr))->GetClass();
      vectorlEsbndqmcLcLDQMTPCDecodeAnagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEsbndqmcLcLDQMTPCDecodeAnagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEsbndqmcLcLDQMTPCDecodeAnagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<sbndqm::DQMTPCDecodeAna> : new vector<sbndqm::DQMTPCDecodeAna>;
   }
   static void *newArray_vectorlEsbndqmcLcLDQMTPCDecodeAnagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<sbndqm::DQMTPCDecodeAna>[nElements] : new vector<sbndqm::DQMTPCDecodeAna>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEsbndqmcLcLDQMTPCDecodeAnagR(void *p) {
      delete (static_cast<vector<sbndqm::DQMTPCDecodeAna>*>(p));
   }
   static void deleteArray_vectorlEsbndqmcLcLDQMTPCDecodeAnagR(void *p) {
      delete [] (static_cast<vector<sbndqm::DQMTPCDecodeAna>*>(p));
   }
   static void destruct_vectorlEsbndqmcLcLDQMTPCDecodeAnagR(void *p) {
      typedef vector<sbndqm::DQMTPCDecodeAna> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<sbndqm::DQMTPCDecodeAna>

namespace {
  void TriggerDictionaryInitialization_libsbndqm_Decode_TPC_SBND_dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libsbndqm_Decode_TPC_SBND_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace sbndqm{class __attribute__((annotate("$clingAutoload$sbndqm/Decode/TPC/SBND/DQMTPCDecodeAna.h")))  DQMTPCDecodeAna;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace art{template <typename T> class __attribute__((annotate("$clingAutoload$canvas/Persistency/Common/Wrapper.h")))  Wrapper;
}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libsbndqm_Decode_TPC_SBND_dict dictionary payload"

#ifndef NDEBUG
  #define NDEBUG 1
#endif
#ifndef BOOST_FILESYSTEM_NO_LIB
  #define BOOST_FILESYSTEM_NO_LIB 1
#endif
#ifndef BOOST_FILESYSTEM_DYN_LINK
  #define BOOST_FILESYSTEM_DYN_LINK 1
#endif
#ifndef BOOST_ATOMIC_NO_LIB
  #define BOOST_ATOMIC_NO_LIB 1
#endif
#ifndef BOOST_ATOMIC_DYN_LINK
  #define BOOST_ATOMIC_DYN_LINK 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "canvas/Persistency/Common/Wrapper.h"
#include <vector>
#include "sbndqm/Decode/TPC/SBND/DQMTPCDecodeAna.h"


namespace {
  struct dictionary {
    sbndqm::DQMTPCDecodeAna h;
    std::vector<sbndqm::DQMTPCDecodeAna> h_v;
    art::Wrapper<sbndqm::DQMTPCDecodeAna> h_w;
    art::Wrapper<std::vector<sbndqm::DQMTPCDecodeAna>> h_v_w;
  };
}



#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"art::Wrapper<sbndqm::DQMTPCDecodeAna>", payloadCode, "@",
"art::Wrapper<std::vector<sbndqm::DQMTPCDecodeAna> >", payloadCode, "@",
"art::Wrapper<vector<sbndqm::DQMTPCDecodeAna> >", payloadCode, "@",
"sbndqm::DQMTPCDecodeAna", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libsbndqm_Decode_TPC_SBND_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libsbndqm_Decode_TPC_SBND_dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libsbndqm_Decode_TPC_SBND_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libsbndqm_Decode_TPC_SBND_dict() {
  TriggerDictionaryInitialization_libsbndqm_Decode_TPC_SBND_dict_Impl();
}
