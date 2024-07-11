/*!
 * @file
 * @brief System Manager implementations.
 */

#include <host_system/SystemManager.hpp>

namespace System 
{

static const char* sRegionCode = "RMCP";
static const char* MAIN_SMAP = "/rel/RevoKartR.SMAP";

SystemManager* SystemManager::sInstance;

SystemManager* SystemManager::initStaticInstance(EGG::Heap* heap) {
  return (sInstance = new SystemManager(heap));
}
SystemManager::~SystemManager() { delete[] this->buf_88; }

void SystemManager::LoadSymbols(OSModuleInfo* pModuleInfo) {
  pModuleInfo = pModuleInfo != nullptr ? pModuleInfo : this->_B0; // r5

  if (pModuleInfo == nullptr)
    return;

  if (MAIN_SMAP != nullptr) // "/rel/RevoKartR.SMAP"
  {
      u32 map_size;
      u32* mpMap = (unsigned int*)SystemManager::sInstance->ripFromDisc(MAIN_SMAP, (EGG::Heap*)pModuleInfo, 0, &map_size, 0);

      if (mpMap != nullptr) 
      {
        OSReport("[SYS] Load MapFile \"%s\" success.\n", MAIN_SMAP);
      } 
      else 
      {
        OSReport("[SYS] Load MapFile \"%s\" fail.\n", MAIN_SMAP);
      }
    }
  }
} // namespace System
