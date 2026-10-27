// Function : getDefaultFolderImage
// Namespace: juce:LookAndFeel_V2
// Entry    : 00200a60
// Prototype: long getDefaultFolderImage(LookAndFeel_V2 * this, undefined8 param_1, undefined8 param_2, char * param_3, SVGState * * param_4, undefined8 param_5)
// Body     : 00200a60 - 00200ab5


/* non-virtual thunk to juce::LookAndFeel_V2::getDefaultFolderImage() */

long __thiscall
juce::LookAndFeel_V2::getDefaultFolderImage
          (LookAndFeel_V2 *this,undefined8 param_1,undefined8 param_2,char *param_3,
          SVGState **param_4,undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  long local_10;
  
  lVar2 = *(long *)(this + 0x108);
  if (*(long *)(this + 0x108) == 0) {
    createDrawableFromSVG
              ((juce *)&local_10,
               (byte *)
               "\n<svg xmlns=\"http://www.w3.org/2000/svg\" xmlns:xlink=\"http://www.w3.org/1999/xlink\" width=\"706\" height=\"532\">\n  <defs>\n    <linearGradient id=\"a\">\n      <stop stop-color=\"#adf\" offset=\"0\"/>\n      <stop stop-color=\"#ecfaff\" offset=\"1\"/>\n    </linearGradient>\n    <linearGradient id=\"b\" x1=\".6\" x2=\"0\" y1=\".9\" xlink:href=\"#a\"/>\n    <linearGradient id=\"c\" x1=\".6\" x2=\".1\" y1=\".9\" y2=\".3\" xlink:href=\"#a\"/>\n  </defs>\n  <g class=\"currentLayer\">\n    <path d=\"M112.1 104c-8.2 2.2-13.2 11.6-11.3 21l68.3 342.7c1.9 9.4 10.1 15.2 18.4 13l384.3-104.1c8.2-2.2 13.2-11.6 11.3-21l-48-266a15.8 15.8 0 0 0-18.4-12.8l-224.2 38s-20.3-41.3-28.3-39.3z\" display=\"block\" fill=\"url(#b)\" stroke=\"#446c98\" stroke-width=\"7\"/>\n    <path d=\"M608.6 136.8L235.2 208a22.7 22.7 0 0 0-16 19l-40.8 241c1.7 8.4 9.6 14.5 17.8 12.3l380-104c8-2.2 10.7-10.2 12.3-18.4l38-210.1c.4-15.4-10.4-11.8-18-11.1z\" display=\"block\" fill=\"url(#c)\" opacity=\".8\" stroke=\"#446c98\" stroke-width=\"7\"/>\n  </g>\n</svg>\n"
               ,param_2,param_3,param_4,param_5);
    plVar1 = *(long **)(this + 0x108);
    *(long *)(this + 0x108) = local_10;
    lVar2 = local_10;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
      return *(long *)(this + 0x108);
    }
  }
  return lVar2;
}


