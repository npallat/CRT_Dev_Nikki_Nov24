// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedInfsdIsbnddqmdIDQM_DevAreasdICRT_DQM_NP_29Oct2024dIbuild_slf7dOx86_64dIsbndqmdIsbndqmdIDecodedIPMTdIPMTDecodeDatadIsbndqm_Decode_PMT_PMTDecodeData_dict
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
#include "/home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/srcs/sbndqm/sbndqm/Decode/PMT/PMTDecodeData/classes.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *artcLcLWrapperlEpmtAnalysiscLcLPMTDigitizerInfogR_Dictionary();
   static void artcLcLWrapperlEpmtAnalysiscLcLPMTDigitizerInfogR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEpmtAnalysiscLcLPMTDigitizerInfogR(void *p = nullptr);
   static void *newArray_artcLcLWrapperlEpmtAnalysiscLcLPMTDigitizerInfogR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEpmtAnalysiscLcLPMTDigitizerInfogR(void *p);
   static void deleteArray_artcLcLWrapperlEpmtAnalysiscLcLPMTDigitizerInfogR(void *p);
   static void destruct_artcLcLWrapperlEpmtAnalysiscLcLPMTDigitizerInfogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<pmtAnalysis::PMTDigitizerInfo>*)
   {
      ::art::Wrapper<pmtAnalysis::PMTDigitizerInfo> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<pmtAnalysis::PMTDigitizerInfo>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<pmtAnalysis::PMTDigitizerInfo>", ::art::Wrapper<pmtAnalysis::PMTDigitizerInfo>::Class_Version(), "canvas/Persistency/Common/Wrapper.h", 79,
                  typeid(::art::Wrapper<pmtAnalysis::PMTDigitizerInfo>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEpmtAnalysiscLcLPMTDigitizerInfogR_Dictionary, isa_proxy, 4,
                  sizeof(::art::Wrapper<pmtAnalysis::PMTDigitizerInfo>) );
      instance.SetNew(&new_artcLcLWrapperlEpmtAnalysiscLcLPMTDigitizerInfogR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEpmtAnalysiscLcLPMTDigitizerInfogR);
      instance.SetDelete(&delete_artcLcLWrapperlEpmtAnalysiscLcLPMTDigitizerInfogR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEpmtAnalysiscLcLPMTDigitizerInfogR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEpmtAnalysiscLcLPMTDigitizerInfogR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<pmtAnalysis::PMTDigitizerInfo>*)
   {
      return GenerateInitInstanceLocal(static_cast<::art::Wrapper<pmtAnalysis::PMTDigitizerInfo>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::art::Wrapper<pmtAnalysis::PMTDigitizerInfo>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEpmtAnalysiscLcLPMTDigitizerInfogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::art::Wrapper<pmtAnalysis::PMTDigitizerInfo>*>(nullptr))->GetClass();
      artcLcLWrapperlEpmtAnalysiscLcLPMTDigitizerInfogR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEpmtAnalysiscLcLPMTDigitizerInfogR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEvectorlEpmtAnalysiscLcLPMTDigitizerInfogRsPgR_Dictionary();
   static void artcLcLWrapperlEvectorlEpmtAnalysiscLcLPMTDigitizerInfogRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEvectorlEpmtAnalysiscLcLPMTDigitizerInfogRsPgR(void *p = nullptr);
   static void *newArray_artcLcLWrapperlEvectorlEpmtAnalysiscLcLPMTDigitizerInfogRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEvectorlEpmtAnalysiscLcLPMTDigitizerInfogRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEvectorlEpmtAnalysiscLcLPMTDigitizerInfogRsPgR(void *p);
   static void destruct_artcLcLWrapperlEvectorlEpmtAnalysiscLcLPMTDigitizerInfogRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<vector<pmtAnalysis::PMTDigitizerInfo> >*)
   {
      ::art::Wrapper<vector<pmtAnalysis::PMTDigitizerInfo> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<vector<pmtAnalysis::PMTDigitizerInfo> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<vector<pmtAnalysis::PMTDigitizerInfo> >", ::art::Wrapper<vector<pmtAnalysis::PMTDigitizerInfo> >::Class_Version(), "canvas/Persistency/Common/Wrapper.h", 79,
                  typeid(::art::Wrapper<vector<pmtAnalysis::PMTDigitizerInfo> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEvectorlEpmtAnalysiscLcLPMTDigitizerInfogRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::art::Wrapper<vector<pmtAnalysis::PMTDigitizerInfo> >) );
      instance.SetNew(&new_artcLcLWrapperlEvectorlEpmtAnalysiscLcLPMTDigitizerInfogRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEvectorlEpmtAnalysiscLcLPMTDigitizerInfogRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEvectorlEpmtAnalysiscLcLPMTDigitizerInfogRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEvectorlEpmtAnalysiscLcLPMTDigitizerInfogRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEvectorlEpmtAnalysiscLcLPMTDigitizerInfogRsPgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("art::Wrapper<vector<pmtAnalysis::PMTDigitizerInfo> >","art::Wrapper<std::vector<pmtAnalysis::PMTDigitizerInfo> >"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("art::Wrapper<vector<pmtAnalysis::PMTDigitizerInfo> >","art::Wrapper<std::vector<pmtAnalysis::PMTDigitizerInfo, std::allocator<pmtAnalysis::PMTDigitizerInfo> > >"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<vector<pmtAnalysis::PMTDigitizerInfo> >*)
   {
      return GenerateInitInstanceLocal(static_cast<::art::Wrapper<vector<pmtAnalysis::PMTDigitizerInfo> >*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::art::Wrapper<vector<pmtAnalysis::PMTDigitizerInfo> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEvectorlEpmtAnalysiscLcLPMTDigitizerInfogRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::art::Wrapper<vector<pmtAnalysis::PMTDigitizerInfo> >*>(nullptr))->GetClass();
      artcLcLWrapperlEvectorlEpmtAnalysiscLcLPMTDigitizerInfogRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEvectorlEpmtAnalysiscLcLPMTDigitizerInfogRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pmtAnalysiscLcLPMTDigitizerInfo_Dictionary();
   static void pmtAnalysiscLcLPMTDigitizerInfo_TClassManip(TClass*);
   static void *new_pmtAnalysiscLcLPMTDigitizerInfo(void *p = nullptr);
   static void *newArray_pmtAnalysiscLcLPMTDigitizerInfo(Long_t size, void *p);
   static void delete_pmtAnalysiscLcLPMTDigitizerInfo(void *p);
   static void deleteArray_pmtAnalysiscLcLPMTDigitizerInfo(void *p);
   static void destruct_pmtAnalysiscLcLPMTDigitizerInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::pmtAnalysis::PMTDigitizerInfo*)
   {
      ::pmtAnalysis::PMTDigitizerInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::pmtAnalysis::PMTDigitizerInfo));
      static ::ROOT::TGenericClassInfo 
         instance("pmtAnalysis::PMTDigitizerInfo", "sbndqm/Decode/PMT/PMTDecodeData/PMTDigitizerInfo.hh", 11,
                  typeid(::pmtAnalysis::PMTDigitizerInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pmtAnalysiscLcLPMTDigitizerInfo_Dictionary, isa_proxy, 4,
                  sizeof(::pmtAnalysis::PMTDigitizerInfo) );
      instance.SetNew(&new_pmtAnalysiscLcLPMTDigitizerInfo);
      instance.SetNewArray(&newArray_pmtAnalysiscLcLPMTDigitizerInfo);
      instance.SetDelete(&delete_pmtAnalysiscLcLPMTDigitizerInfo);
      instance.SetDeleteArray(&deleteArray_pmtAnalysiscLcLPMTDigitizerInfo);
      instance.SetDestructor(&destruct_pmtAnalysiscLcLPMTDigitizerInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::pmtAnalysis::PMTDigitizerInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::pmtAnalysis::PMTDigitizerInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::pmtAnalysis::PMTDigitizerInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pmtAnalysiscLcLPMTDigitizerInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::pmtAnalysis::PMTDigitizerInfo*>(nullptr))->GetClass();
      pmtAnalysiscLcLPMTDigitizerInfo_TClassManip(theClass);
   return theClass;
   }

   static void pmtAnalysiscLcLPMTDigitizerInfo_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("classVersion","10");
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEpmtAnalysiscLcLPMTDigitizerInfogR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<pmtAnalysis::PMTDigitizerInfo> : new ::art::Wrapper<pmtAnalysis::PMTDigitizerInfo>;
   }
   static void *newArray_artcLcLWrapperlEpmtAnalysiscLcLPMTDigitizerInfogR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<pmtAnalysis::PMTDigitizerInfo>[nElements] : new ::art::Wrapper<pmtAnalysis::PMTDigitizerInfo>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEpmtAnalysiscLcLPMTDigitizerInfogR(void *p) {
      delete (static_cast<::art::Wrapper<pmtAnalysis::PMTDigitizerInfo>*>(p));
   }
   static void deleteArray_artcLcLWrapperlEpmtAnalysiscLcLPMTDigitizerInfogR(void *p) {
      delete [] (static_cast<::art::Wrapper<pmtAnalysis::PMTDigitizerInfo>*>(p));
   }
   static void destruct_artcLcLWrapperlEpmtAnalysiscLcLPMTDigitizerInfogR(void *p) {
      typedef ::art::Wrapper<pmtAnalysis::PMTDigitizerInfo> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<pmtAnalysis::PMTDigitizerInfo>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEvectorlEpmtAnalysiscLcLPMTDigitizerInfogRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<pmtAnalysis::PMTDigitizerInfo> > : new ::art::Wrapper<vector<pmtAnalysis::PMTDigitizerInfo> >;
   }
   static void *newArray_artcLcLWrapperlEvectorlEpmtAnalysiscLcLPMTDigitizerInfogRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<pmtAnalysis::PMTDigitizerInfo> >[nElements] : new ::art::Wrapper<vector<pmtAnalysis::PMTDigitizerInfo> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEvectorlEpmtAnalysiscLcLPMTDigitizerInfogRsPgR(void *p) {
      delete (static_cast<::art::Wrapper<vector<pmtAnalysis::PMTDigitizerInfo> >*>(p));
   }
   static void deleteArray_artcLcLWrapperlEvectorlEpmtAnalysiscLcLPMTDigitizerInfogRsPgR(void *p) {
      delete [] (static_cast<::art::Wrapper<vector<pmtAnalysis::PMTDigitizerInfo> >*>(p));
   }
   static void destruct_artcLcLWrapperlEvectorlEpmtAnalysiscLcLPMTDigitizerInfogRsPgR(void *p) {
      typedef ::art::Wrapper<vector<pmtAnalysis::PMTDigitizerInfo> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<vector<pmtAnalysis::PMTDigitizerInfo> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_pmtAnalysiscLcLPMTDigitizerInfo(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::pmtAnalysis::PMTDigitizerInfo : new ::pmtAnalysis::PMTDigitizerInfo;
   }
   static void *newArray_pmtAnalysiscLcLPMTDigitizerInfo(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::pmtAnalysis::PMTDigitizerInfo[nElements] : new ::pmtAnalysis::PMTDigitizerInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_pmtAnalysiscLcLPMTDigitizerInfo(void *p) {
      delete (static_cast<::pmtAnalysis::PMTDigitizerInfo*>(p));
   }
   static void deleteArray_pmtAnalysiscLcLPMTDigitizerInfo(void *p) {
      delete [] (static_cast<::pmtAnalysis::PMTDigitizerInfo*>(p));
   }
   static void destruct_pmtAnalysiscLcLPMTDigitizerInfo(void *p) {
      typedef ::pmtAnalysis::PMTDigitizerInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::pmtAnalysis::PMTDigitizerInfo

namespace ROOT {
   static TClass *vectorlEpmtAnalysiscLcLPMTDigitizerInfogR_Dictionary();
   static void vectorlEpmtAnalysiscLcLPMTDigitizerInfogR_TClassManip(TClass*);
   static void *new_vectorlEpmtAnalysiscLcLPMTDigitizerInfogR(void *p = nullptr);
   static void *newArray_vectorlEpmtAnalysiscLcLPMTDigitizerInfogR(Long_t size, void *p);
   static void delete_vectorlEpmtAnalysiscLcLPMTDigitizerInfogR(void *p);
   static void deleteArray_vectorlEpmtAnalysiscLcLPMTDigitizerInfogR(void *p);
   static void destruct_vectorlEpmtAnalysiscLcLPMTDigitizerInfogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pmtAnalysis::PMTDigitizerInfo>*)
   {
      vector<pmtAnalysis::PMTDigitizerInfo> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pmtAnalysis::PMTDigitizerInfo>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pmtAnalysis::PMTDigitizerInfo>", -2, "vector", 423,
                  typeid(vector<pmtAnalysis::PMTDigitizerInfo>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEpmtAnalysiscLcLPMTDigitizerInfogR_Dictionary, isa_proxy, 4,
                  sizeof(vector<pmtAnalysis::PMTDigitizerInfo>) );
      instance.SetNew(&new_vectorlEpmtAnalysiscLcLPMTDigitizerInfogR);
      instance.SetNewArray(&newArray_vectorlEpmtAnalysiscLcLPMTDigitizerInfogR);
      instance.SetDelete(&delete_vectorlEpmtAnalysiscLcLPMTDigitizerInfogR);
      instance.SetDeleteArray(&deleteArray_vectorlEpmtAnalysiscLcLPMTDigitizerInfogR);
      instance.SetDestructor(&destruct_vectorlEpmtAnalysiscLcLPMTDigitizerInfogR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pmtAnalysis::PMTDigitizerInfo> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<pmtAnalysis::PMTDigitizerInfo>","std::vector<pmtAnalysis::PMTDigitizerInfo, std::allocator<pmtAnalysis::PMTDigitizerInfo> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<pmtAnalysis::PMTDigitizerInfo>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpmtAnalysiscLcLPMTDigitizerInfogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<pmtAnalysis::PMTDigitizerInfo>*>(nullptr))->GetClass();
      vectorlEpmtAnalysiscLcLPMTDigitizerInfogR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpmtAnalysiscLcLPMTDigitizerInfogR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpmtAnalysiscLcLPMTDigitizerInfogR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pmtAnalysis::PMTDigitizerInfo> : new vector<pmtAnalysis::PMTDigitizerInfo>;
   }
   static void *newArray_vectorlEpmtAnalysiscLcLPMTDigitizerInfogR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pmtAnalysis::PMTDigitizerInfo>[nElements] : new vector<pmtAnalysis::PMTDigitizerInfo>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpmtAnalysiscLcLPMTDigitizerInfogR(void *p) {
      delete (static_cast<vector<pmtAnalysis::PMTDigitizerInfo>*>(p));
   }
   static void deleteArray_vectorlEpmtAnalysiscLcLPMTDigitizerInfogR(void *p) {
      delete [] (static_cast<vector<pmtAnalysis::PMTDigitizerInfo>*>(p));
   }
   static void destruct_vectorlEpmtAnalysiscLcLPMTDigitizerInfogR(void *p) {
      typedef vector<pmtAnalysis::PMTDigitizerInfo> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<pmtAnalysis::PMTDigitizerInfo>

namespace {
  void TriggerDictionaryInitialization_libsbndqm_Decode_PMT_PMTDecodeData_dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libsbndqm_Decode_PMT_PMTDecodeData_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace pmtAnalysis{class __attribute__((annotate("$clingAutoload$sbndqm/Decode/PMT/PMTDecodeData/PMTDigitizerInfo.hh")))  PMTDigitizerInfo;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace art{template <typename T> class __attribute__((annotate("$clingAutoload$canvas/Persistency/Common/Wrapper.h")))  Wrapper;
}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libsbndqm_Decode_PMT_PMTDecodeData_dict dictionary payload"

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
#include "sbndqm/Decode/PMT/PMTDecodeData/PMTDigitizerInfo.hh"

namespace 
{
  
  struct dictionary 
  {

    pmtAnalysis::PMTDigitizerInfo d;
    std::vector<pmtAnalysis::PMTDigitizerInfo> d_v;
    art::Wrapper<pmtAnalysis::PMTDigitizerInfo> d_w;
    art::Wrapper<std::vector<pmtAnalysis::PMTDigitizerInfo>> d_v_w;
  };

}
#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"art::Wrapper<pmtAnalysis::PMTDigitizerInfo>", payloadCode, "@",
"art::Wrapper<std::vector<pmtAnalysis::PMTDigitizerInfo> >", payloadCode, "@",
"art::Wrapper<vector<pmtAnalysis::PMTDigitizerInfo> >", payloadCode, "@",
"pmtAnalysis::PMTDigitizerInfo", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libsbndqm_Decode_PMT_PMTDecodeData_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libsbndqm_Decode_PMT_PMTDecodeData_dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libsbndqm_Decode_PMT_PMTDecodeData_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libsbndqm_Decode_PMT_PMTDecodeData_dict() {
  TriggerDictionaryInitialization_libsbndqm_Decode_PMT_PMTDecodeData_dict_Impl();
}
