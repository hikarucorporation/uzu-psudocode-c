// Function : canUnderstand
// Namespace: juce:GIFImageFormat
// Entry    : 003553a0
// Prototype: bool canUnderstand(undefined8 param_1_00, long * param_2)
// Body     : 003553a0 - 0035541c


/* juce::GIFImageFormat::canUnderstand(juce::InputStream&) */

bool __thiscall juce::GIFImageFormat::canUnderstand(undefined8 param_1_00,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  char local_1c [4];
  
  uVar3 = 4;
  lVar4 = 0;
  do {
    uVar2 = 0x70000000;
    if (uVar3 < 0x70000000) {
      uVar2 = uVar3 & 0xffffffff;
    }
    uVar1 = (**(code **)(*param_2 + 0x20))(param_2,local_1c + lVar4,uVar2);
    if ((int)uVar1 < 0) {
      lVar4 = (long)(int)uVar1;
      break;
    }
    if (uVar1 == 0) break;
    lVar4 = lVar4 + (ulong)uVar1;
    uVar3 = uVar3 - uVar1;
  } while (uVar3 != 0);
  bVar5 = false;
  if (((lVar4 == 4) && (local_1c[0] == 'G')) && (local_1c[1] == 'I')) {
    bVar5 = local_1c[2] == 'F';
  }
  return bVar5;
}


