library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_arith.ALL;
use IEEE.STD_LOGIC_unsigned.ALL;


entity adac is
port(
  a : in Std_Logic_vector(3 downto 0);
  sel0 : in Std_Logic;
  sel1 : in Std_Logic;
	clk : in Std_Logic;
  s : out Std_Logic_vector(3 downto 0);
--	acc : inout Std_Logic_vector(3 downto 0);
  c_4 : out Std_Logic;
  vdd : in Std_Logic;
  vss : in Std_Logic
);

end adac;

architecture comportamental of adac is


	signal soma: Std_Logic_vector(4 downto 0);
	signal inv: Std_Logic_vector(3 downto 0);
	signal somador: Std_Logic_vector(3 downto 0);
	signal mux0: Std_Logic_vector(3 downto 0);
	signal mux1: Std_Logic_vector(3 downto 0);
	signal acumulador: Std_Logic_vector(3 downto 0);

	begin

		process(clk) begin

			if rising_edge(clk) then
				acumulador <= mux1;
			end if;

		end process;

		inv <= not a;

		mux0 <= a when sel0 = '0' else inv;

		soma <= std_logic_vector(mux0+acumulador+sel0);

		somador <= soma(3 downto 0);
		c_4 <= soma(4);

		mux1 <= somador when sel1 = '1' else mux0;
		
		s <= mux1;

--		acc <= acumulador;

end comportamental;
