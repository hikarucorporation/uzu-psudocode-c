// Function : updateRange
// Namespace: juce:Slider:Pimpl
// Entry    : 002d9040
// Prototype: undefined updateRange(Pimpl * this)
// Body     : 002d9040 - 002d92c9


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::Slider::Pimpl::updateRange() */

void __thiscall juce::Slider::Pimpl::updateRange(Pimpl *this)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  long local_20;
  undefined1 local_18 [8];
  
  if (*(int *)(this + 0x21c) == -1) {
    *(undefined4 *)(this + 0x218) = 7;
    dVar3 = *(double *)(this + 0x108);
    dVar4 = (double)(_DAT_005d91b0 & (ulong)dVar3);
    if (dVar4 == DAT_005d94e0) {
      if ((dVar3 == 0.0) && (!NAN(dVar3))) goto LAB_002d9057;
    }
    else if ((dVar4 <= DAT_005db368) || (dVar4 <= DAT_005db370 * dVar4)) goto LAB_002d9057;
    uVar2 = SUB84(dVar3 * _DAT_005de6c0 + DAT_005d9098,0);
    uVar1 = -uVar2;
    if ((int)uVar1 < 0) {
      uVar1 = uVar2;
    }
    if (((((uVar1 * -0x33333333 >> 1 | (uint)((uVar1 * -0x33333333 & 1) != 0) << 0x1f) < 0x1999999a)
         && (*(undefined4 *)(this + 0x218) = 6, uVar2 = (uVar1 / 10) * -0x33333333,
            (uVar2 >> 1 | (uint)((uVar2 & 1) != 0) << 0x1f) < 0x1999999a)) &&
        (*(undefined4 *)(this + 0x218) = 5, uVar2 = (uVar1 / 100) * -0x33333333,
        (uVar2 >> 1 | (uint)((uVar2 & 1) != 0) << 0x1f) < 0x1999999a)) &&
       (((*(undefined4 *)(this + 0x218) = 4, uVar2 = (uVar1 / 1000) * -0x33333333,
         (uVar2 >> 1 | (uint)((uVar2 & 1) != 0) << 0x1f) < 0x1999999a &&
         (*(undefined4 *)(this + 0x218) = 3, uVar2 = (uVar1 / 10000) * -0x33333333,
         (uVar2 >> 1 | (uint)((uVar2 & 1) != 0) << 0x1f) < 0x1999999a)) &&
        (*(undefined4 *)(this + 0x218) = 2, uVar2 = (uVar1 / 100000) * -0x33333333,
        (uVar2 >> 1 | (uint)((uVar2 & 1) != 0) << 0x1f) < 0x1999999a)))) {
      uVar1 = (uVar1 / 1000000) * -0x33333333;
      *(uint *)(this + 0x218) = (uint)(0x19999999 < (uVar1 >> 1 | (uint)((uVar1 & 1) != 0) << 0x1f))
      ;
    }
  }
LAB_002d9057:
  if (*(int *)(this + 0x20) - 9U < 2) {
    (**(code **)(**(long **)(this + 0x80) + 0x10))(&local_20);
                    /* try { // try from 002d9082 to 002d908c has its CatchHandler @ 002d92f2 */
    dVar3 = (double)(**(code **)(local_20 + 0x20))(local_18);
                    /* try { // try from 002d9092 to 002d9097 has its CatchHandler @ 002d92ea */
    (**(code **)(local_20 + 0x58))(local_18);
    setMinValue(dVar3,this,0,'\0');
    (**(code **)(**(long **)(this + 0xb0) + 0x10))(&local_20);
                    /* try { // try from 002d90c5 to 002d90cf has its CatchHandler @ 002d92e2 */
    dVar3 = (double)(**(code **)(local_20 + 0x20))(local_18);
                    /* try { // try from 002d90d5 to 002d90da has its CatchHandler @ 002d92da */
    (**(code **)(local_20 + 0x58))(local_18);
    setMaxValue(dVar3,this,0,'\0');
  }
  else {
    (**(code **)(**(long **)(this + 0x50) + 0x10))(&local_20);
                    /* try { // try from 002d9107 to 002d9111 has its CatchHandler @ 002d92d2 */
    dVar3 = (double)(**(code **)(local_20 + 0x20))(local_18);
                    /* try { // try from 002d9117 to 002d911c has its CatchHandler @ 002d92ca */
    (**(code **)(local_20 + 0x58))(local_18);
    setValue(dVar3,this,0);
  }
  updateText(this);
  return;
}


