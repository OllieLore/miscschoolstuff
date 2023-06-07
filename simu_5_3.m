N = 100;
c = zeros(6,1);
d = zeros(6,1);


for k = 1:N
    r = rand;
    if r < 1/6
        c(1) = c(1) + 1;
        d(1) = d(1) + 1;
    elseif r < 2/6
        c(2) = c(2) +1;
        d(2) = d(2) + 1;
    elseif r < 3/6
        c(3) = c(3) +1;
        d(3) = d(3) + 1;
    elseif r < 4/6
        c(4) = c(4) +1;
        d(4) = d(4) + 1;
    elseif r < 5/6
        c(5) = c(5) +1;
        d(5) = d(5) + 1;
    else
        c(6) = c(6) +1;
        d(6) = d(6) + 1;
    end
end

chance = c/N,
chance2 = d/N,