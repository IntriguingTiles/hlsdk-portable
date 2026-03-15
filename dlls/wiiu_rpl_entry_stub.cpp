#include <coreinit/dynload.h>

extern "C" int rpl_entry(OSDynLoad_Module module, OSDynLoad_EntryReason reason){return 0;}
extern "C" struct _reent *__wut_getreent(void)
{
   return _GLOBAL_REENT;
}