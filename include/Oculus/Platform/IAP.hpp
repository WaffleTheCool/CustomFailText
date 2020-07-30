// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:02 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request
  class Request;
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: ProductList
  class ProductList;
  // Forward declaring type: PurchaseList
  class PurchaseList;
  // Forward declaring type: Purchase
  class Purchase;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.IAP
  class IAP : public ::Il2CppObject {
    public:
    // static public Oculus.Platform.Request ConsumePurchase(System.String sku)
    // Offset: 0xE82CF0
    static Oculus::Platform::Request* ConsumePurchase(::Il2CppString* sku);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.ProductList> GetProductsBySKU(System.String[] skus)
    // Offset: 0xE82E04
    static Oculus::Platform::Request_1<Oculus::Platform::Models::ProductList*>* GetProductsBySKU(::Array<::Il2CppString*>* skus);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.PurchaseList> GetViewerPurchases()
    // Offset: 0xE82F34
    static Oculus::Platform::Request_1<Oculus::Platform::Models::PurchaseList*>* GetViewerPurchases();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.PurchaseList> GetViewerPurchasesDurableCache()
    // Offset: 0xE83040
    static Oculus::Platform::Request_1<Oculus::Platform::Models::PurchaseList*>* GetViewerPurchasesDurableCache();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.Purchase> LaunchCheckoutFlow(System.String sku)
    // Offset: 0xE8314C
    static Oculus::Platform::Request_1<Oculus::Platform::Models::Purchase*>* LaunchCheckoutFlow(::Il2CppString* sku);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.ProductList> GetNextProductListPage(Oculus.Platform.Models.ProductList list)
    // Offset: 0xE832B0
    static Oculus::Platform::Request_1<Oculus::Platform::Models::ProductList*>* GetNextProductListPage(Oculus::Platform::Models::ProductList* list);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.PurchaseList> GetNextPurchaseListPage(Oculus.Platform.Models.PurchaseList list)
    // Offset: 0xE8342C
    static Oculus::Platform::Request_1<Oculus::Platform::Models::PurchaseList*>* GetNextPurchaseListPage(Oculus::Platform::Models::PurchaseList* list);
  }; // Oculus.Platform.IAP
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::IAP*, "Oculus.Platform", "IAP");
#pragma pack(pop)
