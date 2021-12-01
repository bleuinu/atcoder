class LRUCache
  def initialize(capacity)
    @capacity = capacity
    @cache = {}
  end

  def get(key)
    if @cache[key]
      value = @cache[key]
      @cache.delete(key)
      @cache[key] = value
      @cache.shift if @cache.length > @capacity
      return value
    else
      return -1
    end
  end


  def put(key, value)
    @cache.delete(key)
    @cache[key] = value
    @cache.shift if @cache.length > @capacity
  end
end
