#!/usr/bin/env ruby

require_relative 'simulator'

def main
  sim = Simulator.instance
  sim.run
end

def init

end

if __FILE__ == $0
main
end
