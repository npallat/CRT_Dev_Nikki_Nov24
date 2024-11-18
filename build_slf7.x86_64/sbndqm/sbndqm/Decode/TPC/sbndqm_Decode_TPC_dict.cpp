// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedInfsdIsbnddqmdIDQM_DevAreasdICRT_DQM_NP_29Oct2024dIbuild_slf7dOx86_64dIsbndqmdIsbndqmdIDecodedITPCdIsbndqm_Decode_TPC_dict
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
#include "/home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/srcs/sbndqm/sbndqm/Decode/TPC/classes.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *artcLcLWrapperlEtpcAnalysiscLcLHeaderDatagR_Dictionary();
   static void artcLcLWrapperlEtpcAnalysiscLcLHeaderDatagR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEtpcAnalysiscLcLHeaderDatagR(void *p = nullptr);
   static void *newArray_artcLcLWrapperlEtpcAnalysiscLcLHeaderDatagR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEtpcAnalysiscLcLHeaderDatagR(void *p);
   static void deleteArray_artcLcLWrapperlEtpcAnalysiscLcLHeaderDatagR(void *p);
   static void destruct_artcLcLWrapperlEtpcAnalysiscLcLHeaderDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<tpcAnalysis::HeaderData>*)
   {
      ::art::Wrapper<tpcAnalysis::HeaderData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<tpcAnalysis::HeaderData>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<tpcAnalysis::HeaderData>", ::art::Wrapper<tpcAnalysis::HeaderData>::Class_Version(), "canvas/Persistency/Common/Wrapper.h", 79,
                  typeid(::art::Wrapper<tpcAnalysis::HeaderData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEtpcAnalysiscLcLHeaderDatagR_Dictionary, isa_proxy, 4,
                  sizeof(::art::Wrapper<tpcAnalysis::HeaderData>) );
      instance.SetNew(&new_artcLcLWrapperlEtpcAnalysiscLcLHeaderDatagR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEtpcAnalysiscLcLHeaderDatagR);
      instance.SetDelete(&delete_artcLcLWrapperlEtpcAnalysiscLcLHeaderDatagR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEtpcAnalysiscLcLHeaderDatagR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEtpcAnalysiscLcLHeaderDatagR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<tpcAnalysis::HeaderData>*)
   {
      return GenerateInitInstanceLocal(static_cast<::art::Wrapper<tpcAnalysis::HeaderData>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::art::Wrapper<tpcAnalysis::HeaderData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEtpcAnalysiscLcLHeaderDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::art::Wrapper<tpcAnalysis::HeaderData>*>(nullptr))->GetClass();
      artcLcLWrapperlEtpcAnalysiscLcLHeaderDatagR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEtpcAnalysiscLcLHeaderDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEvectorlEtpcAnalysiscLcLHeaderDatagRsPgR_Dictionary();
   static void artcLcLWrapperlEvectorlEtpcAnalysiscLcLHeaderDatagRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEvectorlEtpcAnalysiscLcLHeaderDatagRsPgR(void *p = nullptr);
   static void *newArray_artcLcLWrapperlEvectorlEtpcAnalysiscLcLHeaderDatagRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEvectorlEtpcAnalysiscLcLHeaderDatagRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEvectorlEtpcAnalysiscLcLHeaderDatagRsPgR(void *p);
   static void destruct_artcLcLWrapperlEvectorlEtpcAnalysiscLcLHeaderDatagRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<vector<tpcAnalysis::HeaderData> >*)
   {
      ::art::Wrapper<vector<tpcAnalysis::HeaderData> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<vector<tpcAnalysis::HeaderData> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<vector<tpcAnalysis::HeaderData> >", ::art::Wrapper<vector<tpcAnalysis::HeaderData> >::Class_Version(), "canvas/Persistency/Common/Wrapper.h", 79,
                  typeid(::art::Wrapper<vector<tpcAnalysis::HeaderData> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEvectorlEtpcAnalysiscLcLHeaderDatagRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::art::Wrapper<vector<tpcAnalysis::HeaderData> >) );
      instance.SetNew(&new_artcLcLWrapperlEvectorlEtpcAnalysiscLcLHeaderDatagRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEvectorlEtpcAnalysiscLcLHeaderDatagRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEvectorlEtpcAnalysiscLcLHeaderDatagRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEvectorlEtpcAnalysiscLcLHeaderDatagRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEvectorlEtpcAnalysiscLcLHeaderDatagRsPgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("art::Wrapper<vector<tpcAnalysis::HeaderData> >","art::Wrapper<std::vector<tpcAnalysis::HeaderData> >"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("art::Wrapper<vector<tpcAnalysis::HeaderData> >","art::Wrapper<std::vector<tpcAnalysis::HeaderData, std::allocator<tpcAnalysis::HeaderData> > >"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<vector<tpcAnalysis::HeaderData> >*)
   {
      return GenerateInitInstanceLocal(static_cast<::art::Wrapper<vector<tpcAnalysis::HeaderData> >*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::art::Wrapper<vector<tpcAnalysis::HeaderData> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEvectorlEtpcAnalysiscLcLHeaderDatagRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::art::Wrapper<vector<tpcAnalysis::HeaderData> >*>(nullptr))->GetClass();
      artcLcLWrapperlEvectorlEtpcAnalysiscLcLHeaderDatagRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEvectorlEtpcAnalysiscLcLHeaderDatagRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *tpcAnalysiscLcLHeaderData_Dictionary();
   static void tpcAnalysiscLcLHeaderData_TClassManip(TClass*);
   static void *new_tpcAnalysiscLcLHeaderData(void *p = nullptr);
   static void *newArray_tpcAnalysiscLcLHeaderData(Long_t size, void *p);
   static void delete_tpcAnalysiscLcLHeaderData(void *p);
   static void deleteArray_tpcAnalysiscLcLHeaderData(void *p);
   static void destruct_tpcAnalysiscLcLHeaderData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::tpcAnalysis::HeaderData*)
   {
      ::tpcAnalysis::HeaderData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::tpcAnalysis::HeaderData));
      static ::ROOT::TGenericClassInfo 
         instance("tpcAnalysis::HeaderData", "sbndqm/Decode/TPC/HeaderData.hh", 15,
                  typeid(::tpcAnalysis::HeaderData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &tpcAnalysiscLcLHeaderData_Dictionary, isa_proxy, 4,
                  sizeof(::tpcAnalysis::HeaderData) );
      instance.SetNew(&new_tpcAnalysiscLcLHeaderData);
      instance.SetNewArray(&newArray_tpcAnalysiscLcLHeaderData);
      instance.SetDelete(&delete_tpcAnalysiscLcLHeaderData);
      instance.SetDeleteArray(&deleteArray_tpcAnalysiscLcLHeaderData);
      instance.SetDestructor(&destruct_tpcAnalysiscLcLHeaderData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::tpcAnalysis::HeaderData*)
   {
      return GenerateInitInstanceLocal(static_cast<::tpcAnalysis::HeaderData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::tpcAnalysis::HeaderData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *tpcAnalysiscLcLHeaderData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::tpcAnalysis::HeaderData*>(nullptr))->GetClass();
      tpcAnalysiscLcLHeaderData_TClassManip(theClass);
   return theClass;
   }

   static void tpcAnalysiscLcLHeaderData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEtpcAnalysiscLcLHeaderDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<tpcAnalysis::HeaderData> : new ::art::Wrapper<tpcAnalysis::HeaderData>;
   }
   static void *newArray_artcLcLWrapperlEtpcAnalysiscLcLHeaderDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<tpcAnalysis::HeaderData>[nElements] : new ::art::Wrapper<tpcAnalysis::HeaderData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEtpcAnalysiscLcLHeaderDatagR(void *p) {
      delete (static_cast<::art::Wrapper<tpcAnalysis::HeaderData>*>(p));
   }
   static void deleteArray_artcLcLWrapperlEtpcAnalysiscLcLHeaderDatagR(void *p) {
      delete [] (static_cast<::art::Wrapper<tpcAnalysis::HeaderData>*>(p));
   }
   static void destruct_artcLcLWrapperlEtpcAnalysiscLcLHeaderDatagR(void *p) {
      typedef ::art::Wrapper<tpcAnalysis::HeaderData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<tpcAnalysis::HeaderData>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEvectorlEtpcAnalysiscLcLHeaderDatagRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<tpcAnalysis::HeaderData> > : new ::art::Wrapper<vector<tpcAnalysis::HeaderData> >;
   }
   static void *newArray_artcLcLWrapperlEvectorlEtpcAnalysiscLcLHeaderDatagRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<tpcAnalysis::HeaderData> >[nElements] : new ::art::Wrapper<vector<tpcAnalysis::HeaderData> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEvectorlEtpcAnalysiscLcLHeaderDatagRsPgR(void *p) {
      delete (static_cast<::art::Wrapper<vector<tpcAnalysis::HeaderData> >*>(p));
   }
   static void deleteArray_artcLcLWrapperlEvectorlEtpcAnalysiscLcLHeaderDatagRsPgR(void *p) {
      delete [] (static_cast<::art::Wrapper<vector<tpcAnalysis::HeaderData> >*>(p));
   }
   static void destruct_artcLcLWrapperlEvectorlEtpcAnalysiscLcLHeaderDatagRsPgR(void *p) {
      typedef ::art::Wrapper<vector<tpcAnalysis::HeaderData> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<vector<tpcAnalysis::HeaderData> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_tpcAnalysiscLcLHeaderData(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::tpcAnalysis::HeaderData : new ::tpcAnalysis::HeaderData;
   }
   static void *newArray_tpcAnalysiscLcLHeaderData(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::tpcAnalysis::HeaderData[nElements] : new ::tpcAnalysis::HeaderData[nElements];
   }
   // Wrapper around operator delete
   static void delete_tpcAnalysiscLcLHeaderData(void *p) {
      delete (static_cast<::tpcAnalysis::HeaderData*>(p));
   }
   static void deleteArray_tpcAnalysiscLcLHeaderData(void *p) {
      delete [] (static_cast<::tpcAnalysis::HeaderData*>(p));
   }
   static void destruct_tpcAnalysiscLcLHeaderData(void *p) {
      typedef ::tpcAnalysis::HeaderData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::tpcAnalysis::HeaderData

namespace ROOT {
   static TClass *vectorlEtpcAnalysiscLcLHeaderDatagR_Dictionary();
   static void vectorlEtpcAnalysiscLcLHeaderDatagR_TClassManip(TClass*);
   static void *new_vectorlEtpcAnalysiscLcLHeaderDatagR(void *p = nullptr);
   static void *newArray_vectorlEtpcAnalysiscLcLHeaderDatagR(Long_t size, void *p);
   static void delete_vectorlEtpcAnalysiscLcLHeaderDatagR(void *p);
   static void deleteArray_vectorlEtpcAnalysiscLcLHeaderDatagR(void *p);
   static void destruct_vectorlEtpcAnalysiscLcLHeaderDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<tpcAnalysis::HeaderData>*)
   {
      vector<tpcAnalysis::HeaderData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<tpcAnalysis::HeaderData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<tpcAnalysis::HeaderData>", -2, "vector", 423,
                  typeid(vector<tpcAnalysis::HeaderData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEtpcAnalysiscLcLHeaderDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<tpcAnalysis::HeaderData>) );
      instance.SetNew(&new_vectorlEtpcAnalysiscLcLHeaderDatagR);
      instance.SetNewArray(&newArray_vectorlEtpcAnalysiscLcLHeaderDatagR);
      instance.SetDelete(&delete_vectorlEtpcAnalysiscLcLHeaderDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEtpcAnalysiscLcLHeaderDatagR);
      instance.SetDestructor(&destruct_vectorlEtpcAnalysiscLcLHeaderDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<tpcAnalysis::HeaderData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<tpcAnalysis::HeaderData>","std::vector<tpcAnalysis::HeaderData, std::allocator<tpcAnalysis::HeaderData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<tpcAnalysis::HeaderData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEtpcAnalysiscLcLHeaderDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<tpcAnalysis::HeaderData>*>(nullptr))->GetClass();
      vectorlEtpcAnalysiscLcLHeaderDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEtpcAnalysiscLcLHeaderDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEtpcAnalysiscLcLHeaderDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<tpcAnalysis::HeaderData> : new vector<tpcAnalysis::HeaderData>;
   }
   static void *newArray_vectorlEtpcAnalysiscLcLHeaderDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<tpcAnalysis::HeaderData>[nElements] : new vector<tpcAnalysis::HeaderData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEtpcAnalysiscLcLHeaderDatagR(void *p) {
      delete (static_cast<vector<tpcAnalysis::HeaderData>*>(p));
   }
   static void deleteArray_vectorlEtpcAnalysiscLcLHeaderDatagR(void *p) {
      delete [] (static_cast<vector<tpcAnalysis::HeaderData>*>(p));
   }
   static void destruct_vectorlEtpcAnalysiscLcLHeaderDatagR(void *p) {
      typedef vector<tpcAnalysis::HeaderData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<tpcAnalysis::HeaderData>

namespace {
  void TriggerDictionaryInitialization_libsbndqm_Decode_TPC_dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libsbndqm_Decode_TPC_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace tpcAnalysis{class __attribute__((annotate("$clingAutoload$sbndqm/Decode/TPC/HeaderData.hh")))  HeaderData;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace art{template <typename T> class __attribute__((annotate("$clingAutoload$canvas/Persistency/Common/Wrapper.h")))  Wrapper;
}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libsbndqm_Decode_TPC_dict dictionary payload"

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
#include "sbndqm/Decode/TPC/HeaderData.hh"


namespace {
  struct dictionary {
    tpcAnalysis::HeaderData h;
    std::vector<tpcAnalysis::HeaderData> h_v;
    art::Wrapper<tpcAnalysis::HeaderData> h_w;
    art::Wrapper<std::vector<tpcAnalysis::HeaderData>> h_v_w;
  };
}



#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"art::Wrapper<std::vector<tpcAnalysis::HeaderData> >", payloadCode, "@",
"art::Wrapper<tpcAnalysis::HeaderData>", payloadCode, "@",
"art::Wrapper<vector<tpcAnalysis::HeaderData> >", payloadCode, "@",
"tpcAnalysis::HeaderData", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libsbndqm_Decode_TPC_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libsbndqm_Decode_TPC_dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libsbndqm_Decode_TPC_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libsbndqm_Decode_TPC_dict() {
  TriggerDictionaryInitialization_libsbndqm_Decode_TPC_dict_Impl();
}
