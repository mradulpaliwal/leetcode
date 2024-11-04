/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let cur=init;
    return {
        increment:function(){
            cur+=1
            return cur;
        },
        decrement:function(){
            cur-=1
             return cur;
        },
          reset:function(){
              cur=init;
               return cur;
          }
    }
    
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */