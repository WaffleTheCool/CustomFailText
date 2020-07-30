// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:45 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: Zenject.FactoryToChoiceBinder`6
#include "Zenject/FactoryToChoiceBinder_6.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: FactoryBindInfo
  class FactoryBindInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FactoryArgumentsToChoiceBinder`6
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
  class FactoryArgumentsToChoiceBinder_6 : public Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract> {
    public:
    // public Zenject.FactoryToChoiceBinder`6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract> WithFactoryArguments(T param)
    // Offset: 0x13D8414
    template<class T>
    Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* WithFactoryArguments(T param) {
      return CRASH_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>(this, "WithFactoryArguments", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, param)));
    }
    // public Zenject.FactoryToChoiceBinder`6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract> WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2)
    // Offset: 0x13D83B8
    template<class TFactoryParam1, class TFactoryParam2>
    Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2) {
      return CRASH_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>(this, "WithFactoryArguments", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get()}, param1, param2)));
    }
    // public Zenject.FactoryToChoiceBinder`6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract> WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3)
    // Offset: 0x13D8358
    template<class TFactoryParam1, class TFactoryParam2, class TFactoryParam3>
    Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3) {
      return CRASH_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>(this, "WithFactoryArguments", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam3>::get()}, param1, param2, param3)));
    }
    // public Zenject.FactoryToChoiceBinder`6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract> WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3, TFactoryParam4 param4)
    // Offset: 0x13D82F4
    template<class TFactoryParam1, class TFactoryParam2, class TFactoryParam3, class TFactoryParam4>
    Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3, TFactoryParam4 param4) {
      return CRASH_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>(this, "WithFactoryArguments", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam4>::get()}, param1, param2, param3, param4)));
    }
    // public Zenject.FactoryToChoiceBinder`6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract> WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3, TFactoryParam4 param4, TFactoryParam5 param5)
    // Offset: 0x13D828C
    template<class TFactoryParam1, class TFactoryParam2, class TFactoryParam3, class TFactoryParam4, class TFactoryParam5>
    Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3, TFactoryParam4 param4, TFactoryParam5 param5) {
      return CRASH_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>(this, "WithFactoryArguments", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam4>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam5>::get()}, param1, param2, param3, param4, param5)));
    }
    // public Zenject.FactoryToChoiceBinder`6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract> WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3, TFactoryParam4 param4, TFactoryParam5 param5, TFactoryParam6 param6)
    // Offset: 0x13D8220
    template<class TFactoryParam1, class TFactoryParam2, class TFactoryParam3, class TFactoryParam4, class TFactoryParam5, class TFactoryParam6>
    Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3, TFactoryParam4 param4, TFactoryParam5 param5, TFactoryParam6 param6) {
      return CRASH_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>(this, "WithFactoryArguments", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam4>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam5>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam6>::get()}, param1, param2, param3, param4, param5, param6)));
    }
    // public Zenject.FactoryToChoiceBinder`6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract> WithFactoryArguments(System.Object[] args)
    // Offset: 0x117D39C
    Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* WithFactoryArguments(::Array<::Il2CppObject*>* args) {
      return CRASH_UNLESS((il2cpp_utils::RunMethod<Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>(this, "WithFactoryArguments", args)));
    }
    // public Zenject.FactoryToChoiceBinder`6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract> WithFactoryArgumentsExplicit(System.Collections.Generic.IEnumerable`1<Zenject.TypeValuePair> extraArgs)
    // Offset: 0x117D3E8
    Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* WithFactoryArgumentsExplicit(System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair>* extraArgs) {
      return CRASH_UNLESS((il2cpp_utils::RunMethod<Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>(this, "WithFactoryArgumentsExplicit", extraArgs)));
    }
    // public System.Void .ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Offset: 0x117D378
    // Implemented from: Zenject.FactoryToChoiceBinder`6
    // Base method: System.Void FactoryToChoiceBinder`6::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Base method: System.Void FactoryFromBinder`6::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    static FactoryArgumentsToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* New_ctor(Zenject::DiContainer* bindContainer, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo) {
      return (FactoryArgumentsToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryArgumentsToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>::get(), bindContainer, bindInfo, factoryBindInfo));
    }
  }; // Zenject.FactoryArgumentsToChoiceBinder`6
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryArgumentsToChoiceBinder_6, "Zenject", "FactoryArgumentsToChoiceBinder`6");
#pragma pack(pop)
