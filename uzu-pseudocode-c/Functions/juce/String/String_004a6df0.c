// Function : String
// Namespace: juce:String
// Entry    : 004a6df0
// Prototype: undefined String(String * this, byte * param_1, long param_2)
// Body     : 004a6df0 - 004a6ee0


/* juce::String::String(char const*, unsigned long) */

void __thiscall juce::String::String(String *this,byte *param_1,long param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  uint uVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  pbVar2 = &DAT_0061ac58;
  if (((param_1 != (byte *)0x0) && (param_2 != 0)) && (bVar1 = *param_1, bVar1 != 0)) {
    lVar7 = 1;
    lVar5 = 0;
    do {
      lVar8 = lVar7 + (ulong)(bVar1 >> 7);
      lVar7 = lVar8 + 1;
      if (param_2 + -1 == lVar5) {
        lVar5 = param_2;
        break;
      }
      bVar1 = param_1[lVar5 + 1];
      lVar5 = lVar5 + 1;
    } while (bVar1 != 0);
    uVar9 = lVar8 + 4U & 0xfffffffffffffffc;
    puVar3 = operator_new__(uVar9 + 0x17);
    LOCK();
    *puVar3 = 0;
    UNLOCK();
    *(ulong *)(puVar3 + 2) = uVar9;
    pbVar2 = (byte *)(puVar3 + 4);
    pbVar6 = pbVar2;
    if (0 < (int)lVar5) {
      uVar4 = (int)lVar5 + 2;
      do {
        while( true ) {
          bVar1 = *param_1;
          param_1 = param_1 + 1;
          if (bVar1 == 0) goto LAB_004a6ecf;
          if (-1 < (char)bVar1) break;
          *pbVar6 = bVar1 >> 6 | 0xc0;
          pbVar6[1] = bVar1 & 0x3f | 0x80;
          pbVar6 = pbVar6 + 2;
          uVar4 = uVar4 - 1;
          if (uVar4 < 3) goto LAB_004a6ecf;
        }
        *pbVar6 = bVar1;
        pbVar6 = pbVar6 + 1;
        uVar4 = uVar4 - 1;
      } while (2 < uVar4);
    }
LAB_004a6ecf:
    *pbVar6 = 0;
  }
  *(byte **)this = pbVar2;
  return;
}


