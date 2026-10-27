// Function : String
// Namespace: juce:String
// Entry    : 00492b20
// Prototype: undefined String(String * this, byte * param_1)
// Body     : 00492b20 - 00492bda


/* juce::String::String(char const*) */

void __thiscall juce::String::String(String *this,byte *param_1)

{
  byte *pbVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  pbVar1 = &DAT_0061ac58;
  if ((param_1 != (byte *)0x0) && (bVar4 = *param_1, bVar4 != 0)) {
    lVar6 = 0;
    pbVar1 = param_1;
    do {
      pbVar1 = pbVar1 + 1;
      lVar5 = lVar6 + (ulong)(bVar4 >> 7);
      lVar6 = lVar5 + 1;
      bVar4 = *pbVar1;
    } while (bVar4 != 0);
    uVar7 = lVar5 + 5U & 0xfffffffffffffffc;
    puVar2 = operator_new__(uVar7 + 0x17);
    LOCK();
    *puVar2 = 0;
    UNLOCK();
    *(ulong *)(puVar2 + 2) = uVar7;
    pbVar1 = (byte *)(puVar2 + 4);
    bVar4 = *param_1;
    pbVar3 = pbVar1;
    if (bVar4 != 0) {
      do {
        param_1 = param_1 + 1;
        if ((char)bVar4 < '\0') {
          *pbVar3 = bVar4 >> 6 | 0xc0;
          pbVar3[1] = bVar4 & 0x3f | 0x80;
          pbVar3 = pbVar3 + 1;
        }
        else {
          *pbVar3 = bVar4;
        }
        pbVar3 = pbVar3 + 1;
        bVar4 = *param_1;
      } while (bVar4 != 0);
    }
    *pbVar3 = 0;
  }
  *(byte **)this = pbVar1;
  return;
}


