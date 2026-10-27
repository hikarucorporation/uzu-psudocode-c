// Function : loadFrom
// Namespace: juce:ImageFileFormat
// Entry    : 003c1890
// Prototype: ImageFileFormat * loadFrom(ImageFileFormat * this, long param_1, ulong param_2)
// Body     : 003c1890 - 003c1a16


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::ImageFileFormat::loadFrom(void const*, unsigned long) */

ImageFileFormat * __thiscall
juce::ImageFileFormat::loadFrom(ImageFileFormat *this,long param_1,ulong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined **local_60;
  long local_58;
  ulong local_50;
  undefined8 local_48;
  void *pvStack_40;
  undefined8 local_38;
  
  if ((param_1 == 0) || (param_2 < 5)) {
    *(undefined8 *)this = 0;
  }
  else {
    local_60 = &PTR__MemoryInputStream_007132a0;
    local_48 = 0;
    pvStack_40 = (void *)0x0;
    local_38 = 0;
    local_58 = param_1;
    local_50 = param_2;
    uVar3 = MemoryInputStream::getPosition((MemoryInputStream *)&local_60);
    if ((DefaultImageFormats::get()::formats == '\0') &&
       (iVar2 = __cxa_guard_acquire(&DefaultImageFormats::get()::formats), iVar2 != 0)) {
      DefaultImageFormats::get()::formats = &PTR__PNGImageFormat_00711938;
      _DAT_0071ccd0 = &PTR__JPEGImageFormat_007118f0;
      _DAT_0071ccd8 = 0xbf800000;
      _DAT_0071cce0 = &PTR__GIFImageFormat_007118a8;
      DAT_0071cce8 = (long *)&DefaultImageFormats::get()::formats;
      DAT_0071ccf0 = &DAT_0071ccd0;
      _DAT_0071ccf8 = &DAT_0071cce0;
      _DAT_0071cd00 = 0;
      __cxa_guard_release(&DefaultImageFormats::get()::formats);
    }
    if (DAT_0071cce8 != (long *)0x0) {
      puVar4 = &DAT_0071ccf0;
      plVar5 = DAT_0071cce8;
      do {
                    /* try { // try from 003c1913 to 003c192b has its CatchHandler @ 003c1a19 */
        cVar1 = (**(code **)(*plVar5 + 0x18))(plVar5,&local_60);
        (*(code *)local_60[0x17])(&local_60,uVar3);
        if (cVar1 != '\0') {
          plVar5 = (long *)puVar4[-1];
          if (plVar5 != (long *)0x0) {
                    /* try { // try from 003c1954 to 003c195e has its CatchHandler @ 003c1a17 */
            (**(code **)(*plVar5 + 0x28))(this,plVar5,&local_60);
            goto LAB_003c1968;
          }
          break;
        }
        plVar5 = (long *)*puVar4;
        puVar4 = puVar4 + 1;
      } while (plVar5 != (long *)0x0);
    }
    *(undefined8 *)this = 0;
LAB_003c1968:
    local_60 = &PTR__MemoryInputStream_007132a0;
    free(pvStack_40);
  }
  return this;
}


