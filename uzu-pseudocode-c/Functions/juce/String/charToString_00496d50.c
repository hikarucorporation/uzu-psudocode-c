// Function : charToString
// Namespace: juce:String
// Entry    : 00496d50
// Prototype: undefined charToString(String * this, uint param_1)
// Body     : 00496d50 - 00496e50


/* juce::String::charToString(wchar_t) */

void __thiscall juce::String::charToString(String *this,uint param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  sbyte sVar3;
  uint uVar4;
  
  puVar1 = operator_new__((ulong)(0xffff < param_1) * 4 + 0x1b);
  LOCK();
  *puVar1 = 0;
  UNLOCK();
  *(ulong *)(puVar1 + 2) = (ulong)(0xffff < param_1) * 4 + 4;
  *(undefined4 **)this = puVar1 + 4;
  if (param_1 < 0x80) {
    *(char *)(puVar1 + 4) = (char)param_1;
    puVar1 = (undefined4 *)((long)puVar1 + 0x11);
  }
  else {
    uVar4 = 1;
    if (0x7ff < param_1) {
      uVar4 = 0xffff < param_1 | 2;
    }
    bVar2 = (byte)uVar4;
    sVar3 = bVar2 * '\x06';
    *(byte *)(puVar1 + 4) = (byte)(param_1 >> sVar3) | (byte)(0xff << (bVar2 ^ 7));
    *(byte *)((long)puVar1 + 0x11) =
         (byte)(param_1 >> ((bVar2 * '\x02' + -2) * '\x03' & 0x1f)) & 0x3f | 0x80;
    if (param_1 < 0x800) {
      puVar1 = (undefined4 *)((long)puVar1 + 0x12);
    }
    else {
      *(byte *)((long)puVar1 + 0x12) = (byte)(param_1 >> (sVar3 - 0xcU & 0x1f)) & 0x3f | 0x80;
      if (uVar4 - 1 < 2) {
        puVar1 = (undefined4 *)((long)puVar1 + 0x13);
      }
      else {
        *(byte *)((long)puVar1 + 0x13) = (byte)(param_1 >> (sVar3 - 0x12U & 0x1f)) & 0x3f | 0x80;
        puVar1 = puVar1 + 5;
      }
    }
  }
  *(undefined1 *)puVar1 = 0;
  return;
}


