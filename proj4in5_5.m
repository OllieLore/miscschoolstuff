rng(0)

h = 75;
a = 201:h:876;
b = 275:h:950;

rp = [2.5 2.5 5.0 7.5 12.5 17.5 42.5 5.0 2.5 2.5]/100';
cp = [2.5 5.0 10.0 17.5 30.0 47.5 90.0 95.0 97.5 100]/100';
n = length(cp);


m(1) = cp(1)/(h/2);
m(n) = (cp(n)-cp(n-1))/(1.5*h);

for k=2:n-1
    m(k) = (cp(k)-cp(k-1))/h;

end

N = 100000000;

Cost = [];
p = 36;
r = 81;

Sk = 1;
for S=625:1:655
    C = 0;
    for k = 1:N
        rd = rand;
            if rd<cp(1), x0=(a(1)+b(1))/2; y0=cp(1); x = x0+(rd-y0)/m(1);
            elseif rd<cp(2), x0=(a(2)+b(2))/2; y0=cp(2); x = x0+(rd-y0)/m(2);
            elseif rd<cp(3), x0=(a(3)+b(3))/2; y0=cp(3); x = x0+(rd-y0)/m(3);
            elseif rd<cp(4), x0=(a(4)+b(4))/2; y0=cp(4); x = x0+(rd-y0)/m(4);
            elseif rd<cp(5), x0=(a(5)+b(5))/2; y0=cp(5); x = x0+(rd-y0)/m(5);
            elseif rd<cp(6), x0=(a(6)+b(6))/2; y0=cp(6); x = x0+(rd-y0)/m(6);
            elseif rd<cp(7), x0=(a(7)+b(7))/2; y0=cp(7); x = x0+(rd-y0)/m(7);
            elseif rd<cp(8), x0=(a(8)+b(8))/2; y0=cp(8); x = x0+(rd-y0)/m(8);
            elseif rd<cp(9), x0=(a(9)+b(9))/2; y0=cp(9); x = x0+(rd-y0)/m(9);
            else x0=b(10); y0=cp(10); x = x0+(rd-y0)/m(10);
            end

         if x<S, Cxs = p*S; else Cxs = p*S + (x-S)*r; end
         C = C + Cxs;
    end
    Cost(Sk) = C/N;
    Sk = Sk + 1;
end
plot(Cost, '*')
