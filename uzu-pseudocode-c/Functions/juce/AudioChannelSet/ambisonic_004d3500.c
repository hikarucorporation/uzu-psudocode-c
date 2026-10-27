// Function : ambisonic
// Namespace: juce:AudioChannelSet
// Entry    : 004d3500
// Prototype: AudioChannelSet * ambisonic(AudioChannelSet * this, int param_1)
// Body     : 004d3500 - 004d36b1


/* juce::AudioChannelSet::ambisonic(int) */

AudioChannelSet * __thiscall juce::AudioChannelSet::ambisonic(AudioChannelSet *this,int param_1)

{
  AudioChannelSet *pAVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  AudioChannelSet *__ptr;
  AudioChannelSet *pAVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong __nmemb;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 4;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  this[0x24] = (AudioChannelSet)0x0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  iVar9 = (param_1 + 1) * (param_1 + 1);
  if (iVar9 != 0) {
    pAVar1 = this + 8;
    __ptr = (AudioChannelSet *)0x0;
    uVar13 = 4;
    lVar6 = 0;
    iVar3 = 0;
    do {
      uVar8 = (&ambisonic(int)::continuousRanges)[lVar6];
      iVar10 = ((int)(uVar8 >> 0x20) - (int)uVar8) + 1;
      if (iVar9 - iVar3 <= iVar10) {
        iVar10 = iVar9 - iVar3;
      }
      if (0 < iVar10) {
        uVar12 = iVar10 + 1;
        uVar11 = uVar13;
        do {
          uVar7 = (uint)uVar8;
          __nmemb = uVar11;
          if (-1 < (int)uVar7) {
            if (*(int *)(this + 0x20) < (int)uVar7) {
              uVar4 = (ulong)((uVar7 >> 5) + 1);
              if (uVar11 < uVar4) {
                __nmemb = uVar4 * 3 + 6 >> 1;
                *(ulong *)(this + 0x18) = __nmemb;
                uVar13 = __nmemb;
                if (__ptr == (AudioChannelSet *)0x0) {
                  free((void *)0x0);
                  __ptr = calloc(__nmemb,4);
                  *(AudioChannelSet **)this = __ptr;
                  uVar2 = *(undefined8 *)(this + 0x10);
                  *(undefined8 *)__ptr = *(undefined8 *)pAVar1;
                  *(undefined8 *)(__ptr + 8) = uVar2;
                }
                else {
                  __ptr = realloc(__ptr,__nmemb * 4);
                  *(AudioChannelSet **)this = __ptr;
                  if (!(__nmemb < uVar11 || __nmemb - uVar11 == 0)) {
                    pAVar5 = __ptr;
                    if (__ptr == (AudioChannelSet *)0x0) {
                      pAVar5 = pAVar1;
                    }
                    memset(pAVar5 + uVar11 * 4,0,(__nmemb - uVar11) * 4);
                  }
                }
              }
              *(uint *)(this + 0x20) = uVar7;
            }
            pAVar5 = __ptr;
            if (__ptr == (AudioChannelSet *)0x0) {
              pAVar5 = pAVar1;
            }
            *(uint *)(pAVar5 + (ulong)(uVar7 >> 5) * 4) =
                 *(uint *)(pAVar5 + (ulong)(uVar7 >> 5) * 4) | 1 << ((byte)uVar8 & 0x1f);
          }
          uVar12 = uVar12 - 1;
          uVar8 = (ulong)(uVar7 + 1);
          uVar11 = __nmemb;
        } while (1 < uVar12);
      }
      iVar3 = iVar10 + iVar3;
      lVar6 = lVar6 + 1;
    } while (iVar3 < iVar9);
  }
  return this;
}


