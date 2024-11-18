// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedInfsdIsbnddqmdIDQM_DevAreasdICRT_DQM_NP_29Oct2024dIbuild_slf7dOx86_64dIsbndqmdIsbndqmdIdqmAnalysisdITPCdIsbndqm_dqmAnalysis_TPC_dict
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
#include "/home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/srcs/sbndqm/sbndqm/dqmAnalysis/TPC/classes.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *artcLcLWrapperlEtpcAnalysiscLcLChannelDatagR_Dictionary();
   static void artcLcLWrapperlEtpcAnalysiscLcLChannelDatagR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEtpcAnalysiscLcLChannelDatagR(void *p = nullptr);
   static void *newArray_artcLcLWrapperlEtpcAnalysiscLcLChannelDatagR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEtpcAnalysiscLcLChannelDatagR(void *p);
   static void deleteArray_artcLcLWrapperlEtpcAnalysiscLcLChannelDatagR(void *p);
   static void destruct_artcLcLWrapperlEtpcAnalysiscLcLChannelDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<tpcAnalysis::ChannelData>*)
   {
      ::art::Wrapper<tpcAnalysis::ChannelData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<tpcAnalysis::ChannelData>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<tpcAnalysis::ChannelData>", ::art::Wrapper<tpcAnalysis::ChannelData>::Class_Version(), "canvas/Persistency/Common/Wrapper.h", 79,
                  typeid(::art::Wrapper<tpcAnalysis::ChannelData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEtpcAnalysiscLcLChannelDatagR_Dictionary, isa_proxy, 4,
                  sizeof(::art::Wrapper<tpcAnalysis::ChannelData>) );
      instance.SetNew(&new_artcLcLWrapperlEtpcAnalysiscLcLChannelDatagR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEtpcAnalysiscLcLChannelDatagR);
      instance.SetDelete(&delete_artcLcLWrapperlEtpcAnalysiscLcLChannelDatagR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEtpcAnalysiscLcLChannelDatagR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEtpcAnalysiscLcLChannelDatagR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<tpcAnalysis::ChannelData>*)
   {
      return GenerateInitInstanceLocal(static_cast<::art::Wrapper<tpcAnalysis::ChannelData>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::art::Wrapper<tpcAnalysis::ChannelData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEtpcAnalysiscLcLChannelDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::art::Wrapper<tpcAnalysis::ChannelData>*>(nullptr))->GetClass();
      artcLcLWrapperlEtpcAnalysiscLcLChannelDatagR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEtpcAnalysiscLcLChannelDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEvectorlEtpcAnalysiscLcLChannelDatagRsPgR_Dictionary();
   static void artcLcLWrapperlEvectorlEtpcAnalysiscLcLChannelDatagRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEvectorlEtpcAnalysiscLcLChannelDatagRsPgR(void *p = nullptr);
   static void *newArray_artcLcLWrapperlEvectorlEtpcAnalysiscLcLChannelDatagRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEvectorlEtpcAnalysiscLcLChannelDatagRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEvectorlEtpcAnalysiscLcLChannelDatagRsPgR(void *p);
   static void destruct_artcLcLWrapperlEvectorlEtpcAnalysiscLcLChannelDatagRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<vector<tpcAnalysis::ChannelData> >*)
   {
      ::art::Wrapper<vector<tpcAnalysis::ChannelData> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<vector<tpcAnalysis::ChannelData> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<vector<tpcAnalysis::ChannelData> >", ::art::Wrapper<vector<tpcAnalysis::ChannelData> >::Class_Version(), "canvas/Persistency/Common/Wrapper.h", 79,
                  typeid(::art::Wrapper<vector<tpcAnalysis::ChannelData> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEvectorlEtpcAnalysiscLcLChannelDatagRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::art::Wrapper<vector<tpcAnalysis::ChannelData> >) );
      instance.SetNew(&new_artcLcLWrapperlEvectorlEtpcAnalysiscLcLChannelDatagRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEvectorlEtpcAnalysiscLcLChannelDatagRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEvectorlEtpcAnalysiscLcLChannelDatagRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEvectorlEtpcAnalysiscLcLChannelDatagRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEvectorlEtpcAnalysiscLcLChannelDatagRsPgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("art::Wrapper<vector<tpcAnalysis::ChannelData> >","art::Wrapper<std::vector<tpcAnalysis::ChannelData> >"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("art::Wrapper<vector<tpcAnalysis::ChannelData> >","art::Wrapper<std::vector<tpcAnalysis::ChannelData, std::allocator<tpcAnalysis::ChannelData> > >"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<vector<tpcAnalysis::ChannelData> >*)
   {
      return GenerateInitInstanceLocal(static_cast<::art::Wrapper<vector<tpcAnalysis::ChannelData> >*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::art::Wrapper<vector<tpcAnalysis::ChannelData> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEvectorlEtpcAnalysiscLcLChannelDatagRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::art::Wrapper<vector<tpcAnalysis::ChannelData> >*>(nullptr))->GetClass();
      artcLcLWrapperlEvectorlEtpcAnalysiscLcLChannelDatagRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEvectorlEtpcAnalysiscLcLChannelDatagRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEtpcAnalysiscLcLReducedChannelDatagR_Dictionary();
   static void artcLcLWrapperlEtpcAnalysiscLcLReducedChannelDatagR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEtpcAnalysiscLcLReducedChannelDatagR(void *p = nullptr);
   static void *newArray_artcLcLWrapperlEtpcAnalysiscLcLReducedChannelDatagR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEtpcAnalysiscLcLReducedChannelDatagR(void *p);
   static void deleteArray_artcLcLWrapperlEtpcAnalysiscLcLReducedChannelDatagR(void *p);
   static void destruct_artcLcLWrapperlEtpcAnalysiscLcLReducedChannelDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<tpcAnalysis::ReducedChannelData>*)
   {
      ::art::Wrapper<tpcAnalysis::ReducedChannelData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<tpcAnalysis::ReducedChannelData>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<tpcAnalysis::ReducedChannelData>", ::art::Wrapper<tpcAnalysis::ReducedChannelData>::Class_Version(), "canvas/Persistency/Common/Wrapper.h", 79,
                  typeid(::art::Wrapper<tpcAnalysis::ReducedChannelData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEtpcAnalysiscLcLReducedChannelDatagR_Dictionary, isa_proxy, 4,
                  sizeof(::art::Wrapper<tpcAnalysis::ReducedChannelData>) );
      instance.SetNew(&new_artcLcLWrapperlEtpcAnalysiscLcLReducedChannelDatagR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEtpcAnalysiscLcLReducedChannelDatagR);
      instance.SetDelete(&delete_artcLcLWrapperlEtpcAnalysiscLcLReducedChannelDatagR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEtpcAnalysiscLcLReducedChannelDatagR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEtpcAnalysiscLcLReducedChannelDatagR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<tpcAnalysis::ReducedChannelData>*)
   {
      return GenerateInitInstanceLocal(static_cast<::art::Wrapper<tpcAnalysis::ReducedChannelData>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::art::Wrapper<tpcAnalysis::ReducedChannelData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEtpcAnalysiscLcLReducedChannelDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::art::Wrapper<tpcAnalysis::ReducedChannelData>*>(nullptr))->GetClass();
      artcLcLWrapperlEtpcAnalysiscLcLReducedChannelDatagR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEtpcAnalysiscLcLReducedChannelDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEvectorlEtpcAnalysiscLcLReducedChannelDatagRsPgR_Dictionary();
   static void artcLcLWrapperlEvectorlEtpcAnalysiscLcLReducedChannelDatagRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEvectorlEtpcAnalysiscLcLReducedChannelDatagRsPgR(void *p = nullptr);
   static void *newArray_artcLcLWrapperlEvectorlEtpcAnalysiscLcLReducedChannelDatagRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEvectorlEtpcAnalysiscLcLReducedChannelDatagRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEvectorlEtpcAnalysiscLcLReducedChannelDatagRsPgR(void *p);
   static void destruct_artcLcLWrapperlEvectorlEtpcAnalysiscLcLReducedChannelDatagRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<vector<tpcAnalysis::ReducedChannelData> >*)
   {
      ::art::Wrapper<vector<tpcAnalysis::ReducedChannelData> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<vector<tpcAnalysis::ReducedChannelData> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<vector<tpcAnalysis::ReducedChannelData> >", ::art::Wrapper<vector<tpcAnalysis::ReducedChannelData> >::Class_Version(), "canvas/Persistency/Common/Wrapper.h", 79,
                  typeid(::art::Wrapper<vector<tpcAnalysis::ReducedChannelData> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEvectorlEtpcAnalysiscLcLReducedChannelDatagRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::art::Wrapper<vector<tpcAnalysis::ReducedChannelData> >) );
      instance.SetNew(&new_artcLcLWrapperlEvectorlEtpcAnalysiscLcLReducedChannelDatagRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEvectorlEtpcAnalysiscLcLReducedChannelDatagRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEvectorlEtpcAnalysiscLcLReducedChannelDatagRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEvectorlEtpcAnalysiscLcLReducedChannelDatagRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEvectorlEtpcAnalysiscLcLReducedChannelDatagRsPgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("art::Wrapper<vector<tpcAnalysis::ReducedChannelData> >","art::Wrapper<std::vector<tpcAnalysis::ReducedChannelData> >"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("art::Wrapper<vector<tpcAnalysis::ReducedChannelData> >","art::Wrapper<std::vector<tpcAnalysis::ReducedChannelData, std::allocator<tpcAnalysis::ReducedChannelData> > >"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<vector<tpcAnalysis::ReducedChannelData> >*)
   {
      return GenerateInitInstanceLocal(static_cast<::art::Wrapper<vector<tpcAnalysis::ReducedChannelData> >*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::art::Wrapper<vector<tpcAnalysis::ReducedChannelData> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEvectorlEtpcAnalysiscLcLReducedChannelDatagRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::art::Wrapper<vector<tpcAnalysis::ReducedChannelData> >*>(nullptr))->GetClass();
      artcLcLWrapperlEvectorlEtpcAnalysiscLcLReducedChannelDatagRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEvectorlEtpcAnalysiscLcLReducedChannelDatagRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEvectorlEvectorlEshortgRsPgRsPgR_Dictionary();
   static void artcLcLWrapperlEvectorlEvectorlEshortgRsPgRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEvectorlEvectorlEshortgRsPgRsPgR(void *p = nullptr);
   static void *newArray_artcLcLWrapperlEvectorlEvectorlEshortgRsPgRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEvectorlEvectorlEshortgRsPgRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEvectorlEvectorlEshortgRsPgRsPgR(void *p);
   static void destruct_artcLcLWrapperlEvectorlEvectorlEshortgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<vector<vector<short> > >*)
   {
      ::art::Wrapper<vector<vector<short> > > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<vector<vector<short> > >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<vector<vector<short> > >", ::art::Wrapper<vector<vector<short> > >::Class_Version(), "canvas/Persistency/Common/Wrapper.h", 79,
                  typeid(::art::Wrapper<vector<vector<short> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEvectorlEvectorlEshortgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::art::Wrapper<vector<vector<short> > >) );
      instance.SetNew(&new_artcLcLWrapperlEvectorlEvectorlEshortgRsPgRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEvectorlEvectorlEshortgRsPgRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEvectorlEvectorlEshortgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEvectorlEvectorlEshortgRsPgRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEvectorlEvectorlEshortgRsPgRsPgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("art::Wrapper<vector<vector<short> > >","art::Wrapper<std::vector<std::vector<short> > >"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("art::Wrapper<vector<vector<short> > >","art::Wrapper<std::vector<std::vector<short, std::allocator<short> >, std::allocator<std::vector<short, std::allocator<short> > > > >"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<vector<vector<short> > >*)
   {
      return GenerateInitInstanceLocal(static_cast<::art::Wrapper<vector<vector<short> > >*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::art::Wrapper<vector<vector<short> > >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEvectorlEvectorlEshortgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::art::Wrapper<vector<vector<short> > >*>(nullptr))->GetClass();
      artcLcLWrapperlEvectorlEvectorlEshortgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEvectorlEvectorlEshortgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *tpcAnalysiscLcLChannelData_Dictionary();
   static void tpcAnalysiscLcLChannelData_TClassManip(TClass*);
   static void *new_tpcAnalysiscLcLChannelData(void *p = nullptr);
   static void *newArray_tpcAnalysiscLcLChannelData(Long_t size, void *p);
   static void delete_tpcAnalysiscLcLChannelData(void *p);
   static void deleteArray_tpcAnalysiscLcLChannelData(void *p);
   static void destruct_tpcAnalysiscLcLChannelData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::tpcAnalysis::ChannelData*)
   {
      ::tpcAnalysis::ChannelData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::tpcAnalysis::ChannelData));
      static ::ROOT::TGenericClassInfo 
         instance("tpcAnalysis::ChannelData", "sbndqm/dqmAnalysis/TPC/ChannelData.hh", 13,
                  typeid(::tpcAnalysis::ChannelData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &tpcAnalysiscLcLChannelData_Dictionary, isa_proxy, 4,
                  sizeof(::tpcAnalysis::ChannelData) );
      instance.SetNew(&new_tpcAnalysiscLcLChannelData);
      instance.SetNewArray(&newArray_tpcAnalysiscLcLChannelData);
      instance.SetDelete(&delete_tpcAnalysiscLcLChannelData);
      instance.SetDeleteArray(&deleteArray_tpcAnalysiscLcLChannelData);
      instance.SetDestructor(&destruct_tpcAnalysiscLcLChannelData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::tpcAnalysis::ChannelData*)
   {
      return GenerateInitInstanceLocal(static_cast<::tpcAnalysis::ChannelData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::tpcAnalysis::ChannelData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *tpcAnalysiscLcLChannelData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::tpcAnalysis::ChannelData*>(nullptr))->GetClass();
      tpcAnalysiscLcLChannelData_TClassManip(theClass);
   return theClass;
   }

   static void tpcAnalysiscLcLChannelData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *tpcAnalysiscLcLReducedChannelData_Dictionary();
   static void tpcAnalysiscLcLReducedChannelData_TClassManip(TClass*);
   static void *new_tpcAnalysiscLcLReducedChannelData(void *p = nullptr);
   static void *newArray_tpcAnalysiscLcLReducedChannelData(Long_t size, void *p);
   static void delete_tpcAnalysiscLcLReducedChannelData(void *p);
   static void deleteArray_tpcAnalysiscLcLReducedChannelData(void *p);
   static void destruct_tpcAnalysiscLcLReducedChannelData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::tpcAnalysis::ReducedChannelData*)
   {
      ::tpcAnalysis::ReducedChannelData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::tpcAnalysis::ReducedChannelData));
      static ::ROOT::TGenericClassInfo 
         instance("tpcAnalysis::ReducedChannelData", "sbndqm/dqmAnalysis/TPC/ChannelData.hh", 50,
                  typeid(::tpcAnalysis::ReducedChannelData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &tpcAnalysiscLcLReducedChannelData_Dictionary, isa_proxy, 4,
                  sizeof(::tpcAnalysis::ReducedChannelData) );
      instance.SetNew(&new_tpcAnalysiscLcLReducedChannelData);
      instance.SetNewArray(&newArray_tpcAnalysiscLcLReducedChannelData);
      instance.SetDelete(&delete_tpcAnalysiscLcLReducedChannelData);
      instance.SetDeleteArray(&deleteArray_tpcAnalysiscLcLReducedChannelData);
      instance.SetDestructor(&destruct_tpcAnalysiscLcLReducedChannelData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::tpcAnalysis::ReducedChannelData*)
   {
      return GenerateInitInstanceLocal(static_cast<::tpcAnalysis::ReducedChannelData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::tpcAnalysis::ReducedChannelData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *tpcAnalysiscLcLReducedChannelData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::tpcAnalysis::ReducedChannelData*>(nullptr))->GetClass();
      tpcAnalysiscLcLReducedChannelData_TClassManip(theClass);
   return theClass;
   }

   static void tpcAnalysiscLcLReducedChannelData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEtpcAnalysiscLcLChannelDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<tpcAnalysis::ChannelData> : new ::art::Wrapper<tpcAnalysis::ChannelData>;
   }
   static void *newArray_artcLcLWrapperlEtpcAnalysiscLcLChannelDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<tpcAnalysis::ChannelData>[nElements] : new ::art::Wrapper<tpcAnalysis::ChannelData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEtpcAnalysiscLcLChannelDatagR(void *p) {
      delete (static_cast<::art::Wrapper<tpcAnalysis::ChannelData>*>(p));
   }
   static void deleteArray_artcLcLWrapperlEtpcAnalysiscLcLChannelDatagR(void *p) {
      delete [] (static_cast<::art::Wrapper<tpcAnalysis::ChannelData>*>(p));
   }
   static void destruct_artcLcLWrapperlEtpcAnalysiscLcLChannelDatagR(void *p) {
      typedef ::art::Wrapper<tpcAnalysis::ChannelData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<tpcAnalysis::ChannelData>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEvectorlEtpcAnalysiscLcLChannelDatagRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<tpcAnalysis::ChannelData> > : new ::art::Wrapper<vector<tpcAnalysis::ChannelData> >;
   }
   static void *newArray_artcLcLWrapperlEvectorlEtpcAnalysiscLcLChannelDatagRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<tpcAnalysis::ChannelData> >[nElements] : new ::art::Wrapper<vector<tpcAnalysis::ChannelData> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEvectorlEtpcAnalysiscLcLChannelDatagRsPgR(void *p) {
      delete (static_cast<::art::Wrapper<vector<tpcAnalysis::ChannelData> >*>(p));
   }
   static void deleteArray_artcLcLWrapperlEvectorlEtpcAnalysiscLcLChannelDatagRsPgR(void *p) {
      delete [] (static_cast<::art::Wrapper<vector<tpcAnalysis::ChannelData> >*>(p));
   }
   static void destruct_artcLcLWrapperlEvectorlEtpcAnalysiscLcLChannelDatagRsPgR(void *p) {
      typedef ::art::Wrapper<vector<tpcAnalysis::ChannelData> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<vector<tpcAnalysis::ChannelData> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEtpcAnalysiscLcLReducedChannelDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<tpcAnalysis::ReducedChannelData> : new ::art::Wrapper<tpcAnalysis::ReducedChannelData>;
   }
   static void *newArray_artcLcLWrapperlEtpcAnalysiscLcLReducedChannelDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<tpcAnalysis::ReducedChannelData>[nElements] : new ::art::Wrapper<tpcAnalysis::ReducedChannelData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEtpcAnalysiscLcLReducedChannelDatagR(void *p) {
      delete (static_cast<::art::Wrapper<tpcAnalysis::ReducedChannelData>*>(p));
   }
   static void deleteArray_artcLcLWrapperlEtpcAnalysiscLcLReducedChannelDatagR(void *p) {
      delete [] (static_cast<::art::Wrapper<tpcAnalysis::ReducedChannelData>*>(p));
   }
   static void destruct_artcLcLWrapperlEtpcAnalysiscLcLReducedChannelDatagR(void *p) {
      typedef ::art::Wrapper<tpcAnalysis::ReducedChannelData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<tpcAnalysis::ReducedChannelData>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEvectorlEtpcAnalysiscLcLReducedChannelDatagRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<tpcAnalysis::ReducedChannelData> > : new ::art::Wrapper<vector<tpcAnalysis::ReducedChannelData> >;
   }
   static void *newArray_artcLcLWrapperlEvectorlEtpcAnalysiscLcLReducedChannelDatagRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<tpcAnalysis::ReducedChannelData> >[nElements] : new ::art::Wrapper<vector<tpcAnalysis::ReducedChannelData> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEvectorlEtpcAnalysiscLcLReducedChannelDatagRsPgR(void *p) {
      delete (static_cast<::art::Wrapper<vector<tpcAnalysis::ReducedChannelData> >*>(p));
   }
   static void deleteArray_artcLcLWrapperlEvectorlEtpcAnalysiscLcLReducedChannelDatagRsPgR(void *p) {
      delete [] (static_cast<::art::Wrapper<vector<tpcAnalysis::ReducedChannelData> >*>(p));
   }
   static void destruct_artcLcLWrapperlEvectorlEtpcAnalysiscLcLReducedChannelDatagRsPgR(void *p) {
      typedef ::art::Wrapper<vector<tpcAnalysis::ReducedChannelData> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<vector<tpcAnalysis::ReducedChannelData> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEvectorlEvectorlEshortgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<vector<short> > > : new ::art::Wrapper<vector<vector<short> > >;
   }
   static void *newArray_artcLcLWrapperlEvectorlEvectorlEshortgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<vector<short> > >[nElements] : new ::art::Wrapper<vector<vector<short> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEvectorlEvectorlEshortgRsPgRsPgR(void *p) {
      delete (static_cast<::art::Wrapper<vector<vector<short> > >*>(p));
   }
   static void deleteArray_artcLcLWrapperlEvectorlEvectorlEshortgRsPgRsPgR(void *p) {
      delete [] (static_cast<::art::Wrapper<vector<vector<short> > >*>(p));
   }
   static void destruct_artcLcLWrapperlEvectorlEvectorlEshortgRsPgRsPgR(void *p) {
      typedef ::art::Wrapper<vector<vector<short> > > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<vector<vector<short> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_tpcAnalysiscLcLChannelData(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::tpcAnalysis::ChannelData : new ::tpcAnalysis::ChannelData;
   }
   static void *newArray_tpcAnalysiscLcLChannelData(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::tpcAnalysis::ChannelData[nElements] : new ::tpcAnalysis::ChannelData[nElements];
   }
   // Wrapper around operator delete
   static void delete_tpcAnalysiscLcLChannelData(void *p) {
      delete (static_cast<::tpcAnalysis::ChannelData*>(p));
   }
   static void deleteArray_tpcAnalysiscLcLChannelData(void *p) {
      delete [] (static_cast<::tpcAnalysis::ChannelData*>(p));
   }
   static void destruct_tpcAnalysiscLcLChannelData(void *p) {
      typedef ::tpcAnalysis::ChannelData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::tpcAnalysis::ChannelData

namespace ROOT {
   // Wrappers around operator new
   static void *new_tpcAnalysiscLcLReducedChannelData(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::tpcAnalysis::ReducedChannelData : new ::tpcAnalysis::ReducedChannelData;
   }
   static void *newArray_tpcAnalysiscLcLReducedChannelData(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::tpcAnalysis::ReducedChannelData[nElements] : new ::tpcAnalysis::ReducedChannelData[nElements];
   }
   // Wrapper around operator delete
   static void delete_tpcAnalysiscLcLReducedChannelData(void *p) {
      delete (static_cast<::tpcAnalysis::ReducedChannelData*>(p));
   }
   static void deleteArray_tpcAnalysiscLcLReducedChannelData(void *p) {
      delete [] (static_cast<::tpcAnalysis::ReducedChannelData*>(p));
   }
   static void destruct_tpcAnalysiscLcLReducedChannelData(void *p) {
      typedef ::tpcAnalysis::ReducedChannelData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::tpcAnalysis::ReducedChannelData

namespace ROOT {
   static TClass *vectorlEvectorlEshortgRsPgR_Dictionary();
   static void vectorlEvectorlEshortgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEshortgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlEshortgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEshortgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEshortgRsPgR(void *p);
   static void destruct_vectorlEvectorlEshortgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<short> >*)
   {
      vector<vector<short> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<short> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<short> >", -2, "vector", 423,
                  typeid(vector<vector<short> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEshortgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<short> >) );
      instance.SetNew(&new_vectorlEvectorlEshortgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEshortgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEshortgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEshortgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEshortgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<short> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<vector<short> >","std::vector<std::vector<short, std::allocator<short> >, std::allocator<std::vector<short, std::allocator<short> > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<vector<short> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEshortgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<vector<short> >*>(nullptr))->GetClass();
      vectorlEvectorlEshortgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEshortgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEshortgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<short> > : new vector<vector<short> >;
   }
   static void *newArray_vectorlEvectorlEshortgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<short> >[nElements] : new vector<vector<short> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEshortgRsPgR(void *p) {
      delete (static_cast<vector<vector<short> >*>(p));
   }
   static void deleteArray_vectorlEvectorlEshortgRsPgR(void *p) {
      delete [] (static_cast<vector<vector<short> >*>(p));
   }
   static void destruct_vectorlEvectorlEshortgRsPgR(void *p) {
      typedef vector<vector<short> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<vector<short> >

namespace ROOT {
   static TClass *vectorlEtpcAnalysiscLcLReducedChannelDatagR_Dictionary();
   static void vectorlEtpcAnalysiscLcLReducedChannelDatagR_TClassManip(TClass*);
   static void *new_vectorlEtpcAnalysiscLcLReducedChannelDatagR(void *p = nullptr);
   static void *newArray_vectorlEtpcAnalysiscLcLReducedChannelDatagR(Long_t size, void *p);
   static void delete_vectorlEtpcAnalysiscLcLReducedChannelDatagR(void *p);
   static void deleteArray_vectorlEtpcAnalysiscLcLReducedChannelDatagR(void *p);
   static void destruct_vectorlEtpcAnalysiscLcLReducedChannelDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<tpcAnalysis::ReducedChannelData>*)
   {
      vector<tpcAnalysis::ReducedChannelData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<tpcAnalysis::ReducedChannelData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<tpcAnalysis::ReducedChannelData>", -2, "vector", 423,
                  typeid(vector<tpcAnalysis::ReducedChannelData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEtpcAnalysiscLcLReducedChannelDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<tpcAnalysis::ReducedChannelData>) );
      instance.SetNew(&new_vectorlEtpcAnalysiscLcLReducedChannelDatagR);
      instance.SetNewArray(&newArray_vectorlEtpcAnalysiscLcLReducedChannelDatagR);
      instance.SetDelete(&delete_vectorlEtpcAnalysiscLcLReducedChannelDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEtpcAnalysiscLcLReducedChannelDatagR);
      instance.SetDestructor(&destruct_vectorlEtpcAnalysiscLcLReducedChannelDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<tpcAnalysis::ReducedChannelData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<tpcAnalysis::ReducedChannelData>","std::vector<tpcAnalysis::ReducedChannelData, std::allocator<tpcAnalysis::ReducedChannelData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<tpcAnalysis::ReducedChannelData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEtpcAnalysiscLcLReducedChannelDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<tpcAnalysis::ReducedChannelData>*>(nullptr))->GetClass();
      vectorlEtpcAnalysiscLcLReducedChannelDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEtpcAnalysiscLcLReducedChannelDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEtpcAnalysiscLcLReducedChannelDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<tpcAnalysis::ReducedChannelData> : new vector<tpcAnalysis::ReducedChannelData>;
   }
   static void *newArray_vectorlEtpcAnalysiscLcLReducedChannelDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<tpcAnalysis::ReducedChannelData>[nElements] : new vector<tpcAnalysis::ReducedChannelData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEtpcAnalysiscLcLReducedChannelDatagR(void *p) {
      delete (static_cast<vector<tpcAnalysis::ReducedChannelData>*>(p));
   }
   static void deleteArray_vectorlEtpcAnalysiscLcLReducedChannelDatagR(void *p) {
      delete [] (static_cast<vector<tpcAnalysis::ReducedChannelData>*>(p));
   }
   static void destruct_vectorlEtpcAnalysiscLcLReducedChannelDatagR(void *p) {
      typedef vector<tpcAnalysis::ReducedChannelData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<tpcAnalysis::ReducedChannelData>

namespace ROOT {
   static TClass *vectorlEtpcAnalysiscLcLChannelDatagR_Dictionary();
   static void vectorlEtpcAnalysiscLcLChannelDatagR_TClassManip(TClass*);
   static void *new_vectorlEtpcAnalysiscLcLChannelDatagR(void *p = nullptr);
   static void *newArray_vectorlEtpcAnalysiscLcLChannelDatagR(Long_t size, void *p);
   static void delete_vectorlEtpcAnalysiscLcLChannelDatagR(void *p);
   static void deleteArray_vectorlEtpcAnalysiscLcLChannelDatagR(void *p);
   static void destruct_vectorlEtpcAnalysiscLcLChannelDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<tpcAnalysis::ChannelData>*)
   {
      vector<tpcAnalysis::ChannelData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<tpcAnalysis::ChannelData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<tpcAnalysis::ChannelData>", -2, "vector", 423,
                  typeid(vector<tpcAnalysis::ChannelData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEtpcAnalysiscLcLChannelDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<tpcAnalysis::ChannelData>) );
      instance.SetNew(&new_vectorlEtpcAnalysiscLcLChannelDatagR);
      instance.SetNewArray(&newArray_vectorlEtpcAnalysiscLcLChannelDatagR);
      instance.SetDelete(&delete_vectorlEtpcAnalysiscLcLChannelDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEtpcAnalysiscLcLChannelDatagR);
      instance.SetDestructor(&destruct_vectorlEtpcAnalysiscLcLChannelDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<tpcAnalysis::ChannelData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<tpcAnalysis::ChannelData>","std::vector<tpcAnalysis::ChannelData, std::allocator<tpcAnalysis::ChannelData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<tpcAnalysis::ChannelData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEtpcAnalysiscLcLChannelDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<tpcAnalysis::ChannelData>*>(nullptr))->GetClass();
      vectorlEtpcAnalysiscLcLChannelDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEtpcAnalysiscLcLChannelDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEtpcAnalysiscLcLChannelDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<tpcAnalysis::ChannelData> : new vector<tpcAnalysis::ChannelData>;
   }
   static void *newArray_vectorlEtpcAnalysiscLcLChannelDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<tpcAnalysis::ChannelData>[nElements] : new vector<tpcAnalysis::ChannelData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEtpcAnalysiscLcLChannelDatagR(void *p) {
      delete (static_cast<vector<tpcAnalysis::ChannelData>*>(p));
   }
   static void deleteArray_vectorlEtpcAnalysiscLcLChannelDatagR(void *p) {
      delete [] (static_cast<vector<tpcAnalysis::ChannelData>*>(p));
   }
   static void destruct_vectorlEtpcAnalysiscLcLChannelDatagR(void *p) {
      typedef vector<tpcAnalysis::ChannelData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<tpcAnalysis::ChannelData>

namespace ROOT {
   static TClass *vectorlEshortgR_Dictionary();
   static void vectorlEshortgR_TClassManip(TClass*);
   static void *new_vectorlEshortgR(void *p = nullptr);
   static void *newArray_vectorlEshortgR(Long_t size, void *p);
   static void delete_vectorlEshortgR(void *p);
   static void deleteArray_vectorlEshortgR(void *p);
   static void destruct_vectorlEshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<short>*)
   {
      vector<short> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<short>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<short>", -2, "vector", 423,
                  typeid(vector<short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEshortgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<short>) );
      instance.SetNew(&new_vectorlEshortgR);
      instance.SetNewArray(&newArray_vectorlEshortgR);
      instance.SetDelete(&delete_vectorlEshortgR);
      instance.SetDeleteArray(&deleteArray_vectorlEshortgR);
      instance.SetDestructor(&destruct_vectorlEshortgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<short> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<short>","std::vector<short, std::allocator<short> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<short>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<short>*>(nullptr))->GetClass();
      vectorlEshortgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEshortgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<short> : new vector<short>;
   }
   static void *newArray_vectorlEshortgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<short>[nElements] : new vector<short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEshortgR(void *p) {
      delete (static_cast<vector<short>*>(p));
   }
   static void deleteArray_vectorlEshortgR(void *p) {
      delete [] (static_cast<vector<short>*>(p));
   }
   static void destruct_vectorlEshortgR(void *p) {
      typedef vector<short> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<short>

namespace {
  void TriggerDictionaryInitialization_libsbndqm_dqmAnalysis_TPC_dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libsbndqm_dqmAnalysis_TPC_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace tpcAnalysis{class __attribute__((annotate("$clingAutoload$sbndqm/dqmAnalysis/TPC/ChannelData.hh")))  ChannelData;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace tpcAnalysis{class __attribute__((annotate("$clingAutoload$sbndqm/dqmAnalysis/TPC/ChannelData.hh")))  ReducedChannelData;}
namespace art{template <typename T> class __attribute__((annotate("$clingAutoload$canvas/Persistency/Common/Wrapper.h")))  Wrapper;
}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libsbndqm_dqmAnalysis_TPC_dict dictionary payload"

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
#ifndef TBB_USE_DEBUG
  #define TBB_USE_DEBUG 1
#endif
#ifndef BOOST_PROGRAM_OPTIONS_NO_LIB
  #define BOOST_PROGRAM_OPTIONS_NO_LIB 1
#endif
#ifndef BOOST_PROGRAM_OPTIONS_DYN_LINK
  #define BOOST_PROGRAM_OPTIONS_DYN_LINK 1
#endif
#ifndef BOOST_DATE_TIME_NO_LIB
  #define BOOST_DATE_TIME_NO_LIB 1
#endif
#ifndef BOOST_DATE_TIME_DYN_LINK
  #define BOOST_DATE_TIME_DYN_LINK 1
#endif
#ifndef BOOST_REGEX_NO_LIB
  #define BOOST_REGEX_NO_LIB 1
#endif
#ifndef BOOST_REGEX_DYN_LINK
  #define BOOST_REGEX_DYN_LINK 1
#endif
#ifndef BOOST_SYSTEM_NO_LIB
  #define BOOST_SYSTEM_NO_LIB 1
#endif
#ifndef BOOST_SYSTEM_DYN_LINK
  #define BOOST_SYSTEM_DYN_LINK 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "canvas/Persistency/Common/Wrapper.h"
#include <vector>
#include "sbndqm/dqmAnalysis/TPC/ChannelData.hh"
#include "sbndqm/dqmAnalysis/TPC/ChannelDataSBND.hh"

namespace {
  struct dictionary {
    tpcAnalysis::ChannelData c;
    std::vector<tpcAnalysis::ChannelData> c_v;
    art::Wrapper<tpcAnalysis::ChannelData> c_w;
    art::Wrapper<std::vector<tpcAnalysis::ChannelData>> c_v_w;

    tpcAnalysis::ReducedChannelData rc;
    std::vector<tpcAnalysis::ReducedChannelData> rc_v;
    art::Wrapper<tpcAnalysis::ReducedChannelData> rc_w;
    art::Wrapper<std::vector<tpcAnalysis::ReducedChannelData>> rc_v_w;

    std::vector<std::vector<short>> vs_v;
    art::Wrapper<std::vector<std::vector<short>>> vs_v_w;
    
  };
}



#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"art::Wrapper<std::vector<std::vector<short> > >", payloadCode, "@",
"art::Wrapper<std::vector<tpcAnalysis::ChannelData> >", payloadCode, "@",
"art::Wrapper<std::vector<tpcAnalysis::ReducedChannelData> >", payloadCode, "@",
"art::Wrapper<tpcAnalysis::ChannelData>", payloadCode, "@",
"art::Wrapper<tpcAnalysis::ReducedChannelData>", payloadCode, "@",
"art::Wrapper<vector<tpcAnalysis::ChannelData> >", payloadCode, "@",
"art::Wrapper<vector<tpcAnalysis::ReducedChannelData> >", payloadCode, "@",
"art::Wrapper<vector<vector<short> > >", payloadCode, "@",
"tpcAnalysis::ChannelData", payloadCode, "@",
"tpcAnalysis::ReducedChannelData", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libsbndqm_dqmAnalysis_TPC_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libsbndqm_dqmAnalysis_TPC_dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libsbndqm_dqmAnalysis_TPC_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libsbndqm_dqmAnalysis_TPC_dict() {
  TriggerDictionaryInitialization_libsbndqm_dqmAnalysis_TPC_dict_Impl();
}
