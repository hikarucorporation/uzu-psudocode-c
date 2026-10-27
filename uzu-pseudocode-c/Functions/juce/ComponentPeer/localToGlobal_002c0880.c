// Function : localToGlobal
// Namespace: juce:ComponentPeer
// Entry    : 002c0880
// Prototype: undefined1[16] localToGlobal(ComponentPeer * this, undefined8 * param_1)
// Body     : 002c0880 - 002c08d3


/* juce::ComponentPeer::localToGlobal(juce::Rectangle<int> const&) */

undefined1  [16] __thiscall
juce::ComponentPeer::localToGlobal(ComponentPeer *this,undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = (**(code **)(*(long *)this + 0x50))
                    ((float)(int)*param_1,(float)(int)((ulong)*param_1 >> 0x20));
  auVar2._0_8_ = (ulong)((double)(float)uVar1 + DAT_005d9098) & 0xffffffff |
                 (long)((double)(float)((ulong)uVar1 >> 0x20) + DAT_005d9098) << 0x20;
  auVar2._8_8_ = param_1[1];
  return auVar2;
}


