// Function : getPixelAt
// Namespace: juce:Image
// Entry    : 003c1720
// Prototype: uint getPixelAt(Image * this, uint param_1, uint param_2)
// Body     : 003c1720 - 003c1870


/* juce::Image::getPixelAt(int, int) const */

uint __thiscall juce::Image::getPixelAt(Image *this,uint param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *local_38 [2];
  int local_28;
  undefined8 local_1c;
  long *local_10;
  
  uVar3 = 0;
  if (this != (Image *)0x0) {
    if ((param_1 < *(uint *)(this + 0x10)) && (param_2 < *(uint *)(this + 0x14))) {
      local_1c = 0x100000001;
      local_10 = (long *)0x0;
                    /* try { // try from 003c1761 to 003c176b has its CatchHandler @ 003c1871 */
      uVar3 = 0;
      (**(code **)(*(long *)this + 0x38))(this,local_38,param_1);
      if (local_28 == 1) {
        uVar3 = (uint3)*local_38[0] | 0xff000000;
      }
      else if (local_28 == 3) {
        uVar3 = (uint)(byte)*local_38[0] * 0x1010101;
      }
      else if (local_28 == 2) {
        uVar3 = *local_38[0];
        uVar4 = uVar3 >> 8;
        uVar2 = uVar3 >> 0x10;
        bVar1 = (byte)(uVar3 >> 0x18);
        if (bVar1 == 0xff) {
          uVar5 = uVar3;
        }
        else if (bVar1 == 0) {
          uVar2 = 0;
          uVar4 = 0;
          uVar5 = 0;
        }
        else {
          uVar5 = ((uVar3 & 0xff) * 0xff) / (uVar3 >> 0x18);
          if (0xfe < uVar5) {
            uVar5 = 0xff;
          }
          uVar4 = ((uVar4 & 0xff) * 0xff) / (uint)(ushort)bVar1;
          if (0xfe < uVar4) {
            uVar4 = 0xff;
          }
          uVar2 = ((uVar2 & 0xff) * 0xff) / (uint)(ushort)bVar1;
          if (0xfe < uVar2) {
            uVar2 = 0xff;
          }
        }
        uVar3 = uVar5 & 0xff | (uVar4 & 0xff) << 8 | (uVar2 & 0xff) << 0x10 | uVar3 & 0xff000000;
      }
      if (local_10 != (long *)0x0) {
        (**(code **)(*local_10 + 8))();
      }
    }
  }
  return uVar3;
}


