static const char GPIO_HTML[] PROGMEM = R"=="==(<div class="alert alert-warning">!!WARNING!!<br/>Do not change anything here unless you know exactly what you are doing! Changing things here could cause the device to stop responding</div> <form method=post  action="/save"> <input type=hidden  name=gc  value=true /> <div class="my-3 p-3 bg-white rounded shadow"> <h6>GPIO settings</h6> <div class="d-flex flex-row flex-wrap"> <div class="m-2 input-group input-group-sm" style="width: 150px;"> <div class=input-group-prepend > <span class=input-group-text >HAN</span> </div> <select name=h  class=form-control > ${h} </select> </div> <div class="m-2 input-group input-group-sm" style="width: 150px;"> <div class=input-group-prepend > <span class=input-group-text >LED</span> </div> <input name=l  type=number  min=2  max="${g}" class=form-control  value="${l}"/> <div class=input-group-append  title=Inverted > <label class=input-group-text > <input type=checkbox  name=i  value=true  ${i}/> inv </label> </div> </div> <div class="m-2 input-group input-group-sm" style="width: 250px;"> <div class=input-group-prepend > <span class=input-group-text >RGB</span> </div> <input name=r  type=number  min=2  max="${g}" class=form-control  value="${r}"/> <input name=e  type=number  min=2  max="${g}" class=form-control  value="${e}"/> <input name=b  type=number  min=2  max="${g}" class=form-control  value="${b}"/> <div class=input-group-append  title=Inverted > <label class=input-group-text > <input type=checkbox  name=n  value=true  ${n}/> inv </label> </div> </div> <div class="m-2 input-group input-group-sm" style="width: 130px;"> <div class=input-group-prepend > <span class=input-group-text >AP button</span> </div> <input name=a  type=number  min=0  max="${g}" class=form-control  value="${a}"/> </div> <div class="m-2 input-group input-group-sm" style="width: 150px;"> <div class=input-group-prepend > <span class=input-group-text >Temperature</span> </div> <input name=t  type=number  min=0  max="${g}" class=form-control  value="${t}"/> </div> <div class="m-2 input-group input-group-sm" style="width: 150px;"> <div class=input-group-prepend > <span class=input-group-text >Analog temp</span> </div> <input name=m  type=number  min=0  max="${g}" class=form-control  value="${m}"/> </div> <div class="m-2 input-group input-group-sm" style="width: 100px;"> <div class=input-group-prepend > <span class=input-group-text >Vcc</span> </div> <input name=v  type=number  min=0  max="${g}" class=form-control  value="${v}"/> </div> <div class="m-2 input-group input-group-sm" style="width: 200px;"> <div class=input-group-prepend > <span class=input-group-text >GND resistor</span> </div> <input type=number  min=1  max=1000  step=1  class=form-control  name=d  value="${d}" /> <div class=input-group-append  title=Inverted > <label class=input-group-text >k&ohm;</label> </div> </div> <div class="m-2 input-group input-group-sm" style="width: 190px;"> <div class=input-group-prepend > <span class=input-group-text >Vcc resistor</span> </div> <input type=number  min=1  max=1000  step=1  class=form-control  name=s  value="${s}" /> <div class=input-group-append  title=Inverted > <label class=input-group-text >k&ohm;</label> </div> </div> <div class="m-2 input-group input-group-sm" style="width: 140px;"> <div class=input-group-prepend > <span class=input-group-text >Multiplier</span> </div> <input type=number  min=0.1  max=10  step=0.01  class=form-control  name=u  value="${u}" /> </div> <div class="m-2 input-group input-group-sm" style="width: 120px;"> <div class=input-group-prepend > <span class=input-group-text >Offset</span> </div> <input type=number  min=0.0  max=3.5  step=0.01  class=form-control  name=o  value="${o}" /> </div> <div class="m-2 input-group input-group-sm" style="width: 130px;"> <div class=input-group-prepend > <span class=input-group-text >Boot limit</span> </div> <input type=number  min=2.5  max=3.5  step=0.1  class=form-control  name=c  value="${c}" /> </div> </div> </div> <hr/> <div class="row form-group"> <div class=col-6 > <a href="/" class="btn btn-outline-secondary">Back</a> </div> <div class="col-6 text-right"> <button class="btn btn-primary">Save</button> </div> </div> </form>)=="==";
const int GPIO_HTML_LEN PROGMEM = 4178;