#include "ofxsImageEffect.h"
#include "ReadOIIO.h"
#include "WriteOIIO.h"
#ifdef DEBUG
#include "OIIOText.h"
#endif

namespace OFX 
{
  namespace Plugin 
  {
    void getPluginIDs(OFX::PluginFactoryArray &ids)
    {
        getReadOIIOPluginID(ids);
        getWriteOIIOPluginID(ids);
#ifdef DEBUG
        getOIIOTextPluginID(ids);
#endif
    }
  }
}
