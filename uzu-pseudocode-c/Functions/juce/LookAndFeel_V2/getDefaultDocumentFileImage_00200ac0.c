// Function : getDefaultDocumentFileImage
// Namespace: juce:LookAndFeel_V2
// Entry    : 00200ac0
// Prototype: long getDefaultDocumentFileImage(LookAndFeel_V2 * this, undefined8 param_1, undefined8 param_2, char * param_3, SVGState * * param_4, undefined8 param_5)
// Body     : 00200ac0 - 00200b15


/* non-virtual thunk to juce::LookAndFeel_V2::getDefaultDocumentFileImage() */

long __thiscall
juce::LookAndFeel_V2::getDefaultDocumentFileImage
          (LookAndFeel_V2 *this,undefined8 param_1,undefined8 param_2,char *param_3,
          SVGState **param_4,undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  long local_10;
  
  lVar2 = *(long *)(this + 0x110);
  if (*(long *)(this + 0x110) == 0) {
    createDrawableFromSVG
              ((juce *)&local_10,
               (byte *)
               "\n<svg version=\"1\" viewBox=\"-10 -10 450 600\" xmlns=\"http://www.w3.org/2000/svg\">\n  <path d=\"M17 0h290l120 132v426c0 10-8 19-17 19H17c-9 0-17-9-17-19V19C0 8 8 0 17 0z\" fill=\"#e5e5e5\" stroke=\"#888888\" stroke-width=\"7\"/>\n  <path d=\"M427 132H324c-9 0-17-9-17-19V0l120 132z\" fill=\"#ccc\"/>\n</svg>\n"
               ,param_2,param_3,param_4,param_5);
    plVar1 = *(long **)(this + 0x110);
    *(long *)(this + 0x110) = local_10;
    lVar2 = local_10;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
      return *(long *)(this + 0x110);
    }
  }
  return lVar2;
}


